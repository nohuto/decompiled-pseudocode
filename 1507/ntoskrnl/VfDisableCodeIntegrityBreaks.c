/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x140738818
 * Callers:
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_14078F450 = 0x200000002LL;
  dword_14078F458 = 2;
  return result;
}
