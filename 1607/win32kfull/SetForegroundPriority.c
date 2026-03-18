/*
 * XREFs of SetForegroundPriority @ 0x1C00A8060
 * Callers:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC010 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
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
