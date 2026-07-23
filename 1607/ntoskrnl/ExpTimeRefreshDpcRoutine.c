/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x1400B1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine7 @ 0x1401691A0 (KiCustomAccessRoutine7.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v5[66]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v6; // [rsp+138h] [rbp-80h]
  __int64 v7; // [rsp+160h] [rbp-58h]
  __int64 v8; // [rsp+178h] [rbp-40h]
  _DWORD *v9; // [rsp+188h] [rbp-30h]

  v9 = v5;
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v5[9] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8 = a3;
    v7 = __ROL8__(a2, a3);
    v6 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
