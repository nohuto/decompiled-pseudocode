/*
 * XREFs of ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C005CB44
 * Callers:
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     UserGetHwnd @ 0x1C01DECB4 (UserGetHwnd.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall PwndFromHDC(__int64 *a1)
{
  __int64 v1; // r9
  __int64 **i; // r8

  v1 = 0LL;
  for ( i = *(__int64 ***)(gpDispInfo + 64LL); i; i = (__int64 **)*i )
  {
    if ( i[1] == a1 )
    {
      if ( ((_DWORD)i[8] & 0x80C01000) == 0x1000 )
        return (struct tagWND *)i[2];
      return (struct tagWND *)v1;
    }
  }
  return (struct tagWND *)v1;
}
