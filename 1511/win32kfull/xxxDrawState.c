/*
 * XREFs of xxxDrawState @ 0x1C023DD88
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     MNIspItemValid @ 0x1C006EE3C (MNIspItemValid.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0101830 (GreSetViewportOrg.c)
 *     GreGetTextColor @ 0x1C01450AC (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     BltColor @ 0x1C023DC5C (BltColor.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 *     GreGetTextCharacterExtra @ 0x1C029225C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029229C (GreSetTextCharacterExtra.c)
 *     GreGetHFONT @ 0x1C0292364 (GreGetHFONT.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        LONG a4,
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
  __int64 *v39; // rax
  __int64 v40; // rbx
  int v41; // ebx
  BOOL v42; // ebx
  __int64 v43; // r9
  HBRUSH v44; // rcx
  HDC v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  LONG v48; // edi
  LONG v49; // r9d
  unsigned int v50; // ebx
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  LONG v53; // [rsp+58h] [rbp-A8h]
  BOOL v54; // [rsp+5Ch] [rbp-A4h]
  int v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  __int64 *v58; // [rsp+70h] [rbp-90h]
  __int64 Bitmap; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  _DWORD v62[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h]
  _QWORD v64[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v65[5]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v66[24]; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+110h] [rbp+10h]

  v8 = a8;
  v53 = a4;
  v58 = a3;
  v60 = a2;
  v61 = 0LL;
  v52 = 0LL;
  memset(v65, 0, 32);
  v54 = 0;
  v56 = 0;
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
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v16 = 0)
             : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v16) )
    {
LABEL_6:
      if ( IsDPIDWMSysMet(0x49uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v13 = 0)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
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
  v55 = v20;
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
      v39 = (__int64 *)GetDPIMetrics(v37, v36, v38);
      v40 = GreSelectFont((__int64)a1, *v39);
      GreSelectFont((__int64)a1, v40);
      v61 = GreSelectFont(*(_QWORD *)(gpDispInfo + 40LL), v40);
      v64[0] = *(_QWORD *)(gpDispInfo + 40LL);
      v64[1] = v61;
      v56 = GrePushThreadGuardedObject(v65, v64, SelectFont);
    }
    v20 = v55;
  }
  else
  {
    v21 = a1;
    GreGetDCPoint(a1, 4LL, &v52);
    GreSetViewportOrg(a1, v52 + v53, a5 + HIDWORD(v52));
  }
  LODWORD(Bitmap) = xxxRealDrawMenuItem((_DWORD)v21, (_DWORD)v58, v18, v19, 0, v8);
  if ( v56 )
    GrePopThreadGuardedObject(v65);
  v42 = 1;
  if ( !v20 )
  {
    v41 = *(_DWORD *)(gpsi + 3636LL);
    if ( (unsigned int)GreGetTextColor(v21) != v41 )
      v42 = 0;
  }
  if ( MNIspItemValid(*v58, v58[1]) )
  {
    v44 = *(HBRUSH *)(v43 + 104);
    if ( v44 )
      v54 = (unsigned int)GreExtGetObjectW(v44, 104LL, v66) == 104 && v66[23] == 32 && !v67;
  }
  v45 = *(HDC *)(gpDispInfo + 40LL);
  if ( v21 == v45 )
  {
    GreSetBkColor(v45, 0xFFFFFF);
    GreSetTextColor(*(HDC *)(gpDispInfo + 40LL), 0);
    GreSelectBrush(*(_QWORD *)(gpDispInfo + 40LL), ghbrBlack);
    GreSetBkMode(*(HDC *)(gpDispInfo + 40LL), 2);
  }
  if ( v55 )
  {
    if ( v61 )
      GreSelectFont((__int64)v21, v61);
    GreSetTextAlign(v21, TextAlign);
    if ( (v8 & 0x10) != 0 )
    {
      v62[0] = 0;
      v62[1] = 0;
      v62[2] = v18;
      v62[3] = v19;
      v63 = *(_QWORD *)(gpsi + 3944LL);
      GrePolyPatBlt(*(HDC *)(gpDispInfo + 40LL), 0xFA0089u, (struct _POLYPATBLT *)v62, 1u);
    }
    v46 = gpDispInfo;
    if ( (v8 & 0x100) != 0 )
    {
      v47 = *(_QWORD *)(gpsi + 3824LL);
    }
    else
    {
      if ( (v8 & 0x20) != 0 )
      {
        v48 = v53;
        BltColor(a1, *(_QWORD *)(gpsi + 3856LL), *(HDC *)(gpDispInfo + 40LL), v53 + 1, a5 + 1, v18, v19, 0, 0, 1);
        v46 = gpDispInfo;
        v47 = *(_QWORD *)(gpsi + 3824LL);
        goto LABEL_71;
      }
      v47 = v60;
      if ( (v8 & 0x40) != 0 )
      {
        v48 = v53;
        BltColor(a1, v60, *(HDC *)(gpDispInfo + 40LL), v53, a5, v18, v19, 0, 0, 1);
        v49 = v48 + 1;
        v47 = v60;
        v46 = gpDispInfo;
        goto LABEL_72;
      }
    }
    v48 = v53;
LABEL_71:
    v49 = v48;
LABEL_72:
    BltColor(a1, v47, *(HDC *)(v46 + 40), v49, a5, v18, v19, 0, 0, 1);
    GreSetLayout(v21, 0xFFFFFFFFLL, 0LL);
    if ( v54 )
    {
      GreGetDCPoint(a1, 4LL, &v52);
      GreSetViewportOrg(a1, v48 + v52, a5 + HIDWORD(v52));
      v50 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v58, v18, v19, 1, v42) & Bitmap;
      GreSetViewportOrg(a1, v52, SHIDWORD(v52));
    }
    else
    {
      return (unsigned int)Bitmap;
    }
    return v50;
  }
  if ( v54 )
    xxxRealDrawMenuItem((_DWORD)v21, (_DWORD)v58, v18, v19, 1, v42);
  GreSetViewportOrg(v21, v52, SHIDWORD(v52));
  return 1LL;
}
