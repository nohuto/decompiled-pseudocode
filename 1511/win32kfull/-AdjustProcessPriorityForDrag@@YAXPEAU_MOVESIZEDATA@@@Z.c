/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0204D30
 * Callers:
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C0081580 (SetForegroundPriority.c)
 *     ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C0205B0C (-IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct tagWND **a1)
{
  struct tagWND *v2; // rcx
  int v3; // eax
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // r9
  int v7; // edx

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 45);
  if ( (v3 & 0x100000) != 0 )
  {
    if ( !(unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v4 != gptiForeground )
        return;
      v5 = 0;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 376) + 776LL) & 0xC0000) == 0
      && (*(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 776LL) & 0xC0000) != 0 )
    {
      v5 = 1;
LABEL_8:
      SetForegroundPriority(v4, v5);
      *((_DWORD *)a1 + 45) |= 0x40000000u;
    }
  }
  else
  {
    if ( (v3 & 0x40000000) == 0 )
      return;
    if ( (unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v6 == gptiForeground )
        return;
      v7 = 0;
    }
    else
    {
      if ( v6 != gptiForeground )
        return;
      v7 = 1;
    }
    SetForegroundPriority(v6, v7);
  }
}
