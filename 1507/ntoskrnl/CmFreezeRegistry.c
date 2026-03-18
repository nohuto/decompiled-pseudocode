/*
 * XREFs of CmFreezeRegistry @ 0x140659CF0
 * Callers:
 *     NtFreezeRegistry @ 0x1401DF8D0 (NtFreezeRegistry.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpDisableLazyFlush @ 0x140131CEC (CmpDisableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rdx
  unsigned __int64 v7; // rtt
  BOOLEAN v8; // r14
  __int64 v9; // rdx
  __int64 *NextActiveHive; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rbp
  struct _KTHREAD *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  ULONG_PTR v20; // rsi
  signed __int32 v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  __int64 *v34; // rax
  struct _EX_RUNDOWN_REF *v35; // rbx
  unsigned __int64 v36; // rtt
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax

  v2 = 0;
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v6 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               v6,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v8 = 1;
  }
  else
  {
    v8 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v8 )
    {
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_25;
    }
  }
  if ( CmpFreezeThawState )
  {
LABEL_25:
    CmpUnlockRegistry();
    v2 = -1073741431;
    goto LABEL_26;
  }
  NextActiveHive = CmpGetNextActiveHive(0LL, v6, v3, v4);
  if ( NextActiveHive )
  {
    do
    {
      if ( (NextActiveHive[18] & 3) == 0 )
      {
        *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
        *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
        *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
        v13 = NextActiveHive[8];
        *(_QWORD *)(v13 + 112) = 0LL;
        *(_QWORD *)(v13 + 120) = 0LL;
        v14 = NextActiveHive[8];
        *(_QWORD *)(v14 + 148) = 0LL;
        *(_QWORD *)(v14 + 156) = 0LL;
        v15 = NextActiveHive[8];
        *(_QWORD *)(v15 + 128) = 0LL;
        *(_QWORD *)(v15 + 136) = 0LL;
        *(_DWORD *)(NextActiveHive[8] + 164) = 0;
        if ( (NextActiveHive[670] & 0x300) != 0x100 && !*((_DWORD *)NextActiveHive + 22) )
        {
          v16 = NextActiveHive[355];
          v17 = KeGetCurrentThread();
          v18 = KeAbPreAcquire(v16, 0LL, 0LL, v12);
          v19 = v18;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v16, 0) )
            ExpAcquireFastMutexContended(v16, v18);
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
          *(_QWORD *)(v16 + 8) = v17;
          HvMarkBaseBlockDirty((__int64)NextActiveHive);
          v20 = NextActiveHive[355];
          *(_QWORD *)(v20 + 8) = 0LL;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0);
          if ( v21 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)v20, v21);
          KeAbPostRelease(v20);
        }
      }
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive, v9, v11, v12);
    }
    while ( NextActiveHive );
    v2 = 0;
  }
  v22 = CmFreezeThawTimeoutInSeconds;
  CmpFreezeThawState = 1;
  if ( a1 )
    v22 = a1;
  KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v22, 0, 0, (__int64)&CmpFreezeThawDpc);
  CmpDisableLazyFlush(2u);
  CmpUnlockRegistry();
  v26 = KeGetCurrentThread();
  --v26->KernelApcDisable;
  for ( i = 0LL; ; i = v35 )
  {
    v34 = CmpGetNextActiveHive(i, v23, v24, v25);
    v35 = (struct _EX_RUNDOWN_REF *)v34;
    if ( !v34 )
      break;
    if ( (v34[18] & 3) == 0 )
    {
      v2 = CmpFlushHive((ULONG_PTR)v34, 0xDu);
      if ( v2 < 0 )
      {
        _m_prefetchw(&v35[347]);
        v36 = v35[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v36 != _InterlockedCompareExchange64((volatile signed __int64 *)&v35[347], v36 - 2, v36) )
          ExfReleaseRundownProtection(v35 + 347);
        CmThawRegistry();
        v2 = -1073741491;
        break;
      }
    }
  }
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_26:
  if ( v8 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v30 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)v2;
}
