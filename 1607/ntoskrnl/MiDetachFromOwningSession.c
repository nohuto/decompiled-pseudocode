/*
 * XREFs of MiDetachFromOwningSession @ 0x1400B55DC
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 * Callees:
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 */

LONG_PTR __fastcall MiDetachFromOwningSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
