/*
 * XREFs of _wtoi @ 0x140144648
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1405023C0 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 * Callees:
 *     wcstolX @ 0x140146088 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return wcstolX((unsigned __int16 *)Str, 0LL, 10, 1);
  return result;
}
