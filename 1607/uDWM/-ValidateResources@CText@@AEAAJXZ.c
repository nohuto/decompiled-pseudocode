/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x18001821C
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJXZ @ 0x1800181A0 (-UpdateLayout@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180018790 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015764 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015814 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800158F0 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AE4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180015B58 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180015C4C (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x1800180F4 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  CBaseObject *v1; // r12
  bool v3; // zf
  signed int updated; // edi
  HDC v5; // r15
  struct CBitmapSource *v6; // rbx
  CBaseObject *v7; // r13
  CBaseObject *v9; // rcx
  CTextCache *v10; // r13
  __int64 v11; // rbx
  HDC v12; // rcx
  COLORREF v13; // edx
  int v14; // eax
  int v15; // r12d
  int right; // ecx
  int bottom; // eax
  LONG v18; // eax
  LONG v19; // eax
  int v20; // edx
  int v21; // ecx
  HBITMAP Bitmap; // rax
  HBITMAP v23; // rbx
  HBRUSH SolidBrush; // rax
  int v25; // eax
  const struct _MARGINS *v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  void (__fastcall *v31)(CVisual *__hidden, unsigned int); // rax
  UINT TextAlign; // eax
  int v33; // r9d
  signed int LastError; // eax
  signed int v35; // eax
  signed int v36; // eax
  signed int v37; // eax
  signed int v38; // eax
  unsigned int format; // [rsp+28h] [rbp-49h]
  struct CPopInstruction *v40; // [rsp+38h] [rbp-39h] BYREF
  struct CRenderDataInstruction *v41; // [rsp+40h] [rbp-31h] BYREF
  struct CBitmapSource *v42; // [rsp+48h] [rbp-29h] BYREF
  UINT align; // [rsp+50h] [rbp-21h]
  HBITMAP v44; // [rsp+58h] [rbp-19h] BYREF
  HBRUSH v45; // [rsp+60h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v46; // [rsp+68h] [rbp-9h] BYREF
  struct IWICBitmap *v47; // [rsp+70h] [rbp-1h] BYREF
  HGDIOBJ h; // [rsp+78h] [rbp+7h]
  __int64 v49; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0LL;
  v3 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  updated = 0;
  v46 = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  h = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  align = 0;
  if ( v3 )
  {
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_3;
  }
  CVisual::ClearInstructions(this);
  v9 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 47) = 0LL;
  }
  if ( *((_QWORD *)this + 34) )
  {
    v10 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
    if ( v10 )
    {
      v5 = (HDC)*((_QWORD *)v10 + 13);
      if ( v5 )
      {
        v11 = *((_QWORD *)this + 14);
        v12 = (HDC)*((_QWORD *)v10 + 13);
        v13 = *((_DWORD *)this + 99);
        v49 = v11;
        *(_QWORD *)&rc.left = 0LL;
        *(_QWORD *)&rc.right = v11;
        SetBkColor(v12, v13);
        SetTextColor(v5, *((_DWORD *)this + 98));
        if ( (*((_BYTE *)this + 264) & 2) != 0 )
        {
          TextAlign = GetTextAlign(v5);
          align = SetTextAlign(v5, TextAlign | 0x100);
        }
        v14 = CTextCache::SetFont(v10, (const struct tagLOGFONTW *)((char *)this + 280));
        updated = v14;
        if ( v14 < 0 )
        {
          format = 291;
          goto LABEL_73;
        }
        v15 = *((_BYTE *)this + 264) & 2 | 0x820;
        if ( (*((_BYTE *)this + 264) & 1) != 0 )
        {
          right = *((_DWORD *)this + 96);
          bottom = *((_DWORD *)this + 97);
        }
        else
        {
          SetLastError(0);
          if ( !DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v15 | 0x400) )
          {
            LastError = GetLastError();
            updated = LastError;
            if ( LastError > 0 )
              updated = (unsigned __int16)LastError | 0x80070000;
            format = 308;
            goto LABEL_75;
          }
          right = rc.right;
          bottom = rc.bottom;
          *((_BYTE *)this + 264) |= 1u;
          *((_DWORD *)this + 96) = right;
          *((_DWORD *)this + 97) = bottom;
        }
        if ( right >= (int)v11 )
          right = v11;
        rc.right = right;
        if ( bottom >= SHIDWORD(v49) )
          bottom = HIDWORD(v49);
        rc.bottom = bottom;
        if ( right > 0 && bottom > 0 )
        {
          SetLastError(0);
          if ( DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v15 | 0x8404) )
          {
            v18 = rc.right;
            if ( rc.right >= (int)v11 )
              v18 = v11;
            rc.right = v18;
            v19 = rc.bottom;
            if ( rc.bottom >= SHIDWORD(v49) )
              v19 = HIDWORD(v49);
            rc.bottom = v19;
            SetLastError(0);
            v20 = rc.bottom - rc.top;
            if ( rc.bottom - rc.top < 0 )
              v20 = 0;
            v21 = rc.right - rc.left;
            if ( rc.right - rc.left < 0 )
              v21 = 0;
            Bitmap = CreateBitmap(v21, v20, 1u, 0x20u, 0LL);
            v44 = Bitmap;
            v23 = Bitmap;
            if ( Bitmap )
            {
              h = SelectObject(v5, Bitmap);
              SetLastError(0);
              SolidBrush = CreateSolidBrush(*((_DWORD *)this + 99));
              v45 = SolidBrush;
              if ( SolidBrush )
              {
                FillRect(v5, &rc, SolidBrush);
                SetLastError(0);
                if ( DrawTextW(v5, *((LPCWSTR *)this + 34), -1, &rc, v15 | 0x8004) )
                {
                  GdiFlush();
                  v25 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 28) + 168LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
                          v23,
                          0LL,
                          2LL,
                          &v47);
                  updated = v25;
                  if ( v25 < 0 )
                  {
                    format = 356;
                    v33 = v25;
                    goto LABEL_79;
                  }
                  v14 = CResource::Create(20LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
                  updated = v14;
                  if ( v14 < 0 )
                  {
                    format = 360;
                  }
                  else
                  {
                    v14 = CPushTransformInstruction::Create(*((struct CResource **)this + 47), &v46);
                    updated = v14;
                    if ( v14 < 0 )
                    {
                      format = 361;
                    }
                    else
                    {
                      v14 = CVisual::AddInstruction(this, v46);
                      updated = v14;
                      if ( v14 < 0 )
                      {
                        format = 362;
                      }
                      else
                      {
                        v14 = CBitmapSource::Create(
                                v47,
                                v26,
                                *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                &v42);
                        updated = v14;
                        if ( v14 >= 0 )
                        {
                          v6 = v42;
                          v27 = CDrawImageInstruction::Create(v42, &rc, &v41);
                          updated = v27;
                          if ( v27 >= 0 )
                          {
                            v1 = v41;
                            v28 = CVisual::AddInstruction(this, v41);
                            updated = v28;
                            if ( v28 < 0 )
                            {
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x16Eu);
                            }
                            else
                            {
                              v29 = CPopInstruction::Create(&v40);
                              updated = v29;
                              if ( v29 >= 0 )
                              {
                                v7 = v40;
                                v30 = CVisual::AddInstruction(this, v40);
                                updated = v30;
                                if ( v30 < 0 )
                                {
                                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x171u);
                                  goto LABEL_6;
                                }
                                v31 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
                                if ( v31 == CVisual::SetDirtyFlags )
                                  CVisual::SetDirtyFlags(this, 0x8000u);
                                else
                                  v31(this, 0x8000u);
                                goto LABEL_61;
                              }
                              MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x170u);
                            }
LABEL_83:
                            v7 = v40;
                            goto LABEL_6;
                          }
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x16Du);
LABEL_81:
                          v1 = v41;
                          goto LABEL_83;
                        }
                        format = 364;
                      }
                    }
                  }
LABEL_73:
                  v33 = v14;
LABEL_79:
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, format);
                  v6 = v42;
                  goto LABEL_81;
                }
                v38 = GetLastError();
                updated = v38;
                if ( v38 > 0 )
                  updated = (unsigned __int16)v38 | 0x80070000;
                format = 352;
              }
              else
              {
                v37 = GetLastError();
                updated = v37;
                if ( v37 > 0 )
                  updated = (unsigned __int16)v37 | 0x80070000;
                format = 344;
              }
            }
            else
            {
              v36 = GetLastError();
              updated = v36;
              if ( v36 > 0 )
                updated = (unsigned __int16)v36 | 0x80070000;
              format = 338;
            }
          }
          else
          {
            v35 = GetLastError();
            updated = v35;
            if ( v35 > 0 )
              updated = (unsigned __int16)v35 | 0x80070000;
            format = 330;
          }
LABEL_75:
          if ( updated >= 0 )
            updated = -2003304445;
          v33 = updated;
          goto LABEL_79;
        }
      }
    }
  }
  v6 = v42;
  v1 = v41;
  v7 = v40;
LABEL_61:
  *((_DWORD *)this + 20) &= ~0x1000u;
LABEL_3:
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    updated = CText::UpdateAlignmentTransform(this);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x17Du);
      goto LABEL_6;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
LABEL_6:
  if ( v5 )
  {
    if ( (*((_BYTE *)this + 264) & 2) != 0 )
      SetTextAlign(v5, align);
    if ( h )
      SelectObject(v5, h);
  }
  if ( v44 )
    ReleaseGDIObject<HRGN__ *>((void **)&v44);
  if ( v45 )
    ReleaseGDIObject<HRGN__ *>((void **)&v45);
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v47 )
    ((void (__fastcall *)(struct IWICBitmap *))v47->lpVtbl->Release)(v47);
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)updated;
}
