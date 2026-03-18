/*
 * XREFs of ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C0205B0C
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0204D30 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDraggingForegroundModernApp(struct tagWND *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 1072) & 0x1C0000) == 0x40000
    && *(_QWORD *)(v1 + 1232)
    && *(struct tagWND **)(v1 + 1224) == a1
    && gptiForeground )
  {
    return *(_QWORD *)(v1 + 384) == *(_QWORD *)(gptiForeground + 384LL);
  }
  return v2;
}
