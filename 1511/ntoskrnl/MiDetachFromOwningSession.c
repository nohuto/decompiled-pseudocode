/*
 * XREFs of MiDetachFromOwningSession @ 0x1400F1224
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 * Callees:
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 */

LONG_PTR __fastcall MiDetachFromOwningSession(void *a1, __int64 a2)
{
  MmDetachSession((__int64)a1, a2);
  return ObfDereferenceObject(a1);
}
