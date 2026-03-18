/*
 * XREFs of GetCursorForDim @ 0x1C012391C
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6EA4 (xxxEnsureMonitorCursors.c)
 *     NtUserLinkDpiCursor @ 0x1C021D1C0 (NtUserLinkDpiCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorForDim(__int64 a1, int a2)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 48); result && *(_DWORD *)(result + 76) != a2; result = *(_QWORD *)(result + 40) )
    ;
  return result;
}
