/*
 * XREFs of BgpConsoleDisplayString @ 0x140761850
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140761548 (BgpConsoleDisplayCharacterEx.c)
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
      if ( (dword_1403188C8 & 0x10000) != 0 )
      {
        AnFwFadeCompletion();
        dword_1403188C8 &= ~0x10000u;
      }
      v2 = 0;
      while ( *a1 )
      {
        v3 = BgpConsoleDisplayCharacterEx(*a1, dword_140318904, dword_140318908, dword_1403188CC, dword_1403188D0);
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
