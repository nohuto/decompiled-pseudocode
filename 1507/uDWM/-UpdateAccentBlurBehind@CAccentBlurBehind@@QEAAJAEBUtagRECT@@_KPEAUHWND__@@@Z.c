/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180035600 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180002D70 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180003524 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        struct CResource **this,
        struct tagRECT *a2,
        unsigned __int64 a3,
        HWND a4)
{
  struct CVisual *v4; // r15
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
  CTopLevelWindow *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  CBaseObject *v30; // rsi
  int v31; // eax
  unsigned int v33; // eax
  unsigned int v34; // edx
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // r9d
  unsigned int v39; // [rsp+20h] [rbp-98h]
  unsigned int v40; // [rsp+20h] [rbp-98h]
  char v41; // [rsp+30h] [rbp-88h]
  struct CVisual *v43; // [rsp+40h] [rbp-78h] BYREF
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
    v39 = 1470;
LABEL_73:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v39);
    goto LABEL_49;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((CAccentBlurBehind *)this, a2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1471;
    goto LABEL_73;
  }
  if ( !a4 )
    goto LABEL_49;
  inserted = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1486;
    goto LABEL_73;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[45], 0LL, 0, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1487;
    goto LABEL_73;
  }
  inserted = CVisual::ClearInstructions(this[45]);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1488;
    goto LABEL_73;
  }
  inserted = VisualCollection::RemoveAll((struct CResource *)((char *)this[44] + 32));
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1489;
    goto LABEL_73;
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
    goto LABEL_49;
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
LABEL_21:
      v4 = 0LL;
      goto LABEL_22;
    }
    if ( !v14 )
      goto LABEL_21;
    v19 = ShellWindowForDesktop;
    if ( v18 == ShellWindowForDesktop )
      break;
    v20 = Blink[31].Blink;
    if ( v20 )
    {
      if ( (HWND)v20[2].Blink == ShellWindowForDesktop )
        break;
    }
    v4 = 0LL;
    if ( *((_DWORD *)this + 74) >= 0xAu || (Flink = (CTopLevelWindow *)Blink[23].Flink) == 0LL )
    {
      v16 = a4;
      goto LABEL_22;
    }
    v22 = (unsigned __int8)Blink[34].Blink;
    if ( (v22 & 1) != 0
      && ((unsigned __int8)~BYTE4(Blink[34].Blink) & (unsigned __int8)~(v22 >> 2) & 1) != 0
      && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0 )
    {
      if ( v18 )
      {
        if ( v18 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 191) )
        {
          CTopLevelWindow::GetActualWindowRect(Flink, &rcDst, 0, 1, 0);
          if ( IntersectRect(&rcDst, &rcDst, lprcSrc2) )
          {
            inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(Flink, 0, 0, v13, &v43);
            v10 = inserted;
            if ( inserted < 0 )
            {
              v39 = 1552;
              goto LABEL_73;
            }
            v4 = v43;
            v24 = VisualCollection::InsertRelative((struct CResource *)((char *)this[44] + 32), v43, 0LL, 1, 1);
            v10 = v24;
            if ( v24 < 0 )
            {
              v40 = 1554;
              goto LABEL_85;
            }
            v33 = *((_DWORD *)this + 74);
            v34 = v33 + 1;
            if ( v33 + 1 < v33 )
            {
              v36 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              v10 = -2147024362;
LABEL_80:
              v40 = 1555;
LABEL_83:
              v38 = v36;
LABEL_86:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, v40);
              goto LABEL_49;
            }
            v10 = 0;
            if ( v34 <= *((_DWORD *)this + 73) )
            {
              *(_QWORD *)(*v11 + 8LL * *((unsigned int *)this + 74)) = *p_Blink;
              *((_DWORD *)this + 74) = v34;
            }
            else
            {
              v35 = DynArrayImpl<0>::AddMultipleAndSet(this + 34, 8LL, 1LL, &Blink[2].Blink);
              v36 = v35;
              if ( v35 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xC0u);
              v10 = v36;
              if ( v36 < 0 )
                goto LABEL_80;
            }
LABEL_62:
            if ( v4 )
              CBaseObject::Release(v4);
            v14 = v41;
            v16 = a4;
            goto LABEL_21;
          }
        }
      }
    }
    v16 = a4;
    v14 = v41;
LABEL_22:
    Blink = Blink->Blink;
    if ( Blink == v47 )
      goto LABEL_49;
  }
  v23 = (CTopLevelWindow *)Blink[23].Flink;
  if ( v23 )
  {
    inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v23, 0, 0, v13, &v43);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v39 = 1523;
      goto LABEL_73;
    }
    v4 = v43;
    v24 = VisualCollection::InsertRelative((struct CResource *)((char *)this[44] + 32), v43, 0LL, 1, 1);
    v10 = v24;
    if ( v24 < 0 )
    {
      v40 = 1525;
LABEL_85:
      v38 = v24;
      goto LABEL_86;
    }
    v25 = *((_DWORD *)this + 74);
    v26 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      v36 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_82:
      v40 = 1526;
      goto LABEL_83;
    }
    v10 = 0;
    if ( v26 > *((_DWORD *)this + 73) )
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
      *(_QWORD *)(*v11 + 8LL * v25) = *p_Blink;
      *((_DWORD *)this + 74) = v26;
    }
    if ( v4 )
    {
      CBaseObject::Release(v4);
      v4 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)v19 )
    goto LABEL_62;
  if ( ((__int64)Blink[34].Blink & 1) == 0 || !Blink[22].Flink || !*((_DWORD *)this + 74) )
    goto LABEL_49;
  inserted = CVisual::RenderRecursive(this[44]);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1563;
    goto LABEL_73;
  }
  v27 = lprcSrc2->right - lprcSrc2->left;
  if ( v27 < 0 )
    v27 = 0;
  v28 = lprcSrc2->bottom - lprcSrc2->top;
  if ( v28 < 0 )
    v28 = 0;
  inserted = ResourceHelper::CreateRectangleGeometry(0, 0, v27, v28, this + 42);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v39 = 1571;
    goto LABEL_73;
  }
  v29 = CDrawGeometryInstruction::Create(this[40], this[42], &v45);
  v30 = v45;
  v10 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x629u);
  }
  else
  {
    v31 = CVisual::AddInstruction(this[45], v45);
    v10 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x62Bu);
  }
  if ( v30 )
    CBaseObject::Release(v30);
LABEL_49:
  if ( v10 < 0 )
  {
    VisualCollection::RemoveAll((struct CResource *)((char *)this[44] + 32));
    *((_DWORD *)this + 74) = 0;
    DynArrayImpl<0>::ShrinkToSize(this + 34, 8LL);
  }
  return (unsigned int)v10;
}
