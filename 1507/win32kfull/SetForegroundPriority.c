/*
 * XREFs of SetForegroundPriority @ 0x1C0046FC0
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02049B0 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = (unsigned int)((*(_DWORD *)(*(_QWORD *)(a1 + 384) + 12LL) & 0x800) != 0) + 1;
  return SetForegroundPriorityProcess(*(_QWORD *)(a1 + 384), a1, v2);
}
