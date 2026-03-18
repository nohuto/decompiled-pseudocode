/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C00399CC
 * Callers:
 *     xxxDesktopRecalc @ 0x1C0039710 (xxxDesktopRecalc.c)
 *     SnapshotWindowRects @ 0x1C01D5D80 (SnapshotWindowRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopWindowFromDesktop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(_QWORD *)(v2 + 16);
  }
  return result;
}
