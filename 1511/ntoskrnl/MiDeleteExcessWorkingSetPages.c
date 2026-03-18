/*
 * XREFs of MiDeleteExcessWorkingSetPages @ 0x1400F46A0
 * Callers:
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiDeleteExcessWorkingSetPages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  return MiDeletePteRange(a1, a2, a3, 16);
}
