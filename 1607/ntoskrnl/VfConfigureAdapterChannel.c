/*
 * XREFs of VfConfigureAdapterChannel @ 0x140706E8C
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD, __int64))ViGetRealDmaOperation(a1, 168LL);
  return RealDmaOperation(a1, a2, a3);
}
