/*
 * XREFs of AcpiCStateIdleExecute @ 0x1C0002280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdleExecute(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(__int64))(a1 + 72LL * a2 + 88))(a1 + 96 + 72LL * a2);
  return 0LL;
}
