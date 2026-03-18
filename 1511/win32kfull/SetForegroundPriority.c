/*
 * XREFs of SetForegroundPriority @ 0x1C0081580
 * Callers:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0081354 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0204D30 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 12LL) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(*(_QWORD *)(a1 + 376), a1, v2);
}
