/*
 * XREFs of PspDetachSession @ 0x1404C0930
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObject(a1);
}
