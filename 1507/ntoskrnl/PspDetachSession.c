/*
 * XREFs of PspDetachSession @ 0x14051C2DC
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(void *a1, struct _KTHREAD *a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObject(a1);
}
