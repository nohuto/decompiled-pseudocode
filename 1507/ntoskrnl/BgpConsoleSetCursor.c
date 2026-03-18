/*
 * XREFs of BgpConsoleSetCursor @ 0x140761C58
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x1407618EC (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  BgpFwAcquireLock();
  if ( a1 >= 0x50 || a2 >= dword_1403188C4 || a3 > 0x64 )
  {
    v6 = -1073741811;
  }
  else if ( dword_140318904 == a1 && dword_140318908 == a2 && dword_14031890C == a3 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    if ( dword_14031890C )
    {
      dword_14031890C = 0;
      BgpConsoleDrawCursor();
    }
    dword_140318904 = a1;
    dword_140318908 = a2;
    dword_14031890C = a3;
    if ( a3 )
      BgpConsoleDrawCursor();
  }
  BgpFwReleaseLock();
  return v6;
}
