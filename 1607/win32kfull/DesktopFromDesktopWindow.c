/*
 * XREFs of DesktopFromDesktopWindow @ 0x1C00D8CD8
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 */

__int64 __fastcall DesktopFromDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ProcessWindowStation; // rax
  __int64 v4; // rcx

  v1 = 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    if ( ProcessWindowStation )
    {
      while ( 1 )
      {
        ProcessWindowStation = *(_QWORD *)(ProcessWindowStation + 16);
        if ( !ProcessWindowStation )
          break;
        v4 = *(_QWORD *)(ProcessWindowStation + 8);
        if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
          return ProcessWindowStation;
      }
    }
  }
  return v1;
}
