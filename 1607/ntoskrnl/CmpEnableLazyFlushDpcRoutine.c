/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x140127000
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x140132070 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine4 @ 0x140168D20 (KiCustomAccessRoutine4.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // [rsp+0h] [rbp-108h] BYREF
  int v5; // [rsp+20h] [rbp-E8h]
  __int64 *v6; // [rsp+60h] [rbp-A8h]
  __int64 v7; // [rsp+C5h] [rbp-43h]
  __int64 v8; // [rsp+CDh] [rbp-3Bh]
  unsigned __int64 v9; // [rsp+F5h] [rbp-13h]

  v6 = &v4;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v5 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v9 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v8 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1LL, DeferredContext, SystemArgument1, SystemArgument2, v5);
}
