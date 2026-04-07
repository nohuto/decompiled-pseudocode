/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x1800218D0
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023FA0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180021E8C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18003CF30 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003D0C0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009AB0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  HRGN v2; // r15
  int v3; // edi
  bool v5; // bl
  unsigned int v6; // eax
  int left; // r8d
  int right; // r12d
  int top; // r13d
  int bottom; // r11d
  int v11; // ecx
  int v12; // r14d
  int v13; // edx
  __int64 v14; // rax
  int v15; // edi
  int v16; // ebx
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // ecx
  LONG v20; // r9d
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  int v24; // r11d
  int v25; // r14d
  int v26; // r9d
  int v27; // r8d
  LONG v28; // edx
  LONG v29; // eax
  HRGN RoundRectRgn; // rax
  int v31; // eax
  signed int v32; // ebx
  int v33; // eax
  HRGN v34; // rdi
  int GeometryFromHRGN; // eax
  int v36; // r12d
  int v37; // r13d
  LONG v38; // ebx
  int v39; // r15d
  HRGN RectRgn; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  signed int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  int v48; // r8d
  signed int LastError; // eax
  int v50; // r9d
  signed int v51; // eax
  int v52; // edx
  unsigned int v53; // ecx
  int v54; // r8d
  signed int v55; // eax
  unsigned int w; // [rsp+20h] [rbp-79h]
  int v57; // [rsp+30h] [rbp-69h]
  HRGN hrgnDst; // [rsp+38h] [rbp-61h] BYREF
  int v59; // [rsp+40h] [rbp-59h]
  int v60; // [rsp+44h] [rbp-55h]
  int v61; // [rsp+48h] [rbp-51h]
  int v62; // [rsp+4Ch] [rbp-4Dh]
  HRGN hrgnSrc2; // [rsp+50h] [rbp-49h]
  int v64; // [rsp+58h] [rbp-41h]
  struct tagRECT rc; // [rsp+60h] [rbp-39h] BYREF
  struct tagRECT v66; // [rsp+70h] [rbp-29h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  LONG v68; // [rsp+90h] [rbp-9h]
  int v69; // [rsp+94h] [rbp-5h]
  int v70; // [rsp+98h] [rbp-1h]
  int v71; // [rsp+9Ch] [rbp+3h]
  int v72; // [rsp+A0h] [rbp+7h]
  int v73; // [rsp+A4h] [rbp+Bh]
  int v74; // [rsp+A8h] [rbp+Fh]
  int v75; // [rsp+ACh] [rbp+13h]
  LONG v76; // [rsp+B0h] [rbp+17h]
  int v77; // [rsp+B4h] [rbp+1Bh]
  int v78; // [rsp+B8h] [rbp+1Fh]
  int v79; // [rsp+BCh] [rbp+23h]

  v1 = *((_QWORD *)this + 93);
  v2 = 0LL;
  v3 = *((_DWORD *)this + 152);
  hrgnDst = 0LL;
  v5 = (*(_BYTE *)(v1 + 579) & 0x20) != 0;
  IsOpenThemeDataPresent();
  if ( (v3 & 0x20) != 0 )
  {
    if ( v5 || (v3 & 0x40) != 0 )
      v6 = 2;
    else
      v6 = 3;
  }
  else if ( v5 || (v3 & 0x40) != 0 )
  {
    v6 = 0;
    if ( (v3 & 2) != 0 )
      v6 = 4;
  }
  else if ( (v3 & 2) != 0 )
  {
    v6 = 5;
  }
  else
  {
    v6 = 1;
  }
  *(_QWORD *)&v66.left = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * v6);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 93) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  left = *((_DWORD *)this + 161) + rc.left;
  right = rc.right - *((_DWORD *)this + 162);
  top = *((_DWORD *)this + 163) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 164);
  v11 = *((_DWORD *)this + 157) - *((_DWORD *)this + 161);
  v12 = *((_DWORD *)this + 158) - *((_DWORD *)this + 162);
  v13 = *((_DWORD *)this + 160) - *((_DWORD *)this + 164);
  v62 = *((_DWORD *)this + 159) - *((_DWORD *)this + 163);
  v14 = *((_QWORD *)this + 43);
  rc.left = left;
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v57 = v11;
  v59 = v11 - *(_DWORD *)(v14 + 24);
  v64 = v12;
  LODWORD(hrgnSrc2) = v13;
  if ( v59 < 0 )
    v59 = 0;
  v15 = v12 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
  if ( v15 < 0 )
    v15 = 0;
  v16 = v13 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
  if ( v16 < 0 )
    v16 = 0;
  v17 = (*((_BYTE *)this + 608) & 0x40) == 0;
  v61 = (int)((double)dword_1800B7D68 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 163));
  if ( v17 )
  {
    v18 = *((_QWORD *)this + 93);
    if ( (*(_BYTE *)(v18 + 579) & 0x20) == 0 && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 1392) )
    {
      if ( !(unsigned int)IsWindowArranged(*(_QWORD *)(v18 + 40)) && (*((_BYTE *)this + 608) & 0x20) == 0 )
      {
        bottom = rc.bottom;
        right = rc.right;
        top = rc.top;
        v19 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 163);
        left = rc.left;
        goto LABEL_18;
      }
      bottom = rc.bottom;
      right = rc.right;
      top = rc.top;
      left = rc.left;
    }
  }
  v19 = 0;
LABEL_18:
  v20 = v59 + left + v19;
  Src.top = v19 + top;
  v60 = v19;
  v70 = left + v57;
  Src.left = v20;
  Src.right = right - v19 - v15;
  v21 = bottom - (_DWORD)hrgnSrc2;
  Src.bottom = top + v61;
  v22 = bottom - (_DWORD)hrgnSrc2;
  v68 = v20;
  if ( top + v62 > bottom - (int)hrgnSrc2 )
    v22 = top + v62;
  v69 = top + v61;
  v71 = v22;
  v72 = right - v12;
  v23 = bottom - (_DWORD)hrgnSrc2;
  v73 = top + v61;
  if ( top + v62 > v21 )
    v23 = top + v62;
  v74 = right - v19 - v15;
  v75 = v23;
  v76 = v20;
  if ( v21 < 0 )
    v21 = 0;
  v78 = right - v19 - v15;
  v24 = bottom - v60 - v16;
  v77 = v21;
  if ( v24 < 0 )
    v79 = 0;
  else
    v79 = v24;
  SetLastError(0);
  v25 = 0x7FFFFFF;
  v26 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v26 = -134217728;
  }
  else if ( v26 >= 0x7FFFFFF )
  {
    v26 = 0x7FFFFFF;
  }
  v27 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v27 = -134217728;
  }
  else if ( v27 >= 0x7FFFFFF )
  {
    v27 = 0x7FFFFFF;
  }
  v28 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v28 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v28 = 0x7FFFFFF;
  }
  v29 = rc.left;
  if ( rc.left <= -134217728 )
  {
    v29 = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    v29 = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   v29,
                   v28,
                   v27,
                   v26,
                   2 * *(_DWORD *)(*(_QWORD *)&v66.left + 1884LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v66.left + 1884LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v31 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v32 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v31, 0x10D3u);
      goto LABEL_68;
    }
    v33 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v32 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v33, 0x10D9u);
      v34 = hrgnDst;
      goto LABEL_117;
    }
    SetLastError(0);
    v34 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v32 = LastError;
      if ( LastError > 0 )
        v32 = (unsigned __int16)LastError | 0x80070000;
      w = 4315;
LABEL_98:
      if ( v32 >= 0 )
        v32 = -2003304445;
      v50 = v32;
      goto LABEL_102;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v34, (struct CResource **)this + 71);
    v32 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      w = 4316;
      v50 = GeometryFromHRGN;
LABEL_102:
      MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v50, w);
      goto LABEL_117;
    }
    if ( v34 )
    {
      DeleteObject(v34);
      v34 = 0LL;
      hrgnDst = 0LL;
    }
    if ( v57 < 0 )
      v57 = 0;
    v36 = rc.left + v57;
    v37 = rc.top + v61;
    v66.left = rc.left + v57;
    v66.top = rc.top + v61;
    if ( v64 >= 0 )
      LODWORD(v2) = v64;
    v38 = rc.right - (_DWORD)v2;
    v39 = rc.top + v62;
    v66.right = v38;
    v66.bottom = rc.top + v62;
    SetLastError(0);
    if ( v39 <= -134217728 )
    {
      v39 = -134217728;
    }
    else if ( v39 >= 0x7FFFFFF )
    {
      v39 = 0x7FFFFFF;
    }
    if ( v38 <= -134217728 )
    {
      v38 = -134217728;
    }
    else if ( v38 >= 0x7FFFFFF )
    {
      v38 = 0x7FFFFFF;
    }
    if ( v37 <= -134217728 )
    {
      v37 = -134217728;
    }
    else if ( v37 >= 0x7FFFFFF )
    {
      v37 = 0x7FFFFFF;
    }
    if ( v36 <= -134217728 )
    {
      v36 = -134217728;
    }
    else if ( v36 >= 0x7FFFFFF )
    {
      goto LABEL_61;
    }
    v25 = v36;
LABEL_61:
    RectRgn = CreateRectRgn(v25, v37, v38, v39);
    v2 = RectRgn;
    if ( RectRgn )
    {
      v41 = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v32 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v41, 0x10EAu);
      }
      else
      {
        v42 = HrgnFromRects(&v66, 1u, &hrgnDst);
        v32 = v42;
        if ( v42 >= 0 )
        {
          SetLastError(0);
          v34 = hrgnDst;
          if ( CombineRgn(hrgnDst, hrgnDst, v2, 1) )
          {
            v43 = ResourceHelper::CreateGeometryFromHRGN(v34, (struct CResource **)this + 72);
            v32 = v43;
            if ( v43 >= 0 )
            {
              if ( !v34 )
                goto LABEL_68;
              goto LABEL_67;
            }
            MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v43, 0x10F3u);
            goto LABEL_117;
          }
          v55 = GetLastError();
          v32 = v55;
          if ( v55 > 0 )
            v32 = (unsigned __int16)v55 | 0x80070000;
          w = 4338;
          goto LABEL_98;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v42, 0x10F0u);
        v34 = hrgnDst;
      }
    }
    else
    {
      v51 = GetLastError();
      v32 = v51;
      if ( v51 > 0 )
        v32 = (unsigned __int16)v51 | 0x80070000;
      if ( v32 >= 0 )
        v32 = CheckGUIHandleQuota(v53, v52, v54);
      MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v32, 0x10E8u);
    }
LABEL_117:
    if ( v34 )
LABEL_67:
      DeleteObject(v34);
LABEL_68:
    DeleteObject(hrgnSrc2);
    if ( v2 )
      DeleteObject(v2);
    goto LABEL_70;
  }
  v45 = GetLastError();
  v32 = v45;
  if ( v45 > 0 )
    v32 = (unsigned __int16)v45 | 0x80070000;
  if ( v32 >= 0 )
    v32 = CheckGUIHandleQuota(v47, v46, v48);
  MilInstrumentationCheckHR(0x14u, &dword_1800A3CB8, 0xBu, v32, 0x10D1u);
LABEL_70:
  if ( v32 == -2003304445 )
    return 2147942414LL;
  else
    return (unsigned int)v32;
}
