/*
 * XREFs of AcpiWrapperReadConfig @ 0x1C0003A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiWrapperReadConfig(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(PmHalDispatchTable + 48))(a1, a2);
}
