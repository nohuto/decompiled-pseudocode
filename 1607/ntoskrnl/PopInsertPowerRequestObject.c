/*
 * XREFs of PopInsertPowerRequestObject @ 0x1405209B8
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x14051E314 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x14051E750 (PopCreateUserPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopInsertPowerRequestObject(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    result = (_QWORD *)qword_140304C48;
    if ( *(__int64 **)qword_140304C48 != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *a1 = &PopSpecialPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140304C48 = (__int64)a1;
  }
  else
  {
    result = (_QWORD *)qword_140304C18;
    if ( *(__int64 **)qword_140304C18 != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *a1 = &PopPowerRequestObjectList;
    a1[1] = result;
    *result = a1;
    qword_140304C18 = (__int64)a1;
  }
  return result;
}
