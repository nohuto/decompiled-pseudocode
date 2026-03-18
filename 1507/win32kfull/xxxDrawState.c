/*
 * XREFs of xxxDrawState @ 0x1C023DBC0
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     MNIspItemValid @ 0x1C0054FCC (MNIspItemValid.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GreSetViewportOrg @ 0x1C00F8B4C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     GreGetTextColor @ 0x1C011A120 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     BltColor @ 0x1C023DA94 (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 *     GreGetTextCharacterExtra @ 0x1C0292714 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0292750 (GreSetTextCharacterExtra.c)
 *     GreGetHFONT @ 0x1C0292834 (GreGetHFONT.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  _DWORD *v17; // rcx
  int v18; // esi
  int v19; // r14d
  int v20; // ebx
  HDC v21; // r15
  unsigned int Layout; // eax
  __int64 v23; // r8
  signed int v24; // ebx
  signed int v25; // r9d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *DPIMetrics; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // ebx
  BOOL v40; // ebx
  __int64 v41; // r9
  HSURF v42; // rcx
  HDC v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  int v46; // edi
  int v47; // r9d
  unsigned int v48; // ebx
  __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+58h] [rbp-A8h]
  BOOL v52; // [rsp+5Ch] [rbp-A4h]
  int v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  __int64 *v56; // [rsp+70h] [rbp-90h]
  __int64 Bitmap; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  _DWORD v60[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h]
  _QWORD v62[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v63[5]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v64[24]; // [rsp+E0h] [rbp-20h] BYREF
  int v65; // [rsp+110h] [rbp+10h]

  v8 = a8;
  v51 = a4;
  v56 = a3;
  v58 = a2;
  v59 = 0LL;
  v50 = 0LL;
  memset(v63, 0, 32);
  v52 = 0;
  v54 = 0;
  TextAlign = 0;
  if ( (a8 & 0x20) != 0 )
  {
    if ( *(_WORD *)(gpsi + 7284LL) == 1 )
    {
LABEL_23:
      v8 = a8 & 0xFFFFFFCF | 0x10;
      goto LABEL_24;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x49uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
      {
        goto LABEL_6;
      }
    }
    else if ( !IsDPIDWMSysMet(v10)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v16 = 0)
             : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v16) )
    {
LABEL_6:
      if ( IsDPIDWMSysMet(0x49uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v13 = 0)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v13) )
      {
        v17 = (_DWORD *)(gpsi + 2948LL);
      }
      else
      {
        v17 = (_DWORD *)(gpsi + 2172LL);
      }
LABEL_22:
      if ( !*v17 )
        goto LABEL_24;
      goto LABEL_23;
    }
    v17 = (_DWORD *)(gpsi + 2560LL);
    goto LABEL_22;
  }
LABEL_24:
  if ( (v8 & 0x170) != 0 )
    v8 |= 0x80u;
  v18 = a6;
  if ( !a6 )
    return 1LL;
  v19 = a7;
  if ( !a7 )
    return 1LL;
  v20 = v8 & 0x80;
  v53 = v20;
  if ( (v8 & 0x80) != 0 )
  {
    v21 = *(HDC *)(gpDispInfo + 40LL);
    GreSetLayout(v21, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v21, a6, Layout);
    v23 = gpDispInfo;
    v24 = a6 + 1;
    v25 = *(_DWORD *)(gpDispInfo + 56LL);
    if ( v25 < (int)(a6 + 1) || *(_DWORD *)(gpDispInfo + 60LL) < a7 )
    {
      v26 = *(_DWORD *)(gpDispInfo + 60LL);
      v27 = (unsigned int)a7;
      v28 = (unsigned int)v24;
      if ( v26 > a7 )
        v27 = (unsigned int)v26;
      if ( v25 > v24 )
        v28 = (unsigned int)v25;
      Bitmap = GreCreateBitmap(v28, v27, 1LL, 1LL, 0LL);
      if ( Bitmap )
      {
        v29 = GreSelectBitmap(*(_QWORD *)(gpDispInfo + 40LL), Bitmap);
        GreDeleteObject(v29);
        GreSetBitmapOwner(Bitmap, 0LL);
        v23 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 56LL) > v24 )
          v24 = *(_DWORD *)(gpDispInfo + 56LL);
        *(_DWORD *)(gpDispInfo + 56LL) = v24;
        v30 = a7;
        if ( *(_DWORD *)(gpDispInfo + 60LL) > a7 )
          v30 = *(_DWORD *)(gpDispInfo + 60LL);
        *(_DWORD *)(gpDispInfo + 60LL) = v30;
      }
      else
      {
        v23 = gpDispInfo;
        v19 = *(_DWORD *)(gpDispInfo + 60LL);
        v18 = *(_DWORD *)(gpDispInfo + 56LL) - 1;
      }
    }
    NtGdiPatBlt(
      *(HDC *)(*(_QWORD *)v23 + 40LL),
      0,
      0,
      *(_DWORD *)(*(_QWORD *)v23 + 56LL),
      *(_DWORD *)(*(_QWORD *)v23 + 60LL),
      16711778);
    GreGetTextCharacterExtra(a1);
    GreSetTextCharacterExtra(*(HDC *)(gpDispInfo + 40LL));
    TextAlign = GreGetTextAlign(v21);
    v31 = GreGetTextAlign(a1);
    GreSetTextAlign(v21, TextAlign ^ ((unsigned __int16)TextAlign ^ v31) & 0x106);
    DPIMetrics = (_QWORD *)GetDPIMetrics(v33, v32, v34);
    if ( GreGetHFONT(a1) != *DPIMetrics )
    {
      GetDPIMetrics(v37, v36, v38);
      GreSelectFontInternal(a1);
      GreSelectFontInternal(a1);
      v59 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 40LL));
      v62[0] = *(_QWORD *)(gpDispInfo + 40LL);
      v62[1] = v59;
      v54 = GrePushThreadGuardedObject(v63, v62, SelectFont);
    }
    v20 = v53;
  }
  else
  {
    v21 = a1;
    GreGetDCPoint(a1, 4LL, &v50);
    GreSetViewportOrg(a1, v50 + v51, a5 + HIDWORD(v50));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem((_DWORD)v21, (_DWORD)v56, v18, v19, 0, v8);
  if ( v54 )
    GrePopThreadGuardedObject(v63);
  v40 = 1;
  if ( !v20 )
  {
    v39 = *(_DWORD *)(gpsi + 3636LL);
    if ( (unsigned int)GreGetTextColor(v21) != v39 )
      v40 = 0;
  }
  if ( MNIspItemValid(*v56, v56[1]) )
  {
    v42 = *(HSURF *)(v41 + 104);
    if ( v42 )
      v52 = (unsigned int)GreExtGetObjectW(v42, 104, v64) == 104 && v64[23] == 32 && !v65;
  }
  v43 = *(HDC *)(gpDispInfo + 40LL);
  if ( v21 == v43 )
  {
    GreSetBkColor(v43, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 40LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 40LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 40LL), 2);
  }
  if ( v53 )
  {
    if ( v59 )
      GreSelectFontInternal(v21);
    GreSetTextAlign(v21, TextAlign);
    if ( (v8 & 0x10) != 0 )
    {
      v60[0] = 0;
      v60[1] = 0;
      v60[2] = v18;
      v60[3] = v19;
      v61 = *(_QWORD *)(gpsi + 3944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 40LL), 0xFA0089u, (struct _POLYPATBLT *)v60, 1u);
    }
    v44 = gpDispInfo;
    if ( (v8 & 0x100) != 0 )
    {
      v45 = *(_QWORD *)(gpsi + 3824LL);
    }
    else
    {
      if ( (v8 & 0x20) != 0 )
      {
        v46 = v51;
        BltColor(a1, *(_QWORD *)(gpsi + 3856LL), *(HDC *)(gpDispInfo + 40LL), v51 + 1, a5 + 1, v18, v19, 0, 0, 1);
        v44 = gpDispInfo;
        v45 = *(_QWORD *)(gpsi + 3824LL);
        goto LABEL_71;
      }
      v45 = v58;
      if ( (v8 & 0x40) != 0 )
      {
        v46 = v51;
        BltColor(a1, v58, *(HDC *)(gpDispInfo + 40LL), v51, a5, v18, v19, 0, 0, 1);
        v47 = v46 + 1;
        v45 = v58;
        v44 = gpDispInfo;
        goto LABEL_72;
      }
    }
    v46 = v51;
LABEL_71:
    v47 = v46;
LABEL_72:
    BltColor(a1, v45, *(HDC *)(v44 + 40), v47, a5, v18, v19, 0, 0, 1);
    GreSetLayout(v21, 0xFFFFFFFFLL, 0LL);
    if ( v52 )
    {
      GreGetDCPoint(a1, 4LL, &v50);
      GreSetViewportOrg(a1, v46 + v50, a5 + HIDWORD(v50));
      v48 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v56, v18, v19, 1, v40) & Bitmap;
      GreSetViewportOrg(a1, v50, SHIDWORD(v50));
    }
    else
    {
      return (unsigned int)Bitmap;
    }
    return v48;
  }
  if ( v52 )
    xxxRealDrawMenuItem((_DWORD)v21, (_DWORD)v56, v18, v19, 1, v40);
  GreSetViewportOrg(v21, v50, SHIDWORD(v50));
  return 1LL;
}
