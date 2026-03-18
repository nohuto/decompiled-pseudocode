/*
 * XREFs of _wtoi @ 0x14014DA68
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140537FAC (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 * Callees:
 *     wcstolX @ 0x14014F464 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  return result;
}
