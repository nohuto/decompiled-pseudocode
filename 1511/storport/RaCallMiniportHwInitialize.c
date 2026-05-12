/*
 * XREFs of RaCallMiniportHwInitialize @ 0x1C0012A38
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0012798 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x1C0024450 (RaidAdapterReInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportHwInitialize(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 8LL))(*(_QWORD *)(a1 + 240) + 16LL) == 0
       ? 0xC0000001
       : 0;
}
