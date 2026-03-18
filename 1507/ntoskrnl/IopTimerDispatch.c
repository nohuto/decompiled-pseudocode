/*
 * XREFs of IopTimerDispatch @ 0x140130388
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x140083664 (EtwTraceTimedEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiCustomAccessRoutine1 @ 0x14018CE10 (KiCustomAccessRoutine1.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int *v4; // rbx
  BOOL v5; // r15d
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // r12
  int v9; // r14d
  struct _LIST_ENTRY *i; // rdi
  _DWORD v11[70]; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v12; // [rsp+11Ah] [rbp-AEh]
  __int64 v13; // [rsp+152h] [rbp-76h]
  __int64 v14; // [rsp+162h] [rbp-66h]
  _DWORD *v15; // [rsp+170h] [rbp-58h]
  char v16[16]; // [rsp+188h] [rbp-40h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v15 = v11;
  v4 = (int *)a2;
  v5 = (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0;
  v11[32] = v5;
  result = (a2 >> 47) + 1;
  if ( result > 1 )
  {
    v11[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v14 = a3;
    v12 = __ROL8__(a2, a3);
    v13 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    result = KiCustomAccessRoutine1(a2);
    v7 = __ROL8__(v13, v14);
    v4 = (int *)__ROR8__(v12, v14);
    *(_QWORD *)(v7 + 32) = v4;
    *(_BYTE *)v7 = 19;
  }
  if ( *v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&IopTimerLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopTimerLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopTimerLock);
    }
    v9 = *v4;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v9; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v5 )
        {
          EtwGetKernelTraceTimestamp(v16, (char *)0x40800000);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(0xF46u, 0x40800000u, (__int64)&i[1], 8, 4196866, (__int64)v16);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
        }
        --v9;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&IopTimerLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&IopTimerLock, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
