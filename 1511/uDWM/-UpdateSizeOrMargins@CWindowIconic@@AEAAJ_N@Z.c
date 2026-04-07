/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030950 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003B0F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003B1C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800705B0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180016460 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001E9EC (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A020 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18002A0AC (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003B48C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003CA94 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x180082378 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int128 v6; // xmm1
  DWORD v7; // edx
  int v8; // esi
  LONG right; // r15d
  int v10; // r14d
  LONG bottom; // r12d
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  char v15; // si
  char v16; // r14
  bool v17; // r15
  int v18; // eax
  int updated; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rax
  int WindowRectForLivePreview; // eax
  int v25; // ecx
  int v26; // eax
  __int128 v27; // [rsp+38h] [rbp-29h]
  __int128 v28; // [rsp+48h] [rbp-19h] BYREF
  __int128 v29; // [rsp+58h] [rbp-9h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp+17h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 10);
  v30 = *(struct tagRECT *)(*((_QWORD *)this + 9) + 48LL);
  v6 = *(_OWORD *)(v5 + 64);
  v27 = *(_OWORD *)(v5 + 48);
  Rect = 0LL;
  v7 = *(_DWORD *)(v5 + 100);
  v29 = v6;
  AdjustWindowRectEx(&Rect, v7, 0, 0);
  v8 = -Rect.left;
  right = Rect.right;
  v10 = -Rect.top;
  bottom = Rect.bottom;
  LODWORD(v28) = -Rect.left;
  DWORD1(v28) = Rect.right;
  DWORD2(v28) = -Rect.top;
  HIDWORD(v28) = Rect.bottom;
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v30);
    v4 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x168u);
      return v4;
    }
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v23 = *((_QWORD *)this + 3)) != 0 )
      v12 = *(_QWORD *)(v23 + 24);
    else
      v12 = *(_QWORD *)&Rect.left;
    v30.right = v8 + right + v12 + v30.left;
    v30.bottom = v10 + bottom + v30.top + HIDWORD(v12);
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v28;
  *(_OWORD *)(*((_QWORD *)this + 10) + 236LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v30;
  *(_OWORD *)(*((_QWORD *)this + 10) + 188LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  v13 = DWORD2(v27) - v27;
  if ( DWORD2(v27) - (int)v27 < 0 )
    v13 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_QWORD *)(*((_QWORD *)this + 10) + 172LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 304LL) = 2;
  v14 = v30.right - v30.left;
  if ( v30.right - v30.left < 0 )
    v14 = 0;
  if ( v13 != v14 )
    goto LABEL_10;
  v15 = 0;
  v25 = HIDWORD(v27) - DWORD1(v27);
  if ( HIDWORD(v27) - DWORD1(v27) < 0 )
    v25 = 0;
  v26 = v30.bottom - v30.top;
  if ( v30.bottom - v30.top < 0 )
    v26 = 0;
  if ( v25 != v26 )
LABEL_10:
    v15 = 1;
  if ( (_DWORD)v27 != v30.left || (v16 = 0, DWORD1(v27) != v30.top) )
    v16 = 1;
  v17 = operator!=(&v28, &v29);
  if ( v15 && (v18 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v4 = v18, v18 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x175u);
  }
  else
  {
    if ( v17 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v16 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v15 || v17 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x184u);
      }
      else
      {
        v20 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x185u);
        }
        else
        {
          v21 = CVisual::RenderRecursive(*((CVisual **)this + 13));
          v4 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x186u);
          }
          else if ( a2 )
          {
            CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
        }
      }
    }
  }
  return v4;
}
