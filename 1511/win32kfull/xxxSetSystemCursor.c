/*
 * XREFs of xxxSetSystemCursor @ 0x1C02294C8
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C02207E0 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 */

__int64 __fastcall xxxSetSystemCursor(__int64 a1, __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _WORD *v6; // rax

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_WORD **)gasyscur;
  do
  {
    if ( *v6 == a2 )
      break;
    ++v4;
    ++v5;
    v6 += 8;
  }
  while ( v5 < 17 );
  if ( v4 == 17 || !(unsigned int)zzzSetSystemImage(a1, *(_QWORD *)&gasyscur[8 * v4 + 4]) )
    return 0LL;
  xxxSetMonitorIcoCurIndex(0LL, 0, v4, 2);
  return 1LL;
}
