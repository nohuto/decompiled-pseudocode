/*
 * XREFs of SmKmStoreDelete @ 0x1404D1364
 * Callers:
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1400F7130 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 *     SmProcessDeleteRequest @ 0x1406570F8 (SmProcessDeleteRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     SmWdStopMonitoring @ 0x1402096E0 (SmWdStopMonitoring.c)
 *     SmKmEtwLogStoreChange @ 0x140659FC8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14065A104 (SmKmEtwLogStoreStats.c)
 */

__int64 __fastcall SmKmStoreDelete(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // r14
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // ebp
  __int16 v12; // cx
  __int64 v13; // r12
  ULONGLONG *v14; // rax
  ULONGLONG *v15; // r15
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  bool v19; // zf
  int v21; // [rsp+58h] [rbp+10h]

  v3 = a2 >> 5;
  v21 = a2 & 0x1F;
  CurrentThread = KeGetCurrentThread();
  v5 = (_QWORD *)(a1 + 176LL * (a2 & 0x1F));
  --CurrentThread->KernelApcDisable;
  v8 = v5 + 21;
  v9 = KeAbPreAcquire((ULONG_PTR)(v5 + 21), 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 42, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5 + 21, v9, (ULONG_PTR)(v5 + 21));
  v11 = 0;
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = *((_WORD *)v5 + 12);
  if ( v3 != (v12 & 0x7FF) )
    goto LABEL_32;
  v13 = *v5;
  if ( (unsigned __int64)(*v5 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_32;
  if ( !a3 )
  {
LABEL_8:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, *v5, 7LL);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 1);
    if ( (v5[3] & 0x800) != 0 )
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 2);
    v14 = SmEtwEnabled(0);
    v15 = v14;
    if ( v14 )
    {
      SmKmEtwLogStoreStats(v14, *v5);
      SmKmEtwLogStoreChange(v15, *v5, &SmEventStoreDelete);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, v13, 2LL);
    *v5 = 0LL;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = KeAbPreAcquire(a1 + 5792, 0LL, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5792), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5792), v17, a1 + 5792);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    if ( *(_DWORD *)(a1 + 5808) == v21 )
      *(_DWORD *)(a1 + 5808) = -1;
    if ( (v5[3] & 0x800) != 0 )
    {
      v19 = (*(_DWORD *)(a1 + 5804))-- == 1;
      if ( v19 )
      {
        SmWdStopMonitoring((PKTIMER)(a1 + 5640));
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, 0LL, 3LL);
      }
    }
    v19 = (*(_DWORD *)(a1 + 5800))-- == 1;
    if ( v19 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 5632))(a1, 0LL, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5792));
    KeAbPostRelease(a1 + 5792);
    KeLeaveCriticalRegion();
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 21);
    KeAbPostRelease((ULONG_PTR)(v5 + 21));
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, v13, 1LL);
    return v11;
  }
  if ( (v12 & 0x800) != 0 )
  {
LABEL_32:
    v11 = -1073741735;
  }
  else
  {
    if ( (v12 & 0x1000) == 0 )
      goto LABEL_8;
    v11 = -1073741790;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5 + 21);
  KeAbPostRelease((ULONG_PTR)(v5 + 21));
  KeLeaveCriticalRegion();
  return v11;
}
