/*
 * XREFs of PopInsertPowerRequestObject @ 0x140503A20
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = (_QWORD *)qword_140304C88;
    if ( *(__int64 **)qword_140304C88 != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *a1 = &PopSpecialPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140304C88 = (__int64)a1;
  }
  else
  {
    result = (_QWORD *)qword_140304C58;
    if ( *(__int64 **)qword_140304C58 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *a1 = &PopPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140304C58 = (__int64)a1;
  }
  return result;
}
