/*
 * XREFs of VfSuspectDriversInsert @ 0x1407160E8
 * Callers:
 *     VfTriageAddDrivers @ 0x1407D16BC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407D1AE4 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfSuspectDriversInsert(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140300B28;
  if ( *(__int64 **)qword_140300B28 != &VfSuspectDriversList )
    __fastfail(3u);
  *a1 = &VfSuspectDriversList;
  a1[1] = result;
  *result = a1;
  qword_140300B28 = (__int64)a1;
  return result;
}
