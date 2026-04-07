/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x180016150
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJXZ @ 0x1800160D0 (-UpdateLayout@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x1800166F0 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012B7C (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180012C64 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180012E7C (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180012F04 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180014928 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180014D24 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x180016020 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  CBaseObject *v1; // r14
  bool v3; // zf
  HBITMAP v4; // rbx
  struct CPopInstruction *v5; // r13
  HBRUSH v6; // rsi
  struct CBitmapSource *v7; // r12
  CBaseObject *v8; // r15
  HDC v9; // rax
  CBaseObject *v11; // rcx
  CTextCache *v12; // rax
  HDC v13; // rcx
  __int64 v14; // rbx
  COLORREF v15; // edx
  int v16; // eax
  char v17; // al
  int v18; // ecx
  int bottom; // ecx
  int right; // eax
  int v21; // edx
  int v22; // ecx
  HBITMAP Bitmap; // rax
  HBRUSH SolidBrush; // rax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  const struct _MARGINS *v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  void (__fastcall *v35)(CVisual *__hidden, unsigned int); // rbx
  signed int updated; // eax
  UINT TextAlign; // eax
  signed int LastError; // eax
  unsigned int format; // [rsp+20h] [rbp-59h]
  unsigned int formata; // [rsp+20h] [rbp-59h]
  unsigned int v41; // [rsp+30h] [rbp-49h]
  HBITMAP v42; // [rsp+38h] [rbp-41h] BYREF
  HBRUSH v43; // [rsp+40h] [rbp-39h] BYREF
  HDC hdc; // [rsp+48h] [rbp-31h]
  UINT align; // [rsp+50h] [rbp-29h]
  CTextCache *v46; // [rsp+58h] [rbp-21h]
  struct CRenderDataInstruction *v47; // [rsp+60h] [rbp-19h] BYREF
  struct IWICBitmap *v48; // [rsp+68h] [rbp-11h] BYREF
  struct CBitmapSource *v49; // [rsp+70h] [rbp-9h] BYREF
  struct CPopInstruction *v50; // [rsp+78h] [rbp-1h] BYREF
  struct CRenderDataInstruction *v51; // [rsp+80h] [rbp+7h] BYREF
  __int64 v52; // [rsp+88h] [rbp+Fh]
  HGDIOBJ h; // [rsp+90h] [rbp+17h]
  struct tagRECT rc; // [rsp+98h] [rbp+1Fh] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v4 = 0LL;
  v42 = 0LL;
  v5 = 0LL;
  v41 = 0;
  v6 = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  v50 = 0LL;
  v8 = 0LL;
  h = 0LL;
  v43 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  hdc = 0LL;
  align = 0;
  if ( v3 )
    goto LABEL_2;
  CVisual::ClearInstructions(this);
  v11 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( !*((_QWORD *)this + 34)
    || (v12 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27), (v46 = v12) == 0LL)
    || (v13 = (HDC)*((_QWORD *)v12 + 13), (hdc = v13) == 0LL) )
  {
LABEL_63:
    *((_DWORD *)this + 20) &= ~0x1000u;
LABEL_2:
    if ( (*((_DWORD *)this + 20) & 0x8000) == 0 )
    {
LABEL_3:
      if ( (*((_BYTE *)this + 84) & 1) == 0 )
        goto LABEL_4;
      (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
      goto LABEL_113;
    }
    updated = CText::UpdateAlignmentTransform(this);
    v41 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x8000u;
      goto LABEL_3;
    }
    formata = 499;
LABEL_111:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, formata);
    goto LABEL_4;
  }
  v14 = *((_QWORD *)this + 14);
  v15 = *((_DWORD *)this + 99);
  v52 = v14;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = v14;
  SetBkColor(v13, v15);
  SetTextColor(hdc, *((_DWORD *)this + 98));
  if ( (*((_BYTE *)this + 264) & 2) != 0 )
  {
    TextAlign = GetTextAlign(hdc);
    align = SetTextAlign(hdc, TextAlign | 0x100);
  }
  v16 = CTextCache::SetFont(v46, (const struct tagLOGFONTW *)((char *)this + 280));
  v41 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x199u);
    goto LABEL_113;
  }
  v17 = *((_BYTE *)this + 264);
  v18 = 2080;
  if ( (v17 & 2) != 0 )
    v18 = 2082;
  LODWORD(v46) = v18;
  if ( (v17 & 1) != 0 )
  {
    bottom = *((_DWORD *)this + 97);
    right = *((_DWORD *)this + 96);
    rc.bottom = bottom;
  }
  else
  {
    SetLastError(0);
    if ( !DrawTextW(hdc, *((LPCWSTR *)this + 34), -1, &rc, (unsigned int)v46 | 0x400) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      format = 426;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v41 = LastError;
      goto LABEL_76;
    }
    right = rc.right;
    bottom = rc.bottom;
    *((_BYTE *)this + 264) |= 1u;
    *((_DWORD *)this + 96) = right;
    *((_DWORD *)this + 97) = bottom;
  }
  if ( right >= (int)v14 )
    right = v14;
  rc.right = right;
  if ( bottom >= SHIDWORD(v52) )
  {
    bottom = HIDWORD(v52);
    rc.bottom = HIDWORD(v52);
  }
  if ( right <= 0 || bottom <= 0 )
    goto LABEL_62;
  SetLastError(0);
  if ( !DrawTextW(hdc, *((LPCWSTR *)this + 34), -1, &rc, (unsigned int)v46 | 0x8404) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    format = 448;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v41 = LastError;
LABEL_76:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, format);
    goto LABEL_113;
  }
  if ( rc.right >= (int)v14 )
    rc.right = v14;
  if ( rc.bottom >= SHIDWORD(v52) )
    rc.bottom = HIDWORD(v52);
  SetLastError(0);
  v21 = rc.bottom - rc.top;
  if ( rc.bottom - rc.top < 0 )
    v21 = 0;
  v22 = rc.right - rc.left;
  if ( rc.right - rc.left < 0 )
    v22 = 0;
  Bitmap = CreateBitmap(v22, v21, 1u, 0x20u, 0LL);
  v42 = Bitmap;
  v4 = Bitmap;
  if ( !Bitmap )
  {
    updated = GetLastError();
    if ( updated > 0 )
      updated = (unsigned __int16)updated | 0x80070000;
    formata = 456;
    if ( updated >= 0 )
      updated = -2003304445;
    v41 = updated;
    goto LABEL_111;
  }
  h = SelectObject(hdc, Bitmap);
  SetLastError(0);
  SolidBrush = CreateSolidBrush(*((_DWORD *)this + 99));
  v43 = SolidBrush;
  v6 = SolidBrush;
  if ( !SolidBrush )
  {
    updated = GetLastError();
    if ( updated > 0 )
      updated = (unsigned __int16)updated | 0x80070000;
    formata = 462;
    if ( updated >= 0 )
      updated = -2003304445;
    v41 = updated;
    goto LABEL_111;
  }
  FillRect(hdc, &rc, SolidBrush);
  SetLastError(0);
  if ( !DrawTextW(hdc, *((LPCWSTR *)this + 34), -1, &rc, (unsigned int)v46 | 0x8004) )
  {
    updated = GetLastError();
    if ( updated > 0 )
      updated = (unsigned __int16)updated | 0x80070000;
    formata = 470;
    if ( updated >= 0 )
      updated = -2003304445;
    v41 = updated;
    goto LABEL_111;
  }
  GdiFlush();
  v25 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 30)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          v42,
          0LL,
          2LL,
          &v48);
  v41 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x1DAu);
  }
  else
  {
    v26 = CResource::Create(59LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
    v41 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x1DEu);
    }
    else
    {
      v27 = CPushTransformInstruction::Create(*((struct CResource **)this + 47), &v47);
      v41 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x1DFu);
        v1 = v47;
      }
      else
      {
        v1 = v47;
        v28 = CVisual::AddInstruction(this, v47);
        v41 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x1E0u);
        }
        else
        {
          v30 = CBitmapSource::Create(v48, v29, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v49);
          v41 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x1E2u);
            v7 = v49;
          }
          else
          {
            v7 = v49;
            v31 = CDrawImageInstruction::Create(v49, &rc, &v51);
            v41 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x1E3u);
              v8 = v51;
            }
            else
            {
              v8 = v51;
              v32 = CVisual::AddInstruction(this, v51);
              v41 = v32;
              if ( v32 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x1E4u);
              }
              else
              {
                v33 = CPopInstruction::Create(&v50);
                v41 = v33;
                if ( v33 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x1E6u);
                  v5 = v50;
                }
                else
                {
                  v5 = v50;
                  v34 = CVisual::AddInstruction(this, v50);
                  v41 = v34;
                  if ( v34 >= 0 )
                  {
                    v35 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
                    if ( v35 == CVisual::SetDirtyFlags )
                      CVisual::SetDirtyFlags(this, 0x8000u);
                    else
                      v35(this, 0x8000u);
                    v6 = v43;
LABEL_62:
                    v4 = v42;
                    goto LABEL_63;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x1E7u);
                }
              }
            }
          }
        }
      }
    }
  }
  v6 = v43;
LABEL_113:
  v4 = v42;
LABEL_4:
  v9 = hdc;
  if ( hdc )
  {
    if ( (*((_BYTE *)this + 264) & 2) != 0 )
    {
      SetTextAlign(hdc, align);
      v9 = hdc;
    }
    if ( h )
      SelectObject(v9, h);
  }
  if ( v4 )
    ReleaseGDIObject<HRGN__ *>((void **)&v42);
  if ( v6 )
    ReleaseGDIObject<HRGN__ *>((void **)&v43);
  if ( v1 )
    CBaseObject::Release(v1);
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v48 )
    ((void (__fastcall *)(struct IWICBitmap *))v48->lpVtbl->Release)(v48);
  if ( v8 )
    CBaseObject::Release(v8);
  return v41;
}
