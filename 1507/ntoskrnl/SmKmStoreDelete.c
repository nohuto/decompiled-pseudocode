/*
 * XREFs of SmKmStoreDelete @ 0x1404FA05C
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1400DA004 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x1406D9384 (SmProcessDeleteRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmWdStopMonitoring @ 0x140258870 (SmWdStopMonitoring.c)
 *     SmKmEtwLogStoreChange @ 0x1406DC70C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1406DC848 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // r14
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  __int16 v13; // cx
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  struct _KTHREAD *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r15
  bool v21; // zf
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  unsigned int v26; // edi
  unsigned __int64 v28; // rax
  struct _KTHREAD *v29; // rdx
  __int16 v30; // ax
  int v31; // [rsp+20h] [rbp-48h]

  v4 = a2 >> 5;
  v31 = a2 & 0x1F;
  CurrentThread = KeGetCurrentThread();
  v6 = (_QWORD *)(a1 + 176LL * (a2 & 0x1F));
  --CurrentThread->KernelApcDisable;
  v9 = v6 + 21;
  v10 = KeAbPreAcquire((ULONG_PTR)(v6 + 21), 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6 + 42, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6 + 21, v10, (ULONG_PTR)(v6 + 21), v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *((_WORD *)v6 + 12);
  if ( v4 != (v13 & 0x7FF) )
    goto LABEL_43;
  v14 = *v6;
  if ( (unsigned __int64)(*v6 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_43;
  if ( !a3 )
  {
LABEL_8:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, *v6, 7LL);
    v15 = _InterlockedCompareExchange64(v6 + 1, 1LL, 0LL);
    if ( v15 >= 2 )
      ExfWaitForRundownProtectionRelease(v6 + 1, v15);
    if ( (v6[3] & 0x800) != 0 )
    {
      v28 = _InterlockedCompareExchange64(v6 + 2, 1LL, 0LL);
      if ( v28 >= 2 )
        ExfWaitForRundownProtectionRelease(v6 + 2, v28);
    }
    if ( (dword_140353094 & 0x10) != 0 )
    {
      SmKmEtwLogStoreStats(&qword_140353088, *v6);
      SmKmEtwLogStoreChange(&qword_140353088, *v6, &SmEventStoreDelete);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, v14, 2LL);
    *v6 = 0LL;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v18 = KeAbPreAcquire(a1 + 5792, 0LL, 0LL, v17);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5792), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5792), v18, a1 + 5792, v19);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    if ( *(_DWORD *)(a1 + 5808) == v31 )
      *(_DWORD *)(a1 + 5808) = -1;
    if ( (v6[3] & 0x800) != 0 )
    {
      v21 = (*(_DWORD *)(a1 + 5804))-- == 1;
      if ( v21 )
      {
        SmWdStopMonitoring((PKTIMER)(a1 + 5640));
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, 0LL, 3LL);
      }
    }
    v21 = (*(_DWORD *)(a1 + 5800))-- == 1;
    if ( v21 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, 0LL, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5792));
    KeAbPostRelease(a1 + 5792);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 21);
    KeAbPostRelease((ULONG_PTR)(v6 + 21));
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, v14, 1LL);
    return 0;
  }
  if ( (v13 & 0x800) != 0 )
  {
LABEL_43:
    v26 = -1073741735;
  }
  else
  {
    if ( (v13 & 0x1000) == 0 )
      goto LABEL_8;
    v26 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 21);
  KeAbPostRelease((ULONG_PTR)(v6 + 21));
  v29 = KeGetCurrentThread();
  v30 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v30;
  if ( !v30
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v26;
}
