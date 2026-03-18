/*
 * XREFs of ?W32kCddGetWin32kCommand@@YAIQEAUHDEV__@@@Z @ 0x1C00197B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall W32kCddGetWin32kCommand(_DWORD *a1)
{
  unsigned int result; // eax

  result = a1[660];
  if ( gOldModeChange )
    result |= 0x40000000u;
  return result;
}
