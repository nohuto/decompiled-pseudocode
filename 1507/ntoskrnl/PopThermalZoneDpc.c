/*
 * XREFs of PopThermalZoneDpc @ 0x14012F780
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     KiCustomAccessRoutine3 @ 0x14018D860 (KiCustomAccessRoutine3.c)
 */

void __fastcall PopThermalZoneDpc(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  _DWORD v6[75]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v7; // [rsp+12Ch] [rbp-7Ch]
  __int64 v8; // [rsp+144h] [rbp-64h]
  unsigned __int64 v9; // [rsp+164h] [rbp-44h]
  _DWORD *v10; // [rsp+190h] [rbp-18h]

  v10 = v6;
  v4 = DeferredContext;
  if ( v4 >> 47 != -1 && v4 >> 47 != 0 )
  {
    v6[10] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v9 = SystemArgument1;
    v7 = __ROL8__(DeferredContext, SystemArgument1);
    v8 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine3(DeferredContext);
    v5 = __ROL8__(v8, v9);
    v4 = __ROR8__(v7, v9);
    *(_QWORD *)(v5 + 32) = v4;
    *(_BYTE *)v5 = 19;
  }
  if ( (PoDebug & 0x20) != 0 )
    DbgPrint(
      "Thermal Zone %p: Passive cooling timeout in state %08lx\n",
      (const void *)v4,
      *(unsigned __int8 *)(v4 + 64));
  IoCancelIrp(*(PIRP *)(v4 + 56));
}
