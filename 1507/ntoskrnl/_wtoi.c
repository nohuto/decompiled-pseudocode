/*
 * XREFs of _wtoi @ 0x1401726C8
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14057BF4C (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 * Callees:
 *     wcstolX @ 0x1401740B8 (wcstolX.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  int result; // eax

  result = 0;
  if ( Str )
    return wcstolX((unsigned __int16 *)Str, 0LL, 10, 1);
  return result;
}
