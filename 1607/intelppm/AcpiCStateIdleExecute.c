/*
 * XREFs of AcpiCStateIdleExecute @ 0x1C0001300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdleExecute(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(__int64, _QWORD))(a1 + 72LL * a2 + 88))(a1 + 96 + 72LL * a2, a4);
  return 0LL;
}
