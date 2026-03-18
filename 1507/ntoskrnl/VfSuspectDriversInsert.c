/*
 * XREFs of VfSuspectDriversInsert @ 0x14074A148
 * Callers:
 *     VfTriageAddDrivers @ 0x1407FBC10 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407FC064 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall VfSuspectDriversInsert(__int64 *a1)
{
  __int64 **result; // rax

  result = (__int64 **)qword_14032BB48;
  *a1 = (__int64)&VfSuspectDriversList;
  a1[1] = (__int64)result;
  if ( *result != &VfSuspectDriversList )
    __fastfail(3u);
  *result = a1;
  qword_14032BB48 = (__int64)a1;
  return result;
}
