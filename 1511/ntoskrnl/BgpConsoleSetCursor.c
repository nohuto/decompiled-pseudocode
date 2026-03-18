/*
 * XREFs of BgpConsoleSetCursor @ 0x1406DEBDC
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x1406DE870 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  BgpFwAcquireLock();
  if ( a1 >= 0x50 || a2 >= dword_1402C9864 || a3 > 0x64 )
  {
    v6 = -1073741811;
  }
  else if ( dword_1402C98A4 == a1 && dword_1402C98A8 == a2 && dword_1402C98AC == a3 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    if ( dword_1402C98AC )
    {
      dword_1402C98AC = 0;
      BgpConsoleDrawCursor();
    }
    dword_1402C98A4 = a1;
    dword_1402C98A8 = a2;
    dword_1402C98AC = a3;
    if ( a3 )
      BgpConsoleDrawCursor();
  }
  BgpFwReleaseLock();
  return v6;
}
