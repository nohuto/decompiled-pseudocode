/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180018FA8
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800162DC (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18001673C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180018388 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180018438 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800187B8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180018AF8 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001956C (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038EDC (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB0C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB24 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007D354 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x18007E62C (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x18009B638 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rbx
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  bool v5; // zf
  CBaseObject *v6; // r13
  HDC CompatibleDC; // r12
  int v8; // eax
  __int64 v9; // rdx
  signed int v10; // edi
  CVisual *v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // rcx
  struct CResource **v14; // rbx
  CThumbnailVisual *v15; // rcx
  int v16; // eax
  int v17; // eax
  struct CPopInstruction *v18; // rbx
  struct CPopInstruction *v19; // rbx
  HBITMAP v20; // r13
  __int64 v22; // rcx
  int Brush; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int v33; // eax
  const struct _MARGINS *v34; // rdx
  struct CResource **v35; // rbx
  _DWORD *v36; // r8
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  CResource *v42; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  struct CResource **v48; // r14
  int v49; // eax
  CSecondaryWindowRepresentation *v50; // r9
  int IconicWidth; // eax
  int v52; // r8d
  CSecondaryWindowRepresentation *v53; // r9
  int IconicHeight; // eax
  int v55; // r8d
  int v56; // r11d
  CResource *v57; // rcx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  CThumbnailAnimatedVisual *v66; // rcx
  int v67; // eax
  int v68; // eax
  CBaseObject *v69; // rcx
  void *lpBits; // [rsp+28h] [rbp-99h]
  unsigned int lpBitsa; // [rsp+28h] [rbp-99h]
  HBITMAP v72; // [rsp+48h] [rbp-79h] BYREF
  struct CPopInstruction *v73; // [rsp+50h] [rbp-71h] BYREF
  struct CPopInstruction *v74; // [rsp+58h] [rbp-69h] BYREF
  struct CRenderDataInstruction *v75; // [rsp+60h] [rbp-61h] BYREF
  struct IWICBitmap *v76; // [rsp+68h] [rbp-59h] BYREF
  struct CRenderDataInstruction *v77; // [rsp+70h] [rbp-51h] BYREF
  struct CBitmapSource *v78; // [rsp+78h] [rbp-49h] BYREF
  struct CRenderDataInstruction *v79; // [rsp+80h] [rbp-41h] BYREF
  struct CRenderDataInstruction *v80; // [rsp+88h] [rbp-39h] BYREF
  HBRUSH v81; // [rsp+90h] [rbp-31h] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp-29h]
  RECT rc; // [rsp+A0h] [rbp-21h] BYREF
  double v84[3]; // [rsp+B0h] [rbp-11h] BYREF
  int v85; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v86[4]; // [rsp+CCh] [rbp+Bh] BYREF
  double v87; // [rsp+D0h] [rbp+Fh]
  double v88; // [rsp+D8h] [rbp+17h]

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v75 = 0LL;
  v4 = 0LL;
  v77 = 0LL;
  v5 = *((_BYTE *)this + 456) == 0;
  v6 = 0LL;
  v73 = 0LL;
  CompatibleDC = 0LL;
  v79 = 0LL;
  v74 = 0LL;
  v81 = 0LL;
  v72 = 0LL;
  h = 0LL;
  v76 = 0LL;
  v78 = 0LL;
  v80 = 0LL;
  if ( v5 )
  {
    v68 = CVisual::ClearInstructions(this);
    v10 = v68;
    if ( v68 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v68, 0x3BDu);
      goto LABEL_30;
    }
    v69 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( !v69 )
      goto LABEL_30;
    CBaseObject::Release(v69);
    *((_QWORD *)this + 45) = 0LL;
LABEL_16:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      goto LABEL_18;
    }
LABEL_30:
    v20 = v72;
    goto LABEL_31;
  }
  v8 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x330u);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 46) )
  {
    if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      goto LABEL_5;
    v26 = CVisual::ClearInstructions(v11);
    v10 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x34Fu);
      goto LABEL_30;
    }
  }
  else
  {
    v22 = *((_QWORD *)this + 45);
    *((_BYTE *)this + 458) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(
              v22,
              v9,
              (CBaseObject **)this + 47,
              (CBaseObject **)this + 48,
              (__int64)lpBits,
              (CBaseObject **)this + 49,
              (CResource **)this + 52,
              (CBaseObject **)this + 46);
    v10 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Brush, 0x33Fu);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000);
    v24 = CVisual::ClearInstructions(this);
    v10 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x349u);
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
      v25 = CResource::Create(67LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x3A0u);
        goto LABEL_30;
      }
    }
    if ( (unsigned __int8)CThumbnailVisual::_HasBorder(this) )
    {
      v65 = CThumbnailVisual::_AddBorderInstructions(v15);
      v10 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v65, 0x3A5u);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( !(unsigned __int8)CThumbnailVisual::_HasBorder(this) )
      {
        v67 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v66, *v14, 0, 1.0);
        v10 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v67, 0x3AEu);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x3B6u);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v17 = CVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x3B8u);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
    goto LABEL_107;
  v28 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v72 = Bitmap;
  v20 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    lpBitsa = 874;
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v81 = SolidBrush;
  if ( SolidBrush )
  {
    rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
    FillRect(CompatibleDC, &rc, SolidBrush);
    v33 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                               + 30)
                                                                                            + 168LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
            v20,
            0LL,
            2LL,
            &v76);
    v10 = v33;
    if ( v33 < 0 )
    {
      lpBitsa = 881;
LABEL_66:
      v31 = v33;
      goto LABEL_67;
    }
    v33 = CBitmapSource::Create(v76, v34, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v78);
    v10 = v33;
    if ( v33 < 0 )
    {
      lpBitsa = 883;
      goto LABEL_66;
    }
    v33 = CDrawBitmapInstruction::Create(*((struct CResource **)v78 + 2), &v80);
    v10 = v33;
    if ( v33 < 0 )
    {
      lpBitsa = 884;
      goto LABEL_66;
    }
    v35 = (struct CResource **)((char *)this + 440);
    if ( !*((_QWORD *)this + 55) )
    {
      v33 = CResource::Create(60LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v33;
      if ( v33 < 0 )
      {
        lpBitsa = 888;
        goto LABEL_66;
      }
    }
    v85 = 247;
    memset_0(v86, 0, 0x24uLL);
    v36 = (_DWORD *)*((_QWORD *)this + 44);
    v37 = v36[12] - v36[10];
    if ( v37 < 0 )
      v37 = 0;
    v38 = rc.right - rc.left;
    if ( rc.right - rc.left < 0 )
      v38 = 0;
    v87 = (double)(v37 / v38);
    v39 = v36[13] - v36[11];
    if ( v39 < 0 )
      v39 = 0;
    v40 = rc.bottom - rc.top;
    if ( rc.bottom - rc.top < 0 )
      v40 = 0;
    v41 = v39 / v40;
    v42 = *v35;
    v88 = (double)v41;
    v33 = CResource::Send(v42, &v85, 0x28u);
    v10 = v33;
    if ( v33 < 0 )
    {
      lpBitsa = 893;
      goto LABEL_66;
    }
    v43 = CPushTransformInstruction::Create(*v35, &v79);
    v10 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, 0x37Eu);
      v6 = v79;
LABEL_25:
      v19 = v74;
LABEL_26:
      if ( v6 )
        CBaseObject::Release(v6);
      if ( v19 )
        CBaseObject::Release(v19);
      goto LABEL_30;
    }
    v6 = v79;
    v44 = CVisual::AddInstruction(this, v79);
    v10 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x37Fu);
      goto LABEL_25;
    }
    v45 = CVisual::AddInstruction(this, v80);
    v10 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, 0x380u);
      goto LABEL_25;
    }
    v46 = CPopInstruction::Create(&v74);
    v10 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x381u);
      goto LABEL_25;
    }
    v19 = v74;
    v47 = CVisual::AddInstruction(this, v74);
    v10 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x382u);
      goto LABEL_26;
    }
    v48 = (struct CResource **)((char *)this + 432);
    if ( !*((_QWORD *)this + 54) )
    {
      v49 = CResource::Create(59LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v10 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, 0x387u);
        goto LABEL_26;
      }
    }
    v50 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 45);
    LODWORD(v84[0]) = 246;
    memset((char *)v84 + 4, 0, 20);
    IconicWidth = CSecondaryWindowRepresentation::GetIconicWidth(v50);
    v84[1] = (double)(v52 / 2 - IconicWidth / 2);
    IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v53);
    v57 = *v48;
    v84[2] = (double)(v55 / v56 - IconicHeight / v56);
    v58 = CResource::Send(v57, v84, v56 + 22);
    v10 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v58, 0x38Cu);
      goto LABEL_26;
    }
    v59 = CPushTransformInstruction::Create(*v48, &v77);
    v10 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v59, 0x38Du);
      v4 = v77;
LABEL_105:
      v18 = v73;
LABEL_21:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_25;
    }
    v4 = v77;
    v60 = CVisual::AddInstruction(this, v77);
    v10 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v60, 0x38Eu);
      goto LABEL_105;
    }
LABEL_107:
    v61 = CDrawBitmapInstruction::Create(*((struct CResource **)this + 52), &v75);
    v10 = v61;
    if ( v61 >= 0 )
    {
      v3 = v75;
      v62 = CVisual::AddInstruction(this, v75);
      v10 = v62;
      if ( v62 >= 0 )
      {
        if ( v4 )
        {
          v63 = CPopInstruction::Create(&v73);
          v10 = v63;
          if ( v63 >= 0 )
          {
            v18 = v73;
            v64 = CVisual::AddInstruction(this, v73);
            v10 = v64;
            if ( v64 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v64, 0x397u);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v63, 0x396u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v62, 0x392u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v61, 0x391u);
      v3 = v75;
    }
LABEL_18:
    v18 = v73;
LABEL_19:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_21;
  }
  v10 = -2147024890;
  lpBitsa = 877;
LABEL_64:
  v31 = v10;
LABEL_67:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, lpBitsa);
LABEL_31:
  if ( v76 )
    ((void (__fastcall *)(struct IWICBitmap *))v76->lpVtbl->Release)(v76);
  if ( v78 )
    CBaseObject::Release(v78);
  if ( v80 )
    CBaseObject::Release(v80);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v20 )
    ReleaseGDIObject<HRGN__ *>((void **)&v72);
  if ( v81 )
    ReleaseGDIObject<HRGN__ *>((void **)&v81);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v10;
}
