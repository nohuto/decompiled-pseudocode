/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x1400F2AA8
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x140126C94 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KiCustomAccessRoutine4 @ 0x14015D340 (KiCustomAccessRoutine4.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // [rsp+0h] [rbp-108h] BYREF
  int v5; // [rsp+20h] [rbp-E8h]
  __int64 v6; // [rsp+85h] [rbp-83h]
  __int64 v7; // [rsp+8Dh] [rbp-7Bh]
  unsigned __int64 v8; // [rsp+B5h] [rbp-53h]
  __int64 *v9; // [rsp+C0h] [rbp-48h]

  v9 = &v4;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v5 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v6 = __ROL8__(DeferredContext, SystemArgument1);
    v7 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
    SystemArgument1 = __ROL8__(v7, v8);
    DeferredContext = __ROR8__(v6, v8);
    *(_QWORD *)(SystemArgument1 + 32) = DeferredContext;
    *(_BYTE *)SystemArgument1 = 19;
  }
  CmpEnableLazyFlush(1LL, DeferredContext, SystemArgument1, SystemArgument2, v5);
}
