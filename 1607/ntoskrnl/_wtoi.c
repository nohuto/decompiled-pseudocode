/*
 * XREFs of _wtoi @ 0x14014DFD8
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1405384EC (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 * Callees:
 *     wcstolX @ 0x14014FA24 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  return result;
}
