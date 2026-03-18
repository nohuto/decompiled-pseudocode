/*
 * XREFs of PopInsertPowerRequestObject @ 0x140454C94
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall PopInsertPowerRequestObject(__int64 *a1, char a2)
{
  __int64 **result; // rax

  if ( a2 )
  {
    result = (__int64 **)qword_1402DF6A8;
    *a1 = (__int64)&PopSpecialPowerRequestObjectList;
    a1[1] = (__int64)result;
    if ( *result != &PopSpecialPowerRequestObjectList )
      __fastfail(3u);
    ++PopSpecialPowerRequestObjectCount;
    *result = a1;
    qword_1402DF6A8 = (__int64)a1;
  }
  else
  {
    result = (__int64 **)qword_1402DF678;
    *a1 = (__int64)&PopPowerRequestObjectList;
    a1[1] = (__int64)result;
    if ( *result != &PopPowerRequestObjectList )
      __fastfail(3u);
    ++PopPowerRequestObjectCount;
    *result = a1;
    qword_1402DF678 = (__int64)a1;
  }
  return result;
}
