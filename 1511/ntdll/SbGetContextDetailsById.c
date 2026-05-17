/*
 * XREFs of SbGetContextDetailsById @ 0x18000EF34
 * Callers:
 *     SbpDetermineDllContext @ 0x18000E3A8 (SbpDetermineDllContext.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18000ECD0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbpRecalculateDynamicContext @ 0x180080160 (SbpRecalculateDynamicContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsById(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&SbSupportedOsList + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
