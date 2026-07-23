/*
 * XREFs of IopTimerDispatch @ 0x1400017F4
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14009DEB8 (EtwTraceTimedEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine1 @ 0x140168EA0 (KiCustomAccessRoutine1.c)
 */

void __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  BOOL v5; // r15d
  KIRQL v6; // r12
  int v7; // r14d
  struct _LIST_ENTRY *i; // rdi
  _DWORD v9[66]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v10; // [rsp+108h] [rbp-D0h]
  _DWORD *v11; // [rsp+128h] [rbp-B0h]
  __int64 v12; // [rsp+13Ah] [rbp-9Eh]
  __int64 v13; // [rsp+172h] [rbp-66h]
  __int64 v14; // [rsp+182h] [rbp-56h]
  _BYTE v15[16]; // [rsp+190h] [rbp-48h] BYREF

  v11 = v9;
  v10 = a2;
  v5 = (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0;
  v9[33] = v5;
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    v9[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v14 = a3;
    v12 = __ROL8__(a2, a3);
    v13 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine1(a2);
  }
  if ( *(_DWORD *)a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v7 = *(_DWORD *)a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v7; i = i->Flink )
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
        --v7;
      }
    }
    KeReleaseSpinLock(&IopTimerLock, v6);
  }
}
