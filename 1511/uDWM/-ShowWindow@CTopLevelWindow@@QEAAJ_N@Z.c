/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A1A0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035D7C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18007DCBC (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007E454 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x180023D7C (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18002AA84 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  unsigned int IsVisible; // r12d
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // r8
  struct _LIST_ENTRY *v13; // r14
  CTopLevelWindow *v14; // rcx
  unsigned __int64 v15; // r15
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned __int8 v18; // cl
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF

  if ( *((char *)this + 264) < 0 )
  {
    a2 = 1;
  }
  else if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 572LL) & 1) != 0 )
  {
    a2 = 0;
  }
  IsVisible = CVisual::SetIsVisible(*((CVisual **)this + 35), a2);
  v5 = *((_QWORD *)this + 93);
  v6 = 0;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
  if ( *(_DWORD *)(v7 + 568) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 544) + 8LL * v6);
      v9 = *(_QWORD *)(v8 + 384);
      if ( !v9 )
        goto LABEL_13;
      if ( *(_QWORD *)(v8 + 120) != *(_QWORD *)(v5 + 120) )
        goto LABEL_13;
      v10 = *(_QWORD *)(v9 + 288);
      if ( !v10 )
        goto LABEL_13;
      v11 = *(_QWORD *)(v10 + 320);
      if ( !v11 )
        goto LABEL_13;
      v12 = *(struct _LIST_ENTRY **)(v5 + 40);
      v13 = *(struct _LIST_ENTRY **)(v10 + 352);
      if ( v12 == v13 )
        goto LABEL_23;
      v14 = *(CTopLevelWindow **)(v5 + 384);
      v15 = *(_QWORD *)(v10 + 360);
      if ( v14 )
        break;
LABEL_13:
      if ( ++v6 >= *(_DWORD *)(v7 + 568) )
        return IsVisible;
    }
    v16 = *(_DWORD *)(v11 + 296);
    v17 = 0;
    if ( v16 )
    {
      while ( v12 != *(struct _LIST_ENTRY **)(*(_QWORD *)(v11 + 272) + 8LL * v17) )
      {
        if ( ++v17 >= v16 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      CTopLevelWindow::GetActualWindowRect(v14, &rcDst, 0, 1, 1);
      v18 = *(_BYTE *)(v5 + 568);
      if ( (v18 & 1) == 0
        || ((unsigned __int8)~*(_BYTE *)(v5 + 572) & (unsigned __int8)~(v18 >> 2) & 1) == 0
        || (*(_DWORD *)(v5 + 100) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v10 + 568)) )
      {
        goto LABEL_13;
      }
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                               v15);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        Blink = i[2].Blink;
        if ( Blink == v13 )
          break;
        if ( Blink == *(struct _LIST_ENTRY **)(v5 + 40) )
          goto LABEL_13;
      }
    }
LABEL_23:
    CVisual::SetDirtyFlags((CVisual *)v10, 0x10000);
    goto LABEL_13;
  }
  return IsVisible;
}
