/*
 * XREFs of xxxDrawState @ 0x1C0235770
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C005F858 (GreSetBkMode.c)
 *     MNIspItemValid @ 0x1C006B8A0 (MNIspItemValid.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     GreSetTextAlign @ 0x1C00B9838 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00B98B0 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00B99DC (GreSetViewportOrg.c)
 *     GreGetTextColor @ 0x1C014F0D0 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 *     GreGetTextCharacterExtra @ 0x1C029121C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0291258 (GreSetTextCharacterExtra.c)
 *     GreGetHFONT @ 0x1C0291350 (GreGetHFONT.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        LONG a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  _DWORD *v36; // rcx
  int v37; // esi
  int v38; // r14d
  int v39; // ebx
  HDC v40; // r15
  unsigned int Layout; // eax
  __int64 v42; // r8
  signed int v43; // ebx
  signed int v44; // r9d
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // ecx
  unsigned __int16 v50; // ax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *DPIMetrics; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // ebx
  BOOL v57; // ebx
  __int64 v58; // r9
  struct HLFONT__ *v59; // rcx
  HDC v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  int v63; // ebx
  unsigned int v64; // ebx
  int v67; // [rsp+54h] [rbp-ACh]
  BOOL v68; // [rsp+54h] [rbp-ACh]
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v70; // [rsp+60h] [rbp-A0h]
  int v71; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  __int64 Bitmap; // [rsp+70h] [rbp-90h]
  __int64 *v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  int v78; // [rsp+98h] [rbp-68h]
  int v79; // [rsp+9Ch] [rbp-64h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  _QWORD v81[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v82[5]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v83[24]; // [rsp+E0h] [rbp-20h] BYREF
  int v84; // [rsp+110h] [rbp+10h]

  v8 = a8;
  v74 = a3;
  v76 = a2;
  v75 = 0LL;
  v69 = 0LL;
  memset(v82, 0, 32);
  v70 = 0;
  v67 = 0;
  TextAlign = 0;
  if ( (a8 & 0x20) != 0 )
  {
    if ( *(_WORD *)(gpsi + 8676LL) == 1 )
    {
LABEL_21:
      v8 = a8 & 0xFFFFFFCF | 0x10;
      goto LABEL_22;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x49uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) != 0 )
        goto LABEL_5;
    }
    else if ( !IsDPIDWMSysMet(v11)
           || (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 408)
             ? (v35 = 0)
             : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v32,
                                                            v33,
                                                            v34)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v35) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(0x49uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
          ? (v24 = 0)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v21,
                                                         v22,
                                                         v23)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v24) )
      {
        v36 = (_DWORD *)(gpsi + 2948LL);
      }
      else
      {
        v36 = (_DWORD *)(gpsi + 2172LL);
      }
LABEL_20:
      if ( !*v36 )
        goto LABEL_22;
      goto LABEL_21;
    }
    v36 = (_DWORD *)(gpsi + 2560LL);
    goto LABEL_20;
  }
LABEL_22:
  if ( (v8 & 0x170) != 0 )
    v8 |= 0x80u;
  v37 = a6;
  if ( !a6 )
    return 1LL;
  v38 = a7;
  if ( !a7 )
    return 1LL;
  v39 = v8 & 0x80;
  v71 = v39;
  if ( (v8 & 0x80) != 0 )
  {
    v40 = *(HDC *)(gpDispInfo + 40LL);
    GreSetLayout(v40, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v40, a6, Layout);
    v42 = gpDispInfo;
    v43 = a6 + 1;
    v44 = *(_DWORD *)(gpDispInfo + 56LL);
    if ( v44 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 60LL) < a7 )
    {
      v45 = *(_DWORD *)(gpDispInfo + 60LL);
      v46 = (unsigned int)a7;
      v47 = (unsigned int)v43;
      if ( v45 > a7 )
        v46 = (unsigned int)v45;
      if ( v44 > v43 )
        v47 = (unsigned int)v44;
      Bitmap = GreCreateBitmap(v47, v46, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        v48 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 40LL), Bitmap);
        GreDeleteObject(v48);
        GreSetBitmapOwner(Bitmap, 0LL);
        v42 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 56LL) > v43 )
          v43 = *(_DWORD *)(gpDispInfo + 56LL);
        *(_DWORD *)(gpDispInfo + 56LL) = v43;
        v49 = a7;
        if ( *(_DWORD *)(gpDispInfo + 60LL) > a7 )
          v49 = *(_DWORD *)(gpDispInfo + 60LL);
        *(_DWORD *)(gpDispInfo + 60LL) = v49;
      }
      else
      {
        v42 = gpDispInfo;
        v38 = *(_DWORD *)(gpDispInfo + 60LL);
        v37 = *(_DWORD *)(gpDispInfo + 56LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v42 + 40LL),
      0,
      0,
      *(_DWORD *)(*(_QWORD *)v42 + 56LL),
      *(_DWORD *)(*(_QWORD *)v42 + 60LL),
      16711778);
    GreGetTextCharacterExtra(a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 40LL));
    TextAlign = GreGetTextAlign(v40);
    v50 = GreGetTextAlign(a1);
    GreSetTextAlign(v40, TextAlign ^ ((unsigned __int16)TextAlign ^ v50) & 0x106);
    DPIMetrics = (_QWORD *)GetDPIMetrics(v52, v51);
    if ( GreGetHFONT(a1) != *DPIMetrics )
    {
      GetDPIMetrics(v55, v54);
      GreSelectFontInternal(a1);
      GreSelectFontInternal(a1);
      v75 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 40LL));
      v81[0] = *(_QWORD *)(gpDispInfo + 40LL);
      v81[1] = v75;
      v67 = GrePushThreadGuardedObject(v82, v81, SelectFont);
    }
    v39 = v71;
  }
  else
  {
    v40 = a1;
    GreGetDCPoint(a1, 4LL, &v69);
    GreSetViewportOrg(a1, v69 + a4, a5 + HIDWORD(v69));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem((_DWORD)v40, (_DWORD)v74, v37, v38, 0, v8);
  if ( v67 )
    GrePopThreadGuardedObject(v82);
  v57 = 1;
  if ( !v39 )
  {
    v56 = *(_DWORD *)(gpsi + 5028LL);
    if ( (unsigned int)GreGetTextColor(v40) != v56 )
      v57 = 0;
  }
  v68 = v57;
  if ( MNIspItemValid(*v74, v74[1]) )
  {
    v59 = *(struct HLFONT__ **)(v58 + 104);
    if ( v59 )
      v70 = (unsigned int)GreExtGetObjectW(v59, 104, v83) == 104 && v83[23] == 32 && !v84;
  }
  v60 = *(HDC *)(gpDispInfo + 40LL);
  if ( v40 == v60 )
  {
    GreSetBkColor(v60, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 40LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 40LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 40LL), 2);
  }
  if ( v71 )
  {
    if ( v75 )
      GreSelectFontInternal(v40);
    GreSetTextAlign(v40, TextAlign);
    if ( (v8 & 0x10) != 0 )
    {
      v77 = 0LL;
      v78 = v37;
      v79 = v38;
      v80 = *(_QWORD *)(gpsi + 5336LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 40LL), 16384137, (struct _POLYPATBLT *)&v77, 1);
    }
    v61 = gpDispInfo;
    if ( (v8 & 0x100) != 0 )
    {
      v62 = *(_QWORD *)(gpsi + 5216LL);
    }
    else
    {
      if ( (v8 & 0x20) != 0 )
      {
        v63 = a4;
        BltColor(a1, *(_QWORD *)(gpsi + 5248LL), *(HDC *)(gpDispInfo + 40LL), a4 + 1, a5 + 1, v37, v38, 0, 0, 1);
        v61 = gpDispInfo;
        v62 = *(_QWORD *)(gpsi + 5216LL);
        goto LABEL_69;
      }
      v62 = v76;
      if ( (v8 & 0x40) != 0 )
      {
        v63 = a4;
        BltColor(a1, v76, *(HDC *)(gpDispInfo + 40LL), a4, a5, v37, v38, 0, 0, 1);
        BltColor(a1, v76, *(HDC *)(gpDispInfo + 40LL), a4 + 1, a5, v37, v38, 0, 0, 1);
        goto LABEL_70;
      }
    }
    v63 = a4;
LABEL_69:
    BltColor(a1, v62, *(HDC *)(v61 + 40), v63, a5, v37, v38, 0, 0, 1);
LABEL_70:
    GreSetLayout(v40, 0xFFFFFFFFLL, 0LL);
    if ( v70 )
    {
      GreGetDCPoint(a1, 4LL, &v69);
      GreSetViewportOrg(a1, v63 + v69, a5 + HIDWORD(v69));
      v64 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v74, v37, v38, 1, v68) & Bitmap;
      GreSetViewportOrg(a1, v69, SHIDWORD(v69));
    }
    else
    {
      return (unsigned int)Bitmap;
    }
    return v64;
  }
  if ( v70 )
    xxxRealDrawMenuItem((_DWORD)v40, (_DWORD)v74, v37, v38, 1, v57);
  GreSetViewportOrg(v40, v69, SHIDWORD(v69));
  return 1LL;
}
