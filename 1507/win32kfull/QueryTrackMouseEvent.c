/*
 * XREFs of QueryTrackMouseEvent @ 0x1C0079764
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C0079690 (NtUserTrackMouseEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryTrackMouseEvent(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 24;
  if ( (*(_DWORD *)(v1 + 32) & 0xC0) != 0
    && *(_QWORD *)(gptiCurrent + 392LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 176) + 16LL) + 392LL) )
  {
    if ( *(_DWORD *)(v1 + 184) != 1 )
      *(_DWORD *)(a1 + 4) |= 0x10u;
    if ( (*(_DWORD *)(v1 + 32) & 0x80u) != 0 )
      *(_DWORD *)(a1 + 4) |= 2u;
    if ( (*(_DWORD *)(v1 + 32) & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4) |= 1u;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v1 + 204);
    }
    *(_QWORD *)(a1 + 8) = **(_QWORD **)(v1 + 176);
  }
  return 1LL;
}
