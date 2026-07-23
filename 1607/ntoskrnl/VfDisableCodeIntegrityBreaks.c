/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1407043A8
 * Callers:
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_140759410 = 0x200000002LL;
  qword_140759418 = 0x200000002LL;
  dword_140759420 = 2;
  return result;
}
