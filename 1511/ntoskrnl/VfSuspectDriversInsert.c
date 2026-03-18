/*
 * XREFs of VfSuspectDriversInsert @ 0x1406C7744
 * Callers:
 *     VfTriageAddDrivers @ 0x1407852AC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140785700 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall VfSuspectDriversInsert(__int64 *a1)
{
  __int64 **result; // rax

  result = (__int64 **)qword_1402DB7E8;
  *a1 = (__int64)&VfSuspectDriversList;
  a1[1] = (__int64)result;
  if ( *result != &VfSuspectDriversList )
    __fastfail(3u);
  *result = a1;
  qword_1402DB7E8 = (__int64)a1;
  return result;
}
