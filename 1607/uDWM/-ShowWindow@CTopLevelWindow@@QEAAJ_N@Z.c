/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18007E8A8 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007F008 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x180020BDC (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180027A88 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18007D294 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  unsigned int IsVisible; // r12d
  CProjectionBorderVisual *v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // r8
  struct _LIST_ENTRY *v14; // r14
  CTopLevelWindow *v15; // rcx
  unsigned __int64 v16; // r15
  unsigned int v17; // r9d
  unsigned int v18; // edx
  unsigned __int8 v19; // cl
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  bool v24; // dl
  struct CVisual *v25; // rdx
  __int64 v26; // rcx
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF

  if ( *((char *)this + 264) < 0 )
  {
    a2 = 1;
  }
  else if ( (*(_BYTE *)(*((_QWORD *)this + 93) + 580LL) & 1) != 0 )
  {
    a2 = 0;
  }
  IsVisible = CVisual::SetIsVisible(*((CVisual **)this + 35), a2);
  v5 = *(CProjectionBorderVisual **)(*((_QWORD *)this + 93) + 400LL);
  if ( v5 )
  {
    if ( !a2 || (v24 = 1, (*((_BYTE *)this + 265) & 1) != 0) )
      v24 = 0;
    CProjectionBorderVisual::Show(v5, v24);
    v25 = *(struct CVisual **)(*((_QWORD *)this + 93) + 400LL);
    v26 = *((_QWORD *)v25 + 3);
    if ( v26 )
      VisualCollection::InsertRelative((VisualCollection *)(v26 + 32), v25, this, 1, 1);
  }
  v6 = 0;
  v7 = *((_QWORD *)this + 93);
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
  if ( *(_DWORD *)(v8 + 568) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 544) + 8LL * v6);
      v10 = *(_QWORD *)(v9 + 384);
      if ( !v10 )
        goto LABEL_14;
      if ( *(_QWORD *)(v9 + 120) != *(_QWORD *)(v7 + 120) )
        goto LABEL_14;
      v11 = *(_QWORD *)(v10 + 288);
      if ( !v11 )
        goto LABEL_14;
      v12 = *(_QWORD *)(v11 + 320);
      if ( !v12 )
        goto LABEL_14;
      v13 = *(struct _LIST_ENTRY **)(v7 + 40);
      v14 = *(struct _LIST_ENTRY **)(v11 + 352);
      if ( v13 == v14 )
        goto LABEL_24;
      v15 = *(CTopLevelWindow **)(v7 + 384);
      v16 = *(_QWORD *)(v11 + 360);
      if ( v15 )
        break;
LABEL_14:
      if ( ++v6 >= *(_DWORD *)(v8 + 568) )
        return IsVisible;
    }
    v17 = *(_DWORD *)(v12 + 296);
    v18 = 0;
    if ( v17 )
    {
      while ( v13 != *(struct _LIST_ENTRY **)(*(_QWORD *)(v12 + 272) + 8LL * v18) )
      {
        if ( ++v18 >= v17 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      CTopLevelWindow::GetActualWindowRect(v15, &rcDst, 0, 1, 1);
      v19 = *(_BYTE *)(v7 + 576);
      if ( (v19 & 1) == 0
        || ((unsigned __int8)~*(_BYTE *)(v7 + 580) & (unsigned __int8)~(v19 >> 2) & 1) == 0
        || (*(_DWORD *)(v7 + 100) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v11 + 568)) )
      {
        goto LABEL_14;
      }
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                               v16);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        Blink = i[2].Blink;
        if ( Blink == v14 )
          break;
        if ( Blink == *(struct _LIST_ENTRY **)(v7 + 40) )
          goto LABEL_14;
      }
    }
LABEL_24:
    CVisual::SetDirtyFlags((CVisual *)v11, 0x10000);
    goto LABEL_14;
  }
  return IsVisible;
}
