/*
 * XREFs of ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001F6C0
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800060B0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180006480 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001FBB0 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009CAFC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaGeometry(CTopLevelWindow *this)
{
  __int64 v1; // rax
  int v3; // ecx
  HRGN v4; // r14
  LONG v5; // r8d
  LONG v6; // r9d
  LONG v7; // r10d
  LONG v8; // edi
  int v9; // r12d
  int v10; // ebx
  int v11; // r13d
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r11d
  bool v15; // zf
  double v16; // xmm1_8
  int v17; // esi
  LONG v18; // r9d
  LONG v19; // r10d
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // esi
  int v25; // r9d
  int v26; // r8d
  LONG top; // edx
  LONG left; // eax
  HRGN RoundRectRgn; // rax
  int v30; // eax
  signed int v31; // ebx
  int v32; // eax
  HRGN v33; // rdi
  int GeometryFromHRGN; // eax
  LONG v35; // r12d
  int v36; // r13d
  LONG v37; // ebx
  int v38; // r14d
  HRGN RectRgn; // rax
  int v40; // eax
  int v41; // eax
  int v42; // eax
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
  unsigned int w; // [rsp+20h] [rbp-69h]
  HRGN hrgnDst; // [rsp+30h] [rbp-59h] BYREF
  int v56; // [rsp+38h] [rbp-51h]
  int v57; // [rsp+3Ch] [rbp-4Dh]
  HRGN hrgnSrc2; // [rsp+40h] [rbp-49h]
  int v59; // [rsp+48h] [rbp-41h]
  int v60; // [rsp+4Ch] [rbp-3Dh]
  struct tagRECT rc; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v62; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT Src; // [rsp+70h] [rbp-19h] BYREF
  LONG v64; // [rsp+80h] [rbp-9h]
  int v65; // [rsp+84h] [rbp-5h]
  int v66; // [rsp+88h] [rbp-1h]
  int v67; // [rsp+8Ch] [rbp+3h]
  int v68; // [rsp+90h] [rbp+7h]
  int v69; // [rsp+94h] [rbp+Bh]
  LONG v70; // [rsp+98h] [rbp+Fh]
  int v71; // [rsp+9Ch] [rbp+13h]
  LONG v72; // [rsp+A0h] [rbp+17h]
  int v73; // [rsp+A4h] [rbp+1Bh]
  LONG v74; // [rsp+A8h] [rbp+1Fh]
  int v75; // [rsp+ACh] [rbp+23h]

  v1 = *((_QWORD *)this + 93);
  v3 = *((_DWORD *)this + 152);
  v4 = 0LL;
  hrgnDst = 0LL;
  *(_QWORD *)&v62.left = CTopLevelWindow::s_ChooseWindowFrameFromStyle(v3, 1, (*(_BYTE *)(v1 + 555) & 0x20) != 0);
  rc = *(struct tagRECT *)(*((_QWORD *)this + 93) + 48LL);
  rc.left = _mm_cvtsi128_si32((__m128i)rc);
  OffsetRect(&rc, -rc.left, -rc.top);
  v5 = rc.right - *((_DWORD *)this + 162);
  v6 = *((_DWORD *)this + 161) + rc.left;
  v7 = *((_DWORD *)this + 163) + rc.top;
  v8 = rc.bottom - *((_DWORD *)this + 164);
  v9 = *((_DWORD *)this + 157) - *((_DWORD *)this + 161);
  v10 = *((_DWORD *)this + 158) - *((_DWORD *)this + 162);
  v11 = *((_DWORD *)this + 160) - *((_DWORD *)this + 164);
  v56 = *((_DWORD *)this + 159) - *((_DWORD *)this + 163);
  v12 = *((_QWORD *)this + 43);
  rc.left = v6;
  rc.right = v5;
  rc.top = v7;
  rc.bottom = v8;
  v57 = v9 - *(_DWORD *)(v12 + 24);
  LODWORD(hrgnSrc2) = v5;
  v59 = v10;
  if ( v57 < 0 )
    v57 = 0;
  v13 = v10 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
  if ( v13 < 0 )
    v13 = 0;
  v14 = v11 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
  if ( v14 < 0 )
    v14 = 0;
  v15 = (*((_BYTE *)this + 608) & 0x40) == 0;
  v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165);
  v60 = (int)((double)dword_1800BC530 * v16);
  if ( !v15 || (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0 )
    v17 = 0;
  else
    v17 = (int)v16;
  v18 = v6 + v17 + v57;
  Src.top = v7 + v17;
  Src.left = v18;
  v19 = v5 - v17 - v13;
  v66 = v9 + rc.left;
  Src.right = v19;
  v20 = v8 - v11;
  Src.bottom = rc.top + (int)((double)dword_1800BC530 * v16);
  v21 = v8 - v11;
  v64 = v18;
  if ( v56 + rc.top > v8 - v11 )
    v21 = v56 + rc.top;
  v65 = rc.top + (int)((double)dword_1800BC530 * v16);
  v67 = v21;
  v69 = v65;
  v68 = (_DWORD)hrgnSrc2 - v10;
  v22 = v8 - v11;
  v70 = v19;
  if ( v56 + rc.top > v20 )
    v22 = v56 + rc.top;
  v72 = v18;
  v71 = v22;
  v74 = v19;
  if ( v20 < 0 )
    v20 = 0;
  v23 = v8 - v17 - v14;
  v73 = v20;
  if ( v23 < 0 )
    v75 = 0;
  else
    v75 = v23;
  SetLastError(0);
  v24 = 0x7FFFFFF;
  v25 = rc.bottom + 1;
  if ( rc.bottom + 1 <= -134217728 )
  {
    v25 = -134217728;
  }
  else if ( v25 >= 0x7FFFFFF )
  {
    v25 = 0x7FFFFFF;
  }
  v26 = rc.right + 1;
  if ( rc.right + 1 <= -134217728 )
  {
    v26 = -134217728;
  }
  else if ( v26 >= 0x7FFFFFF )
  {
    v26 = 0x7FFFFFF;
  }
  top = rc.top;
  if ( rc.top <= -134217728 )
  {
    top = -134217728;
  }
  else if ( rc.top >= 0x7FFFFFF )
  {
    top = 0x7FFFFFF;
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
                   top,
                   v26,
                   v25,
                   2 * *(_DWORD *)(*(_QWORD *)&v62.left + 1172LL),
                   2 * *(_DWORD *)(*(_QWORD *)&v62.left + 1172LL));
  hrgnSrc2 = RoundRectRgn;
  if ( RoundRectRgn )
  {
    v30 = CTopLevelWindow::ApplyMaximizedClip(this, RoundRectRgn);
    v31 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v30, 0x1343u);
      goto LABEL_60;
    }
    v32 = HrgnFromRects(&Src, 4u, &hrgnDst);
    v31 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v32, 0x1349u);
      v33 = hrgnDst;
      goto LABEL_100;
    }
    SetLastError(0);
    v33 = hrgnDst;
    if ( !CombineRgn(hrgnDst, hrgnDst, hrgnSrc2, 1) )
    {
      LastError = GetLastError();
      v31 = LastError;
      if ( LastError > 0 )
        v31 = (unsigned __int16)LastError | 0x80070000;
      w = 4939;
      goto LABEL_96;
    }
    GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(v33, (struct CResource **)this + 71);
    v31 = GeometryFromHRGN;
    if ( GeometryFromHRGN < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, GeometryFromHRGN, 0x134Cu);
      goto LABEL_100;
    }
    if ( v33 )
    {
      DeleteObject(v33);
      v33 = 0LL;
      hrgnDst = 0LL;
    }
    if ( v9 < 0 )
      v9 = 0;
    v35 = rc.left + v9;
    v36 = rc.top + v60;
    v62.left = v35;
    v62.top = rc.top + v60;
    if ( v59 >= 0 )
      LODWORD(v4) = v59;
    v37 = rc.right - (_DWORD)v4;
    v38 = rc.top + v56;
    v62.right = v37;
    v62.bottom = rc.top + v56;
    SetLastError(0);
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
      v36 = 0x7FFFFFF;
    }
    if ( v35 <= -134217728 )
    {
      v35 = -134217728;
    }
    else if ( v35 >= 0x7FFFFFF )
    {
LABEL_53:
      RectRgn = CreateRectRgn(v24, v36, v37, v38);
      v4 = RectRgn;
      if ( !RectRgn )
      {
        v49 = GetLastError();
        v31 = v49;
        if ( v49 > 0 )
          v31 = (unsigned __int16)v49 | 0x80070000;
        if ( v31 >= 0 )
          v31 = CheckGUIHandleQuota(v51, v50, v52);
        MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v31, 0x1358u);
LABEL_100:
        if ( v33 )
LABEL_59:
          DeleteObject(v33);
LABEL_60:
        DeleteObject(hrgnSrc2);
        if ( v4 )
          DeleteObject(v4);
        goto LABEL_62;
      }
      v40 = CTopLevelWindow::ApplyMaximizedClip(this, RectRgn);
      v31 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v40, 0x135Au);
        goto LABEL_100;
      }
      v41 = HrgnFromRects(&v62, 1u, &hrgnDst);
      v31 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v41, 0x1360u);
        v33 = hrgnDst;
        goto LABEL_100;
      }
      SetLastError(0);
      v33 = hrgnDst;
      if ( CombineRgn(hrgnDst, hrgnDst, v4, 1) )
      {
        v42 = ResourceHelper::CreateGeometryFromHRGN(v33, (struct CResource **)this + 72);
        v31 = v42;
        if ( v42 >= 0 )
        {
          if ( !v33 )
            goto LABEL_60;
          goto LABEL_59;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v42, 0x1363u);
        goto LABEL_100;
      }
      v53 = GetLastError();
      v31 = v53;
      if ( v53 > 0 )
        v31 = (unsigned __int16)v53 | 0x80070000;
      w = 4962;
LABEL_96:
      if ( v31 >= 0 )
        v31 = -2003304445;
      MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v31, w);
      goto LABEL_100;
    }
    v24 = v35;
    goto LABEL_53;
  }
  v44 = GetLastError();
  v31 = v44;
  if ( v44 > 0 )
    v31 = (unsigned __int16)v44 | 0x80070000;
  if ( v31 >= 0 )
    v31 = CheckGUIHandleQuota(v46, v45, v47);
  MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v31, 0x1341u);
LABEL_62:
  if ( v31 == -2003304445 )
    return 2147942414LL;
  else
    return (unsigned int)v31;
}
