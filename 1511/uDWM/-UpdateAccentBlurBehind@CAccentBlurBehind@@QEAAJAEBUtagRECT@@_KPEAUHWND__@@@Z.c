/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18000F124 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18002AA84 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002C6B8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        struct CResource **this,
        struct tagRECT *a2,
        unsigned __int64 a3,
        HWND a4)
{
  struct CTopLevelWindow *v4; // r15
  int inserted; // eax
  int v10; // ebx
  _QWORD *v11; // r12
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  bool v13; // r9
  char v14; // cl
  struct _LIST_ENTRY *Blink; // r14
  HWND v16; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  HWND v18; // rdx
  HWND v19; // rsi
  struct _LIST_ENTRY *v20; // rax
  CTopLevelWindow *Flink; // rsi
  unsigned __int8 v22; // cl
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // edx
  CTopLevelWindow *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  CBaseObject *v32; // rsi
  int v33; // eax
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // r9d
  unsigned int v39; // [rsp+20h] [rbp-98h]
  unsigned int v40; // [rsp+20h] [rbp-98h]
  char v41; // [rsp+30h] [rbp-88h]
  struct CTopLevelWindow *v43; // [rsp+40h] [rbp-78h] BYREF
  HWND ShellWindowForDesktop; // [rsp+48h] [rbp-70h]
  struct CRenderDataInstruction *v45; // [rsp+50h] [rbp-68h] BYREF
  RECT *lprcSrc2; // [rsp+58h] [rbp-60h]
  struct _LIST_ENTRY *v47; // [rsp+60h] [rbp-58h]
  struct tagRECT rcDst; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0LL;
  lprcSrc2 = a2;
  v45 = 0LL;
  CVisual::SetInterpolationMode(this, 1LL);
  inserted = CVisual::ClearInstructions((CVisual *)this);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1486;
LABEL_74:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v39);
    goto LABEL_59;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((CAccentBlurBehind *)this, a2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1487;
    goto LABEL_74;
  }
  if ( !a4 )
    goto LABEL_59;
  inserted = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1502;
    goto LABEL_74;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[45], 0LL, 0, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1503;
    goto LABEL_74;
  }
  inserted = CVisual::ClearInstructions(this[45]);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1504;
    goto LABEL_74;
  }
  inserted = VisualCollection::RemoveAll((struct CResource *)((char *)this[44] + 32));
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1505;
    goto LABEL_74;
  }
  v11 = this + 34;
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 34, 8LL);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                            a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           a3);
  v14 = 0;
  v47 = WindowListForDesktop;
  v41 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_59;
  v16 = a4;
  while ( 1 )
  {
    p_Blink = &Blink[2].Blink;
    v43 = 0LL;
    v18 = (HWND)Blink[2].Blink;
    if ( v18 == v16 )
    {
      v14 = 1;
      v41 = 1;
      goto LABEL_30;
    }
    if ( v14 )
      break;
LABEL_30:
    v4 = 0LL;
LABEL_31:
    Blink = Blink->Blink;
    if ( Blink == v47 )
      goto LABEL_59;
  }
  v19 = ShellWindowForDesktop;
  if ( v18 != ShellWindowForDesktop )
  {
    v20 = Blink[32].Blink;
    if ( !v20 || (HWND)v20[2].Blink != ShellWindowForDesktop )
    {
      v4 = 0LL;
      if ( *((_DWORD *)this + 74) >= 0xAu || (Flink = (CTopLevelWindow *)Blink[24].Flink) == 0LL )
      {
        v16 = a4;
        goto LABEL_31;
      }
      v22 = (unsigned __int8)Blink[35].Blink;
      if ( (v22 & 1) == 0
        || ((unsigned __int8)~BYTE4(Blink[35].Blink) & (unsigned __int8)~(v22 >> 2) & 1) == 0
        || (HIDWORD(Blink[6].Flink) & 0x20000000) != 0
        || !v18
        || v18 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 191)
        || (CTopLevelWindow::GetActualWindowRect(Flink, &rcDst, 0, 1, 0), !IntersectRect(&rcDst, &rcDst, lprcSrc2)) )
      {
        v16 = a4;
        v14 = v41;
        goto LABEL_31;
      }
      inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(Flink, 0, 0, v13, &v43);
      v10 = inserted;
      if ( inserted < 0 )
      {
        v39 = 1568;
        goto LABEL_74;
      }
      v4 = v43;
      v23 = VisualCollection::InsertRelative((struct CResource *)((char *)this[44] + 32), v43, 0LL, 1, 1);
      v10 = v23;
      if ( v23 < 0 )
      {
        v40 = 1570;
        goto LABEL_85;
      }
      v24 = *((_DWORD *)this + 74);
      v25 = v24 + 1;
      if ( v24 + 1 < v24 )
      {
        v36 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v10 = -2147024362;
LABEL_80:
        v40 = 1571;
LABEL_83:
        v38 = v36;
LABEL_86:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, v40);
        goto LABEL_59;
      }
      v10 = 0;
      if ( v25 > *((_DWORD *)this + 73) )
      {
        v35 = DynArrayImpl<0>::AddMultipleAndSet(this + 34, 8LL, 1LL, &Blink[2].Blink);
        v36 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xC0u);
        v10 = v36;
        if ( v36 < 0 )
          goto LABEL_80;
      }
      else
      {
        *(_QWORD *)(*v11 + 8LL * v24) = *p_Blink;
        *((_DWORD *)this + 74) = v25;
      }
      goto LABEL_27;
    }
  }
  v26 = (CTopLevelWindow *)Blink[24].Flink;
  if ( v26 )
  {
    inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v26, 0, 0, v13, &v43);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v39 = 1539;
      goto LABEL_74;
    }
    v4 = v43;
    v23 = VisualCollection::InsertRelative((struct CResource *)((char *)this[44] + 32), v43, 0LL, 1, 1);
    v10 = v23;
    if ( v23 < 0 )
    {
      v40 = 1541;
LABEL_85:
      v38 = v23;
      goto LABEL_86;
    }
    v27 = *((_DWORD *)this + 74);
    v28 = v27 + 1;
    if ( v27 + 1 < v27 )
    {
      v36 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_82:
      v40 = 1542;
      goto LABEL_83;
    }
    v10 = 0;
    if ( v28 > *((_DWORD *)this + 73) )
    {
      v37 = DynArrayImpl<0>::AddMultipleAndSet(this + 34, 8LL, 1LL, &Blink[2].Blink);
      v36 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
      v10 = v36;
      if ( v36 < 0 )
        goto LABEL_82;
      v19 = ShellWindowForDesktop;
    }
    else
    {
      *(_QWORD *)(*v11 + 8LL * v27) = *p_Blink;
      *((_DWORD *)this + 74) = v28;
    }
    if ( v4 )
    {
      CBaseObject::Release(v4);
      v4 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)v19 )
  {
LABEL_27:
    if ( v4 )
      CBaseObject::Release(v4);
    v14 = v41;
    v16 = a4;
    goto LABEL_30;
  }
  if ( ((__int64)Blink[35].Blink & 1) == 0 || !Blink[23].Flink || !*((_DWORD *)this + 74) )
    goto LABEL_59;
  inserted = CVisual::RenderRecursive(this[44]);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1579;
    goto LABEL_74;
  }
  v29 = lprcSrc2->right - lprcSrc2->left;
  if ( v29 < 0 )
    v29 = 0;
  v30 = lprcSrc2->bottom - lprcSrc2->top;
  if ( v30 < 0 )
    v30 = 0;
  inserted = ResourceHelper::CreateRectangleGeometry(0, 0, v29, v30, this + 42);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1587;
    goto LABEL_74;
  }
  v31 = CDrawGeometryInstruction::Create(this[40], this[42], &v45);
  v32 = v45;
  v10 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x639u);
  }
  else
  {
    v33 = CVisual::AddInstruction(this[45], v45);
    v10 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x63Bu);
  }
  if ( v32 )
    CBaseObject::Release(v32);
LABEL_59:
  if ( v10 < 0 )
  {
    VisualCollection::RemoveAll((struct CResource *)((char *)this[44] + 32));
    *((_DWORD *)this + 74) = 0;
    DynArrayImpl<0>::ShrinkToSize(this + 34, 8LL);
  }
  return (unsigned int)v10;
}
