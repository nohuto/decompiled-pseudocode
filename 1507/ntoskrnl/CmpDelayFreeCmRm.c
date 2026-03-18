/*
 * XREFs of CmpDelayFreeCmRm @ 0x1404EF054
 * Callers:
 *     CmpRunDownCmRM @ 0x1404EEE04 (CmpRunDownCmRM.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CmpDelayFreeCmRm(PVOID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  PVOID **v8; // rax
  bool v9; // zf
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax

  v5 = KeAbPreAcquire((ULONG_PTR)&CmpDelayFreeRMLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayFreeRMLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayFreeRMLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  qword_14034D528 = (__int64)KeGetCurrentThread();
  dword_14034D550 = CurrentIrql;
  v8 = (PVOID **)qword_14034D508;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v8;
  if ( *v8 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v9 = CmpDelayFreeRMWorkItemActive == 0;
  *v8 = a1;
  qword_14034D508 = (__int64)a1;
  if ( v9 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  qword_14034D528 = 0LL;
  v10 = dword_14034D550;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayFreeRMLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayFreeRMLock, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&CmpDelayFreeRMLock);
}
