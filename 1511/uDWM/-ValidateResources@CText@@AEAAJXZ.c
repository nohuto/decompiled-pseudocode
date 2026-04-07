/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x18001B00C
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJXZ @ 0x18001AF90 (-UpdateLayout@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x18001B580 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180018388 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180018438 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180018520 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800187B8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x1800188A4 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18001AEE0 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038EDC (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  bool v2; // zf
  signed int v3; // edi
  struct CBitmapSource *v4; // r13
  HDC v5; // r14
  CBaseObject *v6; // r15
  struct CPopInstruction *v7; // r12
  CBaseObject *v8; // rbx
  struct CResource **v10; // r12
  CBaseObject *v11; // rcx
  CTextCache *v12; // r15
  __int64 v13; // rbx
  COLORREF v14; // edx
  HDC v15; // rcx
  int v16; // eax
  int v17; // r15d
  int right; // ecx
  int bottom; // eax
  LONG v20; // eax
  LONG v21; // eax
  int v22; // edx
  int v23; // ecx
  HBITMAP Bitmap; // rax
  HBRUSH SolidBrush; // rax
  int v26; // eax
  int v27; // eax
  const struct _MARGINS *v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  void (__fastcall *v34)(CVisual *__hidden, unsigned int); // rbx
  int updated; // eax
  UINT TextAlign; // eax
  int v37; // r9d
  signed int LastError; // eax
  signed int v39; // eax
  signed int v40; // eax
  signed int v41; // eax
  signed int v42; // eax
  unsigned int format; // [rsp+28h] [rbp-49h]
  struct CPopInstruction *v44; // [rsp+38h] [rbp-39h] BYREF
  struct CRenderDataInstruction *v45; // [rsp+40h] [rbp-31h] BYREF
  struct CRenderDataInstruction *v46; // [rsp+48h] [rbp-29h] BYREF
  UINT align; // [rsp+50h] [rbp-21h]
  HBITMAP v48; // [rsp+58h] [rbp-19h] BYREF
  __int64 v49; // [rsp+60h] [rbp-11h]
  HBRUSH v50; // [rsp+68h] [rbp-9h] BYREF
  struct IWICBitmap *v51; // [rsp+70h] [rbp-1h] BYREF
  struct CBitmapSource *v52; // [rsp+78h] [rbp+7h] BYREF
  HGDIOBJ h; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v2 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v3 = 0;
  v46 = 0LL;
  v4 = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  v48 = 0LL;
  h = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v45 = 0LL;
  align = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = 0LL;
LABEL_3:
    if ( (*((_DWORD *)this + 20) & 0x8000) == 0 )
      goto LABEL_4;
    updated = CText::UpdateAlignmentTransform(this);
    v3 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x8000u;
LABEL_4:
      if ( (*((_BYTE *)this + 84) & 1) != 0 )
        (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1F3u);
LABEL_6:
    v8 = v46;
    goto LABEL_7;
  }
  CVisual::ClearInstructions(this);
  v10 = (struct CResource **)((char *)this + 376);
  v11 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *v10 = 0LL;
  }
  if ( !*((_QWORD *)this + 34) )
    goto LABEL_69;
  v12 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( !v12 )
    goto LABEL_69;
  v5 = (HDC)*((_QWORD *)v12 + 13);
  if ( !v5 )
    goto LABEL_69;
  v13 = *((_QWORD *)this + 14);
  v14 = *((_DWORD *)this + 99);
  v15 = (HDC)*((_QWORD *)v12 + 13);
  *(_QWORD *)&rc.left = 0LL;
  v49 = v13;
  *(_QWORD *)&rc.right = v13;
  SetBkColor(v15, v14);
  SetTextColor(v5, *((_DWORD *)this + 98));
  if ( (*((_BYTE *)this + 264) & 2) != 0 )
  {
    TextAlign = GetTextAlign(v5);
    align = SetTextAlign(v5, TextAlign | 0x100);
  }
  v16 = CTextCache::SetFont(v12, (const struct tagLOGFONTW *)((char *)this + 280));
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x199u);
LABEL_78:
    v6 = v45;
    v7 = v44;
    goto LABEL_6;
  }
  v17 = *((_BYTE *)this + 264) & 2 | 0x820;
  if ( (*((_BYTE *)this + 264) & 1) != 0 )
  {
    right = *((_DWORD *)this + 96);
    bottom = *((_DWORD *)this + 97);
  }
  else
  {
    SetLastError(0);
    if ( !DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v17 | 0x400) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      format = 426;
      goto LABEL_74;
    }
    right = rc.right;
    bottom = rc.bottom;
    *((_BYTE *)this + 264) |= 1u;
    *((_DWORD *)this + 96) = right;
    *((_DWORD *)this + 97) = bottom;
  }
  if ( right >= (int)v13 )
    right = v13;
  rc.right = right;
  if ( bottom >= SHIDWORD(v49) )
    bottom = HIDWORD(v49);
  rc.bottom = bottom;
  if ( right <= 0 || bottom <= 0 )
  {
LABEL_69:
    v6 = v45;
    v7 = v44;
LABEL_62:
    *((_DWORD *)this + 20) &= ~0x1000u;
    goto LABEL_3;
  }
  SetLastError(0);
  if ( !DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v17 | 0x8404) )
  {
    v39 = GetLastError();
    v3 = v39;
    if ( v39 > 0 )
      v3 = (unsigned __int16)v39 | 0x80070000;
    format = 448;
    goto LABEL_74;
  }
  v20 = rc.right;
  if ( rc.right >= (int)v13 )
    v20 = v13;
  rc.right = v20;
  v21 = rc.bottom;
  if ( rc.bottom >= SHIDWORD(v49) )
    v21 = HIDWORD(v49);
  rc.bottom = v21;
  SetLastError(0);
  v22 = rc.bottom - rc.top;
  if ( rc.bottom - rc.top < 0 )
    v22 = 0;
  v23 = rc.right - rc.left;
  if ( rc.right - rc.left < 0 )
    v23 = 0;
  Bitmap = CreateBitmap(v23, v22, 1u, 0x20u, 0LL);
  v48 = Bitmap;
  if ( !Bitmap )
  {
    v40 = GetLastError();
    v3 = v40;
    if ( v40 > 0 )
      v3 = (unsigned __int16)v40 | 0x80070000;
    format = 456;
    goto LABEL_74;
  }
  h = SelectObject(v5, Bitmap);
  SetLastError(0);
  SolidBrush = CreateSolidBrush(*((_DWORD *)this + 99));
  v50 = SolidBrush;
  if ( !SolidBrush )
  {
    v41 = GetLastError();
    v3 = v41;
    if ( v41 > 0 )
      v3 = (unsigned __int16)v41 | 0x80070000;
    format = 462;
    goto LABEL_74;
  }
  FillRect(v5, &rc, SolidBrush);
  SetLastError(0);
  if ( !DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v17 | 0x8004) )
  {
    v42 = GetLastError();
    v3 = v42;
    if ( v42 > 0 )
      v3 = (unsigned __int16)v42 | 0x80070000;
    format = 470;
LABEL_74:
    if ( v3 >= 0 )
      v3 = -2003304445;
    v37 = v3;
    goto LABEL_77;
  }
  GdiFlush();
  v26 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 30)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          v48,
          0LL,
          2LL,
          &v51);
  v3 = v26;
  if ( v26 < 0 )
  {
    format = 474;
LABEL_95:
    v37 = v26;
LABEL_77:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, format);
    goto LABEL_78;
  }
  v26 = CResource::Create(63LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
  v3 = v26;
  if ( v26 < 0 )
  {
    format = 478;
    goto LABEL_95;
  }
  v26 = CPushTransformInstruction::Create(*v10, &v46);
  v3 = v26;
  if ( v26 < 0 )
  {
    format = 479;
    goto LABEL_95;
  }
  v8 = v46;
  v27 = CVisual::AddInstruction(this, v46);
  v3 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x1E0u);
LABEL_100:
    v6 = v45;
LABEL_103:
    v7 = v44;
    goto LABEL_7;
  }
  v29 = CBitmapSource::Create(v51, v28, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v52);
  v3 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x1E2u);
    v4 = v52;
    goto LABEL_100;
  }
  v4 = v52;
  v30 = CDrawImageInstruction::Create(v52, &rc, &v45);
  v3 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x1E3u);
    goto LABEL_100;
  }
  v6 = v45;
  v31 = CVisual::AddInstruction(this, v45);
  v3 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x1E4u);
    goto LABEL_103;
  }
  v32 = CPopInstruction::Create(&v44);
  v3 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x1E6u);
    goto LABEL_103;
  }
  v7 = v44;
  v33 = CVisual::AddInstruction(this, v44);
  v3 = v33;
  if ( v33 >= 0 )
  {
    v34 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v34 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x8000u);
    else
      v34(this, 0x8000u);
    goto LABEL_62;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x1E7u);
LABEL_7:
  if ( v5 )
  {
    if ( (*((_BYTE *)this + 264) & 2) != 0 )
      SetTextAlign(v5, align);
    if ( h )
      SelectObject(v5, h);
  }
  if ( v48 )
    ReleaseGDIObject<HRGN__ *>((void **)&v48);
  if ( v50 )
    ReleaseGDIObject<HRGN__ *>((void **)&v50);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v51 )
    ((void (__fastcall *)(struct IWICBitmap *))v51->lpVtbl->Release)(v51);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v3;
}
