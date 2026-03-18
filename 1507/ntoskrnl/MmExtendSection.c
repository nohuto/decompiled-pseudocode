/*
 * XREFs of MmExtendSection @ 0x1404B096C
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x1406A48DC (NtExtendSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiUpdateLastSubsectionSize @ 0x140077EB8 (MiUpdateLastSubsectionSize.c)
 *     MiSubsectionRequiresCharge @ 0x140077FD8 (MiSubsectionRequiresCharge.c)
 *     MiFindLastSubsection @ 0x140082B4C (MiFindLastSubsection.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiGetAdditionalExtents @ 0x140230AC8 (MiGetAdditionalExtents.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 LastSubsection; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r12
  NTSTATUS v19; // esi
  __int16 v20; // ax
  __int16 v22; // ax
  ULONG_PTR v23; // rax
  struct _FILE_OBJECT *v24; // r14
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // r9
  __int16 v30; // ax
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r9
  signed __int8 v34; // cf
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rsi
  LARGE_INTEGER *v40; // rcx
  __int16 v41; // ax
  unsigned __int64 v42; // rax
  __int16 v43; // ax
  __int16 v44; // ax
  __int16 v45; // ax
  int AdditionalExtents; // eax
  __int64 v47; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER FileSize; // [rsp+88h] [rbp+20h] BYREF

  v7 = MiSectionControlArea(a1);
  if ( (*(_DWORD *)(v7 + 56) & 0x420) != 0 || !*(_QWORD *)(v7 + 64) )
    return 3221225607LL;
  if ( *v5 <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v7;
    CurrentThread = KeGetCurrentThread();
    v10 = (unsigned __int64)(*v5 + 4095LL) >> 12;
    v47 = *(_QWORD *)v7;
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&qword_14034E788, 0LL, 0LL, v6);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E788, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14034E788, v11, (ULONG_PTR)&qword_14034E788, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v42 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v42 )
      {
        a2->QuadPart = v42;
        goto LABEL_15;
      }
    }
    if ( a3 )
    {
LABEL_10:
      LastSubsection = MiFindLastSubsection(v7, 0);
      v15 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
      if ( v10 <= v15 )
      {
        *(LARGE_INTEGER *)(a1 + 48) = *a2;
        if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
        {
          _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
          MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
        }
        goto LABEL_15;
      }
      v16 = *(unsigned int *)(LastSubsection + 52);
      v17 = v10 - v15;
      if ( v17 <= v16 )
      {
        LODWORD(v16) = v17;
      }
      else
      {
        v18 = v17 - v16;
        if ( v18 )
        {
          v19 = MiExtendSection(LastSubsection, a2, (unsigned int)v16, v18, v47);
          if ( v19 < 0 )
          {
LABEL_16:
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E788, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E788);
            KeAbPostRelease((ULONG_PTR)&qword_14034E788);
            v20 = CurrentThread->SpecialApcDisable + 1;
            CurrentThread->SpecialApcDisable = v20;
            if ( !v20
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            return (unsigned int)v19;
          }
          goto LABEL_14;
        }
      }
      if ( (*(_DWORD *)(v7 + 56) & 0x40000000) != 0 )
      {
        AdditionalExtents = MiGetAdditionalExtents((__int64 *)LastSubsection);
      }
      else
      {
        if ( !(unsigned int)MiSubsectionRequiresCharge(LastSubsection) )
        {
LABEL_50:
          MiUpdateLastSubsectionSize(LastSubsection, a2, v16);
LABEL_14:
          _InterlockedExchange64((volatile __int64 *)(v47 + 24), a2->QuadPart);
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
LABEL_15:
          v19 = 0;
          goto LABEL_16;
        }
        AdditionalExtents = MiGetSubsectionCharges(v36, (unsigned int)v16);
      }
      v19 = AdditionalExtents;
      if ( AdditionalExtents < 0 )
        goto LABEL_16;
      goto LABEL_50;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E788, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E788);
    KeAbPostRelease((ULONG_PTR)&qword_14034E788);
    v22 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v23 = MI_REFERENCE_CONTROL_AREA_FILE(v7);
    --CurrentThread->KernelApcDisable;
    v24 = (struct _FILE_OBJECT *)v23;
    v26 = KeAbPreAcquire((ULONG_PTR)&qword_14034E790, 0LL, 0LL, v25);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E790, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_14034E790, v26, (ULONG_PTR)&qword_14034E790, v27);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v19 = FsRtlGetFileSize(v24, &FileSize);
    if ( v19 < 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E790);
      KeAbPostRelease((ULONG_PTR)&qword_14034E790);
      v43 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v43;
      if ( v43 )
        goto LABEL_82;
    }
    else
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_38:
        if ( *(_QWORD *)(v8 + 32) )
        {
          --CurrentThread->SpecialApcDisable;
          v37 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, v29);
          v39 = v37;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v37, (ULONG_PTR)&qword_14034E7A0, v38);
          if ( v39 )
            *(_BYTE *)(v39 + 26) |= 1u;
          v40 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v40 )
            *v40 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
          KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
          v41 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v41;
          if ( !v41
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E790);
        KeAbPostRelease((ULONG_PTR)&qword_14034E790);
        v30 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v30;
        if ( !v30
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        MI_DEREFERENCE_CONTROL_AREA_FILE(v7, (unsigned __int64)v24);
        --CurrentThread->SpecialApcDisable;
        v32 = KeAbPreAcquire((ULONG_PTR)&qword_14034E788, 0LL, 0LL, v31);
        v34 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E788, 0LL);
        v35 = v32;
        if ( v34 )
          ExfAcquirePushLockExclusiveEx(&qword_14034E788, v32, (ULONG_PTR)&qword_14034E788, v33);
        if ( v35 )
          *(_BYTE *)(v35 + 26) |= 1u;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E790);
        KeAbPostRelease((ULONG_PTR)&qword_14034E790);
        v44 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v44;
        if ( !v44
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v19 = -1073741689;
        goto LABEL_82;
      }
      FileSize = *a2;
      v19 = FsRtlSetFileSize(v24);
      if ( v19 >= 0 )
        goto LABEL_38;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E790);
      KeAbPostRelease((ULONG_PTR)&qword_14034E790);
      v45 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v45;
      if ( v45 )
      {
LABEL_82:
        MI_DEREFERENCE_CONTROL_AREA_FILE(v7, (unsigned __int64)v24);
        return (unsigned int)v19;
      }
    }
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_82;
  }
  return 3221225536LL;
}
