/*
 * XREFs of WindowFromCacheDC @ 0x1402A4A00
 * Callers:
 *     NtUserSelectPalette @ 0x1401AEB50 (NtUserSelectPalette.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x140292500 (xxxRealizePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowFromCacheDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *i; // rbx

  v5 = 0LL;
  GreLockVisRgnShared(a1, a2, a3, a4);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968);
  for ( i = *(__int64 **)(v8 + 24); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968) + 24LL;
    if ( i == (__int64 *)v8 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x400000) == 0 )
        v5 = i[10];
      break;
    }
  }
  GreUnlockVisRgn(v9);
  return v5;
}
