/*
 * XREFs of xxxDrawCaptionBar @ 0x140122F88
 * Callers:
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     IS_UI_LANGID @ 0x140124878 (IS_UI_LANGID.c)
 *     GetOemBitmapInfoForDpi @ 0x140124A34 (GetOemBitmapInfoForDpi.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     GetWindowFrameMetricForDpi @ 0x1401BF59C (GetWindowFrameMetricForDpi.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     GetResizeBorderWidthForDpi @ 0x14020AF94 (GetResizeBorderWidthForDpi.c)
 *     DrawFrame @ 0x1402245C8 (DrawFrame.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, Gre::Base *a2, int a3)
{
  char v3; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r13d
  char v18; // dl
  unsigned int v19; // edi
  char v20; // al
  char v21; // al
  __int64 v22; // rcx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // r15d
  unsigned int v28; // eax
  int DpiDependentMetric; // ebx
  unsigned int v30; // eax
  int v31; // eax
  LONG v32; // edx
  unsigned int DpiForSystem; // eax
  BOOL v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int WindowFrameMetricForDpi; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r15d
  unsigned int v43; // r15d
  int v44; // r13d
  int v45; // ecx
  int v46; // edx
  int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // ebx
  int v50; // ebx
  __int64 v51; // rax
  int v52; // eax
  HDC v53; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v58; // [rsp+20h] [rbp-99h]
  unsigned int v59; // [rsp+60h] [rbp-59h]
  unsigned int v60; // [rsp+64h] [rbp-55h]
  int v61; // [rsp+64h] [rbp-55h]
  int v62; // [rsp+64h] [rbp-55h]
  int v63; // [rsp+68h] [rbp-51h]
  int v65; // [rsp+70h] [rbp-49h]
  __int64 v66; // [rsp+78h] [rbp-41h]
  __int64 v67; // [rsp+80h] [rbp-39h]
  __int64 v68; // [rsp+88h] [rbp-31h]
  LONG right; // [rsp+90h] [rbp-29h] BYREF
  int v70; // [rsp+94h] [rbp-25h]
  int v71; // [rsp+98h] [rbp-21h]
  int v72; // [rsp+9Ch] [rbp-1Dh]
  __int64 v73; // [rsp+A0h] [rbp-19h]
  LONG v74; // [rsp+A8h] [rbp-11h]
  int v75; // [rsp+ACh] [rbp-Dh]
  int v76; // [rsp+B0h] [rbp-9h]
  int v77; // [rsp+B4h] [rbp-5h]
  __int64 v78; // [rsp+B8h] [rbp-1h]
  RECT v79; // [rsp+C0h] [rbp+7h] BYREF

  v63 = 0;
  v3 = a3;
  v68 = 0LL;
  v79 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(v6) = IsVisible(a1);
    if ( !(_DWORD)v6 )
      return v6;
  }
  GetRect(a1, &v79, 34LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v8, v7) + 43264) )
  {
    v10 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 66796) & 0x80000010;
    if ( (_DWORD)v10 == -2147483632 )
    {
      v11 = v3 & 1;
      if ( (v3 & 1) != 0 )
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 4912LL);
      else
        v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 4920LL);
      v65 = 1;
      goto LABEL_8;
    }
  }
  v65 = 0;
  v11 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    v65 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 4720LL);
LABEL_8:
    v66 = v12;
    goto LABEL_9;
  }
  v66 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 4712LL);
LABEL_9:
  v13 = *((_QWORD *)a1 + 5);
  v14 = *(_DWORD *)(v13 + 288) & 0xF;
  if ( v14 == 3 )
  {
    v59 = (*(_DWORD *)(v13 + 288) >> 8) & 0x1FF;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    goto LABEL_25;
  }
  if ( v14
    || (v51 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
LABEL_25:
    v59 = WindowDpiLastNotify;
    goto LABEL_11;
  }
  v59 = 96;
LABEL_11:
  v15 = xxxMNCanClose(a1);
  v16 = *((_QWORD *)a1 + 5);
  v17 = 8;
  v18 = *(_BYTE *)(v16 + 30);
  v19 = v15 == 0 ? 0x10 : 0;
  v20 = *(_BYTE *)(v16 + 31);
  if ( (v18 & 1) != 0 )
  {
    if ( (v20 & 1) != 0 )
      v19 |= 2u;
  }
  else
  {
    v19 |= 8u;
  }
  if ( (v18 & 2) != 0 )
  {
    v21 = v20 & 0x20;
    if ( v21 )
    {
      v19 |= 1u;
      goto LABEL_43;
    }
  }
  else
  {
    v19 |= 4u;
    v21 = v20 & 0x20;
  }
  if ( v21 )
  {
LABEL_43:
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge((HDC)a2);
      DrawFrame(a2, &v79, 1LL, 120LL);
      ++v79.left;
      --v79.right;
      ++v79.top;
    }
    else
    {
      v79.left += 3;
      v79.right -= 3;
      v79.top += 3;
    }
    DpiForSystem = GetDpiForSystem();
    v79.bottom = v79.top + GetDpiDependentMetric(13, DpiForSystem);
    v68 = GreSelectBrush(a2, v66);
LABEL_36:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
      goto LABEL_50;
    v27 = 1;
    v28 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(12, v28);
    v30 = GetDpiForSystem();
    v31 = GetDpiDependentMetric(23, v30);
    v61 = v31;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v19 )
      {
        if ( v19 != 12 )
        {
          v79.bottom -= 2;
          v58 = v79.bottom - (v79.top + 2);
          v79.top += 2;
          v79.right -= 2;
          GrePatBlt(a2, v79.right, v79.top, 2, v58, 15728673);
          v41 = v63;
          if ( (v19 & 0x10) != 0 )
            v41 = v63 + 3;
          v42 = v59;
          v79.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v41, v59) + 4);
          BitBltSysBmp((HDC)a2, 1);
          if ( (v19 & 0xC) != 12 && (v19 & 0x20) == 0 )
          {
            v79.right -= 2;
            GrePatBlt(a2, v79.right, v79.top, 2, v79.bottom - v79.top, 15728673);
            if ( (v19 & 2) != 0 )
              v43 = 8;
            else
              v43 = (v19 & 8) != 0 ? 17 : 14;
            v79.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v43, v59) + 4);
            BitBltSysBmp((HDC)a2, 1);
            if ( (v19 & 1) == 0 )
              v17 = (v19 & 4) != 0 ? 7 : 4;
            v42 = v59;
            v79.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v17, v59) + 4);
            BitBltSysBmp((HDC)a2, 1);
            v79.right -= 2;
            GrePatBlt(a2, v79.right, v79.top, 2, v79.bottom - v79.top, 15728673);
            v44 = 3;
          }
          else
          {
            v44 = 1;
          }
          if ( (v19 & 0x1C) != 0 && (v19 & 0x20) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v79.right -= 2;
            GrePatBlt(a2, v79.right, v79.top, 2, v79.bottom - v79.top, 15728673);
            v79.right -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v42) + 4);
            BitBltSysBmp((HDC)a2, 1);
            ++v44;
          }
          v45 = v79.top - 2;
          v46 = v79.bottom + 2;
          right = v79.right;
          v74 = v79.right;
          v79.top -= 2;
          if ( (v19 & 0x20) != 0 )
            DpiDependentMetric = v61;
          v79.bottom += 2;
          v70 = v45;
          v72 = 2;
          v73 = 0LL;
          v71 = v44 * DpiDependentMetric;
          v76 = v44 * DpiDependentMetric;
          v75 = v46 - 2;
          v77 = 2;
          v78 = 0LL;
          GrePolyPatBlt((HDC)a2, 0xF00021u, (struct _POLYPATBLT *)&right, 2u);
          if ( v68 )
            GreSelectBrush(a2, v68);
          goto LABEL_50;
        }
        v52 = DpiDependentMetric + 2;
      }
      else
      {
        v52 = 3 * DpiDependentMetric;
      }
      v62 = v52;
      v53 = PrepareHDCBITSBitmap(0LL);
      if ( v53 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v59);
        v79.right -= v62;
        GreBitBltInternal(
          a2,
          v79.right,
          v79.top,
          v62,
          OemBitmapInfoForDpi[3],
          (__int64)v53,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v62 - DpiDependentMetric,
          OemBitmapInfoForDpi[1],
          0xCC0020u,
          0,
          0);
        if ( v19 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v79.right += 2 - DpiDependentMetric;
            GreBitBltInternal(
              a2,
              v79.right,
              v79.top,
              DpiDependentMetric,
              OemBitmapInfoForDpi[3],
              (__int64)v53,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - DpiDependentMetric,
              OemBitmapInfoForDpi[1],
              0xCC0020u,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID()
               || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v56, v55) + 19904) + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              GreBitBltInternal(
                a2,
                v79.right - 2,
                v79.top + 2,
                DpiDependentMetric - 4,
                OemBitmapInfoForDpi[3] - 4,
                (__int64)v53,
                OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - DpiDependentMetric + 2,
                OemBitmapInfoForDpi[1] + 2,
                0x80CC0020,
                0,
                0);
            }
          }
        }
      }
      goto LABEL_50;
    }
    if ( !v19 || (v19 & 0xC) != 12 && (v19 & 0x20) == 0 )
    {
      v32 = v79.right;
      v27 = 3;
    }
    else
    {
      v32 = v79.right - 2;
      v79.right -= 2;
      if ( v19 == 12 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v27 = 2;
        goto LABEL_48;
      }
    }
    if ( (v19 & 0x20) != 0 )
    {
LABEL_49:
      v79.right = v32 - v27 * v31;
LABEL_50:
      LOBYTE(v6) = a3;
      if ( (a3 & 0xC) != 0 )
      {
        v34 = xxxDrawCaptionTemp(a1, (HDC)a2, &v79, 0LL, 0LL, a3 | (32 * v65) | (v19 >> 4) & 2) == 0;
        LOBYTE(v6) = SetOrClrWF(v34, a1, 0x708u, 1);
      }
      return v6;
    }
LABEL_48:
    v31 = DpiDependentMetric;
    goto LABEL_49;
  }
  if ( (*(_BYTE *)(v16 + 25) & 3) == 0 || (*(_BYTE *)(v16 + 20) & 8) != 0 )
  {
    v60 = 48;
    v67 = 4744LL;
  }
  else
  {
    v60 = 120;
    v67 = 4816LL;
  }
  if ( (a3 & 0x8000) != 0 )
  {
    v35 = GetDpiForSystem();
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v36, v35);
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 25) & 1) != 0 || (*(_BYTE *)(v6 + 26) & 2) != 0 )
      LOBYTE(v6) = DrawEdge((HDC)a2);
    v38 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v38 + 30) & 4) != 0
      || WindowFrameMetricForDpi > 0
      && (v47 = *(_DWORD *)(v38 + 28),
          LOBYTE(v6) = (v47 & 0x40000) == 0,
          (((v47 & 0xC00000) != 12582912) & (unsigned __int8)v6) == 0)
      && (LODWORD(v6) = GetAppCompatFlags2(39168LL), (v6 & 0x30000000) == 0) )
    {
      v48 = GetDpiForSystem();
      v49 = GetResizeBorderWidthForDpi(v48) + WindowFrameMetricForDpi;
      LOBYTE(v6) = DrawFrame(a2, &v79, v49, 8 * (v11 ^ 1u) + 80);
      v50 = -v49;
      v79.left -= v50;
      v79.right += v50;
      v79.top -= v50;
      v79.bottom += v50;
    }
    v39 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v39 + 30) & 0xC0) != 0 || (*(_BYTE *)(v39 + 24) & 1) != 0 )
    {
      LOBYTE(v6) = DrawFrame(a2, &v79, 1LL, v60);
      ++v79.left;
      --v79.right;
      ++v79.top;
      --v79.bottom;
    }
  }
  else
  {
    LODWORD(v6) = -(int)GetWindowBorders(*(unsigned int *)(v16 + 28), *(unsigned int *)(v16 + 24));
    v79.left -= v6;
    v79.right += v6;
    v79.top -= v6;
    v79.bottom += v6;
  }
  v22 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v22 + 16) & 8) != 0 )
  {
    if ( *(char *)(v22 + 24) < 0 )
    {
      v19 |= 0x20u;
      v40 = GetDpiForSystem();
      v25 = GetDpiDependentMetric(24, v40);
      v63 = 41;
    }
    else
    {
      v24 = GetDpiForSystem();
      v25 = GetDpiDependentMetric(13, v24);
    }
    v79.bottom = v79.top + v25;
    v70 = v79.top + v25;
    right = v79.left;
    v71 = v79.right - v79.left;
    v72 = 1;
    v73 = *(_QWORD *)(v67 + *(_QWORD *)(W32GetUserSessionState((unsigned int)v79.left, v26) + 19904));
    GrePolyPatBlt((HDC)a2, 0xF00021u, (struct _POLYPATBLT *)&right, 1u);
    GreSelectBrush(a2, v66);
    goto LABEL_36;
  }
  return v6;
}
