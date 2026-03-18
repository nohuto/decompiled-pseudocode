/*
 * XREFs of ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0
 * Callers:
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     _SetTimer @ 0x1400211F0 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1402DA3DC (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r8d

  v4 = a2;
  if ( a2 != -3 && a2 != -4 )
    return 0LL;
  if ( (unsigned int)xxxMNSetTop(a1) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904) + 4976LL);
    if ( !a3 )
      v8 >>= 2;
    SetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, v8, 0, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, 0, 1, 0LL);
  }
  return 1LL;
}
