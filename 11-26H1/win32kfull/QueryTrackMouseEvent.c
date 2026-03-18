/*
 * XREFs of QueryTrackMouseEvent @ 0x1401CFFCC
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1401CFD70 (NtUserTrackMouseEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall QueryTrackMouseEvent(__int64 a1)
{
  struct tagTHREADINFO *v2; // r8
  __int64 v3; // rdx

  v2 = PtiCurrent(a1);
  v3 = *((_QWORD *)v2 + 61);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 24;
  if ( (*(_DWORD *)(v3 + 48) & 0xC0) != 0
    && *((_QWORD *)v2 + 58) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL) + 464LL) )
  {
    if ( *(_DWORD *)(v3 + 200) != 1 )
      *(_DWORD *)(a1 + 4) |= 0x10u;
    if ( (*(_DWORD *)(v3 + 48) & 0x80u) != 0 )
      *(_DWORD *)(a1 + 4) |= 2u;
    if ( (*(_DWORD *)(v3 + 48) & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4) |= 1u;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 220);
    }
    *(_QWORD *)(a1 + 8) = **(_QWORD **)(v3 + 192);
  }
  return 1LL;
}
