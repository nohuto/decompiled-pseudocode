/*
 * XREFs of SbGetContextDetailsById @ 0x180041C90
 * Callers:
 *     SbpDetermineDllContext @ 0x180041658 (SbpDetermineDllContext.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180041A50 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbpRecalculateDynamicContext @ 0x18004528C (SbpRecalculateDynamicContext.c)
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
