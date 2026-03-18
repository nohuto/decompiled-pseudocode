/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x14012E69C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KiCustomAccessRoutine7 @ 0x14015DFD0 (KiCustomAccessRoutine7.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  _DWORD v5[74]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v6; // [rsp+128h] [rbp-80h]
  __int64 v7; // [rsp+150h] [rbp-58h]
  __int64 v8; // [rsp+168h] [rbp-40h]
  _DWORD *v9; // [rsp+190h] [rbp-18h]

  v9 = v5;
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v5[10] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8 = a3;
    v7 = __ROL8__(a2, a3);
    v6 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
    v4 = __ROL8__(v6, v8);
    a2 = (volatile signed __int32 *)__ROR8__(v7, v8);
    *(_QWORD *)(v4 + 32) = a2;
    *(_BYTE *)v4 = 19;
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
