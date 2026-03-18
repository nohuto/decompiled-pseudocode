/*
 * XREFs of PopInsertPowerRequestObject @ 0x1404E6410
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall PopInsertPowerRequestObject(__int64 *a1, char a2)
{
  __int64 **result; // rax

  if ( a2 )
  {
    result = (__int64 **)qword_14032F948;
    *a1 = (__int64)&PopSpecialPowerRequestObjectList;
    a1[1] = (__int64)result;
    if ( *result != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *result = a1;
    qword_14032F948 = (__int64)a1;
  }
  else
  {
    result = (__int64 **)qword_14032F918;
    *a1 = (__int64)&PopPowerRequestObjectList;
    a1[1] = (__int64)result;
    if ( *result != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *result = a1;
    qword_14032F918 = (__int64)a1;
  }
  return result;
}
