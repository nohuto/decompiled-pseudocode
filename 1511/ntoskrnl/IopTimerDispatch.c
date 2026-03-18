/*
 * XREFs of IopTimerDispatch @ 0x140001768
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400DF398 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KiCustomAccessRoutine1 @ 0x14015D4C0 (KiCustomAccessRoutine1.c)
 */

void __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int *v4; // rbx
  BOOL v5; // r15d
  __int64 v6; // rdx
  KIRQL v7; // r12
  int v8; // r14d
  struct _LIST_ENTRY *i; // rdi
  _DWORD v10[70]; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v11; // [rsp+11Ah] [rbp-AEh]
  __int64 v12; // [rsp+152h] [rbp-76h]
  __int64 v13; // [rsp+162h] [rbp-66h]
  _DWORD *v14; // [rsp+170h] [rbp-58h]
  _BYTE v15[16]; // [rsp+188h] [rbp-40h] BYREF

  v14 = v10;
  v4 = (int *)a2;
  v5 = (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0;
  v10[32] = v5;
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    v10[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v13 = a3;
    v11 = __ROL8__(a2, a3);
    v12 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine1(a2);
    v6 = __ROL8__(v12, v13);
    v4 = (int *)__ROR8__(v11, v13);
    *(_QWORD *)(v6 + 32) = v4;
    *(_BYTE *)v6 = 19;
  }
  if ( *v4 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v8 = *v4;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v8; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v5 )
        {
          EtwGetKernelTraceTimestamp(v15, 1082130432LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 1082130432, (_DWORD)i + 16, 8, 4196866, (__int64)v15);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
        }
        --v8;
      }
    }
    KeReleaseSpinLock(&IopTimerLock, v7);
  }
}
