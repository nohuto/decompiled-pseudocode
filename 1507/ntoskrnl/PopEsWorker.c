/*
 * XREFs of PopEsWorker @ 0x140581C48
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 *     ExSubscribeWnfStateChange @ 0x14055B664 (ExSubscribeWnfStateChange.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopEsUpdateState @ 0x14058201C (PopEsUpdateState.c)
 *     PopEsUpdateSetting @ 0x1405C1768 (PopEsUpdateSetting.c)
 */

void __fastcall PopEsWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  signed __int32 v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  signed __int32 v8; // edi
  int v9; // edx
  int v10; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  signed __int8 v15; // cf
  __int64 v16; // rbx
  __int64 v17; // rdx
  bool v18; // cc
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // ecx
  signed __int64 v31; // rcx
  ULONG_PTR v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rbx
  bool v39[12]; // [rsp+40h] [rbp-38h] BYREF
  int v40; // [rsp+4Ch] [rbp-2Ch]
  int Buffer; // [rsp+90h] [rbp+18h] BYREF
  int v42; // [rsp+94h] [rbp+1Ch]

  do
  {
    v4 = 0;
    _m_prefetchw(&PopEsWorkItemDue);
    v5 = _InterlockedOr(&PopEsWorkItemDue, 0);
    _BitScanForward(&v6, v5);
    v7 = 1 << v6;
    v8 = v5 & ~(1 << v6);
    if ( ((unsigned __int8)v5 & (unsigned __int8)~(1 << v6) & 8) != 0 )
    {
      if ( ((v7 - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_4;
      v4 = 1;
      v8 &= ~8u;
    }
    if ( v7 == 2 )
      v8 &= ~4u;
LABEL_4:
    if ( v5 != _InterlockedCompareExchange(&PopEsWorkItemDue, v8, v5) )
      continue;
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 2 )
          continue;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v12 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
        v16 = v12;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx(&PopEsLock, v12, (ULONG_PTR)&PopEsLock, v14);
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        qword_14032D448 = (__int64)KeGetCurrentThread();
      }
      else
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, a4);
        v15 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
        v38 = v36;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx(&PopEsLock, v36, (ULONG_PTR)&PopEsLock, v37);
        if ( v38 )
          *(_BYTE *)(v38 + 26) |= 1u;
        qword_14032D448 = (__int64)KeGetCurrentThread();
        PopEsUpdateSetting();
      }
      LOBYTE(v13) = v4;
      PopEsUpdateState(v13);
      if ( qword_14032D448 )
        qword_14032D448 = 0LL;
      v18 = (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10;
      v19 = PopEsLock - 16;
      _m_prefetchw(&PopEsLock);
      if ( v18 )
        v19 = 0LL;
      if ( (PopEsLock & 2) != 0
        || (v20 = PopEsLock, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v19, PopEsLock)) )
      {
        ExfReleasePushLock(&PopEsLock, v17);
      }
      KeAbPostRelease((ULONG_PTR)&PopEsLock);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v42 = -1;
      Buffer = Buffer & 0x800000 | 1 | (2 * (PopEsState == 1));
      ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
      PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v25 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, v24);
      v15 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
      v27 = v25;
      if ( v15 )
        ExfAcquirePushLockExclusiveEx(&PopEsLock, v25, (ULONG_PTR)&PopEsLock, v26);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      qword_14032D448 = (__int64)KeGetCurrentThread();
      v28 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      PopCurrentPowerState(v39);
      v30 = 0;
      PopEsAcOnline = v39[0];
      if ( v39[1] )
        v30 = v40;
      PopEsLastBatteryThreshold = dword_14032E890;
      PopEsLastUserAwaySetting = byte_14032E894;
      PopEsLastStateChangeTimeStamp = v28;
      PopEsLastBatteryCharge = v30;
      if ( qword_14032D448 )
        qword_14032D448 = 0LL;
      _m_prefetchw(&PopEsLock);
      v31 = PopEsLock - 16;
      if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v31 = 0LL;
      if ( (PopEsLock & 2) != 0
        || (v32 = PopEsLock, v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v31, PopEsLock)) )
      {
        ExfReleasePushLock(&PopEsLock, v29);
      }
      KeAbPostRelease((ULONG_PTR)&PopEsLock);
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ExSubscribeWnfStateChange(
        (__int64)&PopEsWnfSubscriptionOverride,
        (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE,
        1,
        0,
        (__int64)PopEsWnfSubscriptionOverrideCallback,
        0LL);
    }
  }
  while ( v8 );
}
