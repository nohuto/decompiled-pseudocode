/*
 * XREFs of UserReleaseRedirectionBitmap @ 0x1C01DE540
 * Callers:
 *     <none>
 * Callees:
 *     CleanupWindowRedirection @ 0x1C00567B0 (CleanupWindowRedirection.c)
 */

__int64 __fastcall UserReleaseRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax

  result = ValidateHwnd(a1);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 51) & 0x20) != 0 )
      return CleanupWindowRedirection((struct tagWND *)result);
  }
  return result;
}
