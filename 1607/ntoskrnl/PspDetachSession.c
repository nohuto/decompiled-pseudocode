/*
 * XREFs of PspDetachSession @ 0x1404EC5C0
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObject(a1);
}
