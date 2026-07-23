/*
 * XREFs of PspDetachSession @ 0x1404CE648
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObject(a1);
}
