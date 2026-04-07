/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015764 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015814 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180015B58 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x1800160AC (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001684C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180033EB8 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18003FE74 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D784 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D79C (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007DF28 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x18007F1BC (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x1800983F4 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rdi
  CBaseObject *v3; // r12
  CBaseObject *v4; // r14
  bool v5; // zf
  CBaseObject *v6; // r13
  HDC CompatibleDC; // r15
  int v8; // eax
  __int64 v9; // rdx
  signed int v10; // ebx
  CVisual *v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  struct CResource **v14; // rdi
  CThumbnailVisual *v15; // rcx
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // rdi
  CBaseObject *v19; // rdi
  HBITMAP v20; // rdi
  HBRUSH v21; // r13
  struct CBitmapSource *v22; // r14
  __int64 v24; // rcx
  int Brush; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char IsImmersiveIconic; // bl
  COLORREF v30; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  HBRUSH SolidBrush; // rax
  int v34; // eax
  const struct _MARGINS *v35; // rdx
  int v36; // eax
  struct CResource **v37; // r14
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  struct CResource **v43; // r14
  int v44; // eax
  __int64 v45; // rdi
  unsigned int v46; // ebx
  CSecondaryWindowRepresentation *v47; // r8
  __int64 v48; // r10
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  CThumbnailAnimatedVisual *v57; // rcx
  int v58; // eax
  int v59; // eax
  CBaseObject *v60; // rcx
  unsigned int lpBits_8; // [rsp+28h] [rbp-59h]
  char *v62; // [rsp+30h] [rbp-51h]
  char *v63; // [rsp+38h] [rbp-49h]
  char *v64; // [rsp+40h] [rbp-41h]
  struct CBitmapSource *v65; // [rsp+48h] [rbp-39h] BYREF
  HBRUSH v66; // [rsp+50h] [rbp-31h] BYREF
  HBITMAP v67; // [rsp+58h] [rbp-29h] BYREF
  struct CPopInstruction *v68; // [rsp+60h] [rbp-21h] BYREF
  struct CPopInstruction *v69; // [rsp+68h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v70; // [rsp+70h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v71; // [rsp+78h] [rbp-9h] BYREF
  struct CRenderDataInstruction *v72; // [rsp+80h] [rbp-1h] BYREF
  struct IWICBitmap *v73; // [rsp+88h] [rbp+7h] BYREF
  struct CRenderDataInstruction *v74; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v72 = 0LL;
  v4 = 0LL;
  v71 = 0LL;
  v5 = *((_BYTE *)this + 456) == 0;
  v6 = 0LL;
  v68 = 0LL;
  CompatibleDC = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  h = 0LL;
  v73 = 0LL;
  v65 = 0LL;
  v74 = 0LL;
  if ( v5 )
  {
    v59 = CVisual::ClearInstructions(this);
    v10 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x3C9u);
      goto LABEL_30;
    }
    v60 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( !v60 )
      goto LABEL_30;
    CBaseObject::Release(v60);
    *((_QWORD *)this + 45) = 0LL;
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      goto LABEL_18;
    }
LABEL_30:
    v20 = v67;
LABEL_31:
    v21 = v66;
LABEL_32:
    v22 = v65;
    goto LABEL_33;
  }
  v8 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x33Au);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 46) )
  {
    if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      goto LABEL_5;
    v28 = CVisual::ClearInstructions(v11);
    v10 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x359u);
      goto LABEL_30;
    }
  }
  else
  {
    v64 = (char *)this + 368;
    v63 = (char *)this + 416;
    v62 = (char *)this + 392;
    v24 = *((_QWORD *)this + 45);
    *((_BYTE *)this + 458) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v24, v9, (char *)this + 376, (char *)this + 384);
    v10 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Brush, 0x349u);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000);
    v26 = CVisual::ClearInstructions(this);
    v10 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x353u);
      goto LABEL_30;
    }
  }
  v12 = (_QWORD *)((char *)this + 368);
LABEL_5:
  if ( *((_DWORD *)this + 64) )
    goto LABEL_30;
  if ( !*((_QWORD *)this + 52) || (v13 = *((_QWORD *)this + 44)) == 0 || (*(_DWORD *)(v13 + 36) & 0x4000000) == 0 )
  {
    if ( !*v12 )
      goto LABEL_30;
    v14 = (struct CResource **)((char *)this + 400);
    if ( !*((_QWORD *)this + 50) )
    {
      v27 = CResource::Create(24LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x3ACu);
        goto LABEL_30;
      }
    }
    if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this) )
    {
      v56 = CThumbnailVisual::_AddBorderInstructions(v15);
      v10 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x3B1u);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      {
        v58 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v57, *v14, 0, 1.0);
        v10 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x3BAu);
          goto LABEL_30;
        }
      }
    }
    v16 = CDrawGeometryInstruction::Create(
            *((struct CResource **)this + 46),
            *v14,
            (struct CDrawGeometryInstruction **)&rc);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3C2u);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v17 = CVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x3C4u);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
    goto LABEL_99;
  v30 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v67 = Bitmap;
  v20 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x374u);
    goto LABEL_31;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v30);
  v66 = SolidBrush;
  v21 = SolidBrush;
  if ( !SolidBrush )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x377u);
    goto LABEL_32;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v34 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **, char *, char *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
          v20,
          0LL,
          2LL,
          &v73,
          v62,
          v63,
          v64);
  v10 = v34;
  if ( v34 < 0 )
  {
    lpBits_8 = 891;
LABEL_68:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, lpBits_8);
    goto LABEL_32;
  }
  v34 = CBitmapSource::Create(v73, v35, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v65);
  v10 = v34;
  if ( v34 < 0 )
  {
    lpBits_8 = 893;
    goto LABEL_68;
  }
  v22 = v65;
  v36 = CDrawBitmapInstruction::Create(*((struct CResource **)v65 + 2), &v74);
  v10 = v36;
  if ( v36 >= 0 )
  {
    v37 = (struct CResource **)((char *)this + 440);
    if ( !*((_QWORD *)this + 55) )
    {
      v34 = CResource::Create(29LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v34;
      if ( v34 < 0 )
      {
        lpBits_8 = 898;
        goto LABEL_68;
      }
    }
    v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v37 + 2) + 1096LL))(
            *((_QWORD *)*v37 + 2),
            *((unsigned int *)*v37 + 6));
    v10 = v34;
    if ( v34 < 0 )
    {
      lpBits_8 = 905;
      goto LABEL_68;
    }
    v38 = CPushTransformInstruction::Create(*v37, &v70);
    v10 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x38Au);
      v6 = v70;
LABEL_25:
      v19 = v69;
LABEL_26:
      if ( v6 )
        CBaseObject::Release(v6);
      if ( v19 )
        CBaseObject::Release(v19);
      goto LABEL_30;
    }
    v6 = v70;
    v39 = CVisual::AddInstruction(this, v70);
    v10 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x38Bu);
      goto LABEL_25;
    }
    v40 = CVisual::AddInstruction(this, v74);
    v10 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x38Cu);
      goto LABEL_25;
    }
    v41 = CPopInstruction::Create(&v69);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x38Du);
      goto LABEL_25;
    }
    v19 = v69;
    v42 = CVisual::AddInstruction(this, v69);
    v10 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x38Eu);
      goto LABEL_26;
    }
    v43 = (struct CResource **)((char *)this + 432);
    if ( !*((_QWORD *)this + 54) )
    {
      v44 = CResource::Create(34LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x393u);
        goto LABEL_26;
      }
    }
    v45 = *((_QWORD *)*v43 + 2);
    v46 = *((_DWORD *)*v43 + 6);
    CSecondaryWindowRepresentation::GetIconicHeight(*((CSecondaryWindowRepresentation **)this + 45));
    CSecondaryWindowRepresentation::GetIconicWidth(v47);
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v48 + 1088))(v45, v46);
    v10 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x398u);
      goto LABEL_25;
    }
    v50 = CPushTransformInstruction::Create(*v43, &v71);
    v10 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x399u);
      v4 = v71;
LABEL_97:
      v18 = v68;
LABEL_21:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_25;
    }
    v4 = v71;
    v51 = CVisual::AddInstruction(this, v71);
    v10 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x39Au);
      goto LABEL_97;
    }
LABEL_99:
    v52 = CDrawBitmapInstruction::Create(*((struct CResource **)this + 52), &v72);
    v10 = v52;
    if ( v52 >= 0 )
    {
      v3 = v72;
      v53 = CVisual::AddInstruction(this, v72);
      v10 = v53;
      if ( v53 >= 0 )
      {
        if ( v4 )
        {
          v54 = CPopInstruction::Create(&v68);
          v10 = v54;
          if ( v54 >= 0 )
          {
            v18 = v68;
            v55 = CVisual::AddInstruction(this, v68);
            v10 = v55;
            if ( v55 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x3A3u);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0x3A2u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x39Eu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x39Du);
      v3 = v72;
    }
LABEL_18:
    v18 = v68;
LABEL_19:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x37Eu);
LABEL_33:
  if ( v73 )
    ((void (__fastcall *)(struct IWICBitmap *))v73->lpVtbl->Release)(v73);
  if ( v22 )
    CBaseObject::Release(v22);
  if ( v74 )
    CBaseObject::Release(v74);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v20 )
    ReleaseGDIObject<HRGN__ *>((void **)&v67);
  if ( v21 )
    ReleaseGDIObject<HRGN__ *>((void **)&v66);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v10;
}
