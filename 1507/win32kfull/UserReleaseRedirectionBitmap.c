/*
 * XREFs of UserReleaseRedirectionBitmap @ 0x1C01E7880
 * Callers:
 *     <none>
 * Callees:
 *     CleanupWindowRedirection @ 0x1C008B0D0 (CleanupWindowRedirection.c)
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
