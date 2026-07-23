/*
 * XREFs of PopThermalZoneDpc @ 0x1400B20C4
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1400A097C (IoCancelIrp.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine3 @ 0x1401690E0 (KiCustomAccessRoutine3.c)
 */

void __fastcall PopThermalZoneDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v5[75]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v6; // [rsp+12Ch] [rbp-7Ch]
  __int64 v7; // [rsp+144h] [rbp-64h]
  unsigned __int64 v8; // [rsp+164h] [rbp-44h]
  _DWORD *v9; // [rsp+180h] [rbp-28h]

  v9 = v5;
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v5[10] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v8 = SystemArgument1;
    v6 = __ROL8__(DeferredContext, SystemArgument1);
    v7 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine3(DeferredContext);
  }
  IoCancelIrp(*((PIRP *)DeferredContext + 7));
}
