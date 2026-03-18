/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1406B82F4
 * Callers:
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_14070C450 = 0x200000002LL;
  dword_14070C458 = 2;
  return result;
}
