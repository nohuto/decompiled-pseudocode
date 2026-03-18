/*
 * XREFs of BgpConsoleDisplayString @ 0x1406DE7D4
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     BgpConsoleDisplayCharacterEx @ 0x1406DE4CC (BgpConsoleDisplayCharacterEx.c)
 */

__int64 __fastcall BgpConsoleDisplayString(unsigned __int16 *a1)
{
  int v2; // ebx
  int v3; // eax

  BgpFwAcquireLock();
  if ( a1 )
  {
    if ( *a1 )
    {
      if ( (dword_1402C9868 & 0x10000) != 0 )
      {
        AnFwFadeCompletion();
        dword_1402C9868 &= ~0x10000u;
      }
      v2 = 0;
      while ( *a1 )
      {
        v3 = BgpConsoleDisplayCharacterEx(*a1, dword_1402C98A4, dword_1402C98A8, dword_1402C986C, dword_1402C9870);
        if ( v3 < 0 && v2 >= 0 )
          v2 = v3;
        ++a1;
      }
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  BgpFwReleaseLock();
  return (unsigned int)v2;
}
