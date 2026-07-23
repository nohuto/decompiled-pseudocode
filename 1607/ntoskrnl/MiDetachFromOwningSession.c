/*
 * XREFs of MiDetachFromOwningSession @ 0x1400B3404
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 */

LONG_PTR __fastcall MiDetachFromOwningSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
