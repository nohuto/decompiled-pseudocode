/*
 * XREFs of MiDetachFromOwningSession @ 0x1400FD440
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 * Callees:
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 */

LONG_PTR __fastcall MiDetachFromOwningSession(void *a1, __int64 a2)
{
  MmDetachSession(a1, a2);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
