/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180024B70
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180026C90 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18002508C (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ @ 0x18002A5DC (-EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003AA40 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18003AE10 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009E1CC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v3; // ecx
  HRGN v4; // r14
  int right; // edx
  int top; // r8d
  int bottom; // r11d
  int v8; // r12d
  int v9; // esi
  int v10; // r13d
  __int64 v11; // rax
  int v12; // edi
  int v13; // ebx
  bool v14; // zf
  int v15; // ecx
  int v16; // r10d
  LONG v17; // edx
  LONG v18; // r10d
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // r11d
  int v23; // esi
  int v24; // r9d
  int v25; // r8d
  LONG v26; // edx
  LONG left; // eax
  HRGN RoundRectRgn; // rax
  int v29; // eax
  signed int v30; // ebx
  int v31; // eax
  HRGN v32; // rdi
  int GeometryFromHRGN; // eax
  LONG v34; // r12d
  int v35; // r13d
  LONG v36; // ebx
  int v37; // r14d
  HRGN RectRgn; // rax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int MustBeOpaque; // eax
  signed int v44; // eax
  int v45; // edx
  unsigned int v46; // ecx
  int v47; // r8d
  signed int LastError; // eax
  signed int v49; // eax
  int v50; // edx
  unsigned int v51; // ecx
  int v52; // r8d
  signed int v53; // eax
  unsigned int w; // [rsp+20h] [rbp-79h]
  HRGN hrgnDst; // [rsp+30h] [rbp-69h] BYREF
  LONG v56; // [rsp+38h] [rbp-61h]
  int v57; // [rsp+3Ch] [rbp-5Dh]
  HRGN hrgnSrc2; // [rsp+40h] [rbp-59h]
  int v59; // [rsp+48h] [rbp-51h]
  int v60; // [rsp+4Ch] [rbp-4Dh]
  int v61; // [rsp+50h] [rbp-49h]
  struct tagRECT rc; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v63; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT Src; // [rsp+80h] [rbp-19h] BYREF
  int v65; // [rsp+90h] [rbp-9h]
  LONG v66; // [rsp+94h] [rbp-5h]
  int v67; // [rsp+98h] [rbp-1h]
  int v68; // [rsp+9Ch] [rbp+3h]
  int v69; // [rsp+A0h] [rbp+7h]
  LONG v70; // [rsp+A4h] [rbp+Bh]
  LONG v71; // [rsp+A8h] [rbp+Fh]
  int v72; // [rsp+ACh] [rbp+13h]
  int v73; // [rsp+B0h] [rbp+17h]
  int v74; // [rsp+B4h] [rbp+1Bh]
  LONG v75; // [rsp+B8h] [rbp+1Fh]
  int v76; // [rsp+BCh] [rbp+23h]

  v1 = *((_QWORD *)this + 93);
  v3 = *((_DWORD *)this + 152);
  v4 = 0LL;
  hrgnDst = 0LL;
  *(_QWORD *)&v63.left = CTopLevelWindow::s_ChooseWindowFrameFromStyle(v3, 1, (*(_BYTE *)(v1 + 571) & 0x20) != 0);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 93) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  right = rc.right - *((_DWORD *)this + 162);
  top = *((_DWORD *)this + 163) + rc.top;
  bottom = rc.bottom - *((_DWORD *)this + 164);
  v8 = *((_DWORD *)this + 157) - *((_DWORD *)this + 161);
  v9 = *((_DWORD *)this + 158) - *((_DWORD *)this + 162);
  v10 = *((_DWORD *)this + 160) - *((_DWORD *)this + 164);
  rc.left += *((_DWORD *)this + 161);
  v57 = *((_DWORD *)this + 159) - *((_DWORD *)this + 163);
  v11 = *((_QWORD *)this + 43);
  rc.right = right;
  rc.top = top;
  rc.bottom = bottom;
  v60 = v8 - *(_DWORD *)(v11 + 24);
  v56 = right;
  v61 = v9;
  if ( v60 < 0 )
    v60 = 0;
  v12 = v9 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
  if ( v12 < 0 )
    v12 = 0;
  v13 = v10 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
  if ( v13 < 0 )
    v13 = 0;
  v14 = (*((_BYTE *)this + 608) & 0x40) == 0;
  v59 = (int)((double)dword_1800BE5F0 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 165));
  if ( !v14
    || (*(_BYTE *)(*((_QWORD *)this + 93) + 571LL) & 0x20) != 0
    || (MustBeOpaque = CTopLevelWindow::EdgeBorderMustBeOpaque(this),
        right = rc.right,
        bottom = rc.bottom,
        top = rc.top,
        v56 = rc.right,
        MustBeOpaque) )
  {
    v15 = 0;
  }
  else
  {
    v15 = (int)*((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
  }
  v16 = right;
  v17 = top + v59;
  LODWORD(hrgnSrc2) = v15;
  Src.left = v15 + rc.left + v60;
  Src.top = top + v15;
  v18 = v16 - v15 - v12;
  v19 = bottom - v10;
  v67 = v8 + rc.left;
  Src.right = v18;
  v20 = bottom - v10;
  Src.bottom = v17;
  if ( rc.top + v57 > bottom - v10 )
    v20 = rc.top + v57;
  v65 = v15 + rc.left + v60;
  v68 = v20;
  v66 = v17;
  v69 = v56 - v9;
  v21 = bottom - v10;
  v70 = v17;
  if ( rc.top + v57 > v19 )
    v21 = rc.top + v57;
  v71 = v18;
  v72 = v21;
  v73 = v15 + rc.left + v60;
  if ( v19 < 0 )
    v19 = 0;
  v75 = v18;
  v22 = bottom - (_DWORD)hrgnSrc2 - v13;
  v74 = v19;
  if ( v22 < 0 )
    v76 = 0;
  else
    v76 = v22;
  SetLastError(0);
  v23 = 0x7FFFFFF;
  v24 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v24 = -134217728;
  }
  else if ( v24 >= 0x7FFFFFF )
  {
    v24 = 0x7FFFFFF;
  }
  v25 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v25 = -134217728;
  }
  else if ( v25 >= 0x7FFFFFF )
  {
    v25 = 0x7FFFFFF;
  }
  v26 = rc.top;
  if ( rc.top <= -134217728 )
  {
    v26 = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    v26 = 0x7FFFFFF;
  }
  left = rc.left;
  if ( rc.left <= -134217728 )
  {
    left = -134217728;
  }
  else if ( rc.left >= 0x7FFFFFF )
  {
    left = 0x7FFFFFF;
  }
  RoundRectRgn = CreateRoundRectRgn(
                   left,
                   v26,
                   v25,
                   v24,
                   2 * *(_DWORD *)(*(_QWORD *)&v63.left + 1876LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v63.left + 1876LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v29 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v30 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v29, 0x13A9u);
      goto LABEL_59;
    }
    v31 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v30 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v31, 0x13AFu);
      v32 = hrgnDst;
      goto LABEL_101;
    }
    SetLastError(0);
    v32 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v30 = LastError;
      if ( LastError > 0 )
        v30 = (unsigned __int16)LastError | 0x80070000;
      w = 5041;
      goto LABEL_97;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v32, (struct CResource **)this + 71);
    v30 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, GeometryFromHRGN, 0x13B2u);
      goto LABEL_101;
    }
    if ( v32 )
    {
      DeleteObject(v32);
      v32 = 0LL;
      hrgnDst = 0LL;
    }
    if ( v8 < 0 )
      v8 = 0;
    v34 = rc.left + v8;
    v35 = rc.top + v59;
    v63.left = v34;
    v63.top = rc.top + v59;
    if ( v61 >= 0 )
      LODWORD(v4) = v61;
    v36 = rc.right - (_DWORD)v4;
    v37 = rc.top + v57;
    v63.right = v36;
    v63.bottom = rc.top + v57;
    SetLastError(0);
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
      v36 = 0x7FFFFFF;
    }
    if ( v35 <= -134217728 )
    {
      v35 = -134217728;
    }
    else if ( v35 >= 0x7FFFFFF )
    {
      v35 = 0x7FFFFFF;
    }
    if ( v34 <= -134217728 )
    {
      v34 = -134217728;
    }
    else if ( v34 >= 0x7FFFFFF )
    {
LABEL_52:
      RectRgn = CreateRectRgn(v23, v35, v36, v37);
      v4 = RectRgn;
      if ( !RectRgn )
      {
        v49 = GetLastError();
        v30 = v49;
        if ( v49 > 0 )
          v30 = (unsigned __int16)v49 | 0x80070000;
        if ( v30 >= 0 )
          v30 = CheckGUIHandleQuota(v51, v50, v52);
        MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v30, 0x13BEu);
LABEL_101:
        if ( v32 )
LABEL_58:
          DeleteObject(v32);
LABEL_59:
        DeleteObject(hrgnSrc2);
        if ( v4 )
          DeleteObject(v4);
        goto LABEL_61;
      }
      v39 = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v30 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v39, 0x13C0u);
        goto LABEL_101;
      }
      v40 = HrgnFromRects(&v63, 1u, &hrgnDst);
      v30 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v40, 0x13C6u);
        v32 = hrgnDst;
        goto LABEL_101;
      }
      SetLastError(0);
      v32 = hrgnDst;
      if ( CombineRgn(hrgnDst, hrgnDst, v4, 1) )
      {
        v41 = ResourceHelper::CreateGeometryFromHRGN(v32, (struct CResource **)this + 72);
        v30 = v41;
        if ( v41 >= 0 )
        {
          if ( !v32 )
            goto LABEL_59;
          goto LABEL_58;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v41, 0x13C9u);
        goto LABEL_101;
      }
      v53 = GetLastError();
      v30 = v53;
      if ( v53 > 0 )
        v30 = (unsigned __int16)v53 | 0x80070000;
      w = 5064;
LABEL_97:
      if ( v30 >= 0 )
        v30 = -2003304445;
      MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v30, w);
      goto LABEL_101;
    }
    v23 = v34;
    goto LABEL_52;
  }
  v44 = GetLastError();
  v30 = v44;
  if ( v44 > 0 )
    v30 = (unsigned __int16)v44 | 0x80070000;
  if ( v30 >= 0 )
    v30 = CheckGUIHandleQuota(v46, v45, v47);
  MilInstrumentationCheckHR(0x14u, &dword_1800A54D0, 11LL, v30, 0x13A7u);
LABEL_61:
  if ( v30 == -2003304445 )
    return 2147942414LL;
  else
    return (unsigned int)v30;
}
