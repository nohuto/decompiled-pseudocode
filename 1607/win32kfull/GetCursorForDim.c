/*
 * XREFs of GetCursorForDim @ 0x1C008F7BC
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     xxxEnsureMonitorCursors @ 0x1C01DD64C (xxxEnsureMonitorCursors.c)
 *     NtUserLinkDpiCursor @ 0x1C0216DC0 (NtUserLinkDpiCursor.c)
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
