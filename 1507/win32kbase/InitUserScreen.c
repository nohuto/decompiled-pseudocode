/*
 * XREFs of InitUserScreen @ 0x1C007D934
 * Callers:
 *     InitVideo @ 0x1C007D7D8 (InitVideo.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     IsPaintScreenBackgroundSupported_0 @ 0x1C00022B0 (IsPaintScreenBackgroundSupported_0.c)
 *     PaintScreenBackground_0 @ 0x1C00022B8 (PaintScreenBackground_0.c)
 *     GetCharDimensions @ 0x1C0015D70 (GetCharDimensions.c)
 *     GreCreateCompatibleDC @ 0x1C00165F0 (GreCreateCompatibleDC.c)
 *     FreeProfileUserName @ 0x1C0017880 (FreeProfileUserName.c)
 *     CreateProfileUserName @ 0x1C00178A0 (CreateProfileUserName.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AB44 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreGetStockObject @ 0x1C00332C0 (GreGetStockObject.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     CreateEmptyRgnPublic @ 0x1C0045250 (CreateEmptyRgnPublic.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     xxxODI_ColorInit @ 0x1C007DE20 (xxxODI_ColorInit.c)
 *     GreGetDpiStockObject @ 0x1C007E1B0 (GreGetDpiStockObject.c)
 *     GreMarkDCUnreadable @ 0x1C007E1F0 (GreMarkDCUnreadable.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rsi
  bool v1; // di
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  char v10; // di
  char v11; // di
  char v12; // di
  char v13; // di
  char v14; // di
  char v15; // di
  char v16; // di
  char v17; // di
  char v18; // di
  char v19; // di
  char v20; // di
  char v21; // di
  char v22; // di
  char v23; // di
  char v24; // di
  char v25; // di
  char v26; // di
  char v27; // di
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  int CharDimensions; // eax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  char *v36; // rcx
  int v37; // eax
  __int128 v38; // xmm0
  _OWORD v40[3]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+68h] [rbp-18h]
  int v42; // [rsp+70h] [rbp-10h]
  char v43; // [rsp+A0h] [rbp+20h] BYREF

  ProfileUserName = CreateProfileUserName();
  *(_QWORD *)(gpDispInfo + 24) = GreCreateDisplayDC(*(_QWORD *)gpDispInfo, 0, 0LL);
  if ( !*(_QWORD *)(gpDispInfo + 24) )
    goto LABEL_12;
  GreGetStockObject(13LL);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 24), 0, 0, 1);
  *(_QWORD *)(gpDispInfo + 32) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  if ( !*(_QWORD *)(gpDispInfo + 32) )
    goto LABEL_12;
  GreGetStockObject(13LL);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 32), 0, 0, 1);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v1 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v2 = ghdcMem2 != 0LL && v1;
  if ( !v2 )
    goto LABEL_11;
  GreSetDCOwnerEx((int)ghdcMem, 0, 0, 1);
  GreSetDCOwnerEx((int)ghdcMem2, 0, 0, 1);
  if ( !CreateCachedMonitor(v4, v3, v5) )
  {
LABEL_12:
    v2 = 0;
    goto LABEL_11;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v43);
  if ( (unsigned int)UpdateUserScreen(1LL, v6, v7, v8) )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v43);
    *((_DWORD *)gpsi + 1006) = 1;
    *((_DWORD *)gpsi + 1032) = 1;
    ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
    v9 = (ghrgnInv0 != 0LL) & v2;
    ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
    v10 = (ghrgnInv1 != 0LL) & v9;
    ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
    v11 = (ghrgnInv2 != 0LL) & v10;
    ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
    v12 = (ghrgnSPB1 != 0LL) & v11;
    ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
    v13 = (ghrgnSPB2 != 0LL) & v12;
    ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
    v14 = (ghrgnSCR != 0LL) & v13;
    ghrgnSW = (HRGN)CreateEmptyRgnPublic();
    v15 = (ghrgnSW != 0LL) & v14;
    ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
    v16 = (ghrgnScrl1 != 0LL) & v15;
    ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
    v17 = (ghrgnScrl2 != 0LL) & v16;
    ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
    v18 = (ghrgnScrlVis != 0LL) & v17;
    ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
    v19 = (ghrgnScrlSrc != 0LL) & v18;
    ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
    v20 = (ghrgnScrlDst != 0LL) & v19;
    ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
    v21 = (ghrgnScrlValid != 0LL) & v20;
    ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
    v22 = (ghrgnInvalidSum != 0LL) & v21;
    ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
    v23 = (ghrgnVisNew != 0LL) & v22;
    ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
    v24 = (ghrgnSWP1 != 0LL) & v23;
    ghrgnValid = (HRGN)CreateEmptyRgnPublic();
    v25 = (ghrgnValid != 0LL) & v24;
    ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
    v26 = (ghrgnValidSum != 0LL) & v25;
    ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
    v27 = (ghrgnInvalid != 0LL) & v26;
    ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
    LOBYTE(v2) = (ghrgnGDC != 0LL) & v27;
    GreLockVisRgn(*(_QWORD *)gpDispInfo, v28, v29);
    v30 = 5LL;
    do
    {
      v2 = (CreateCacheDC(0LL, 2050, 0LL) != 0) & (unsigned __int8)v2;
      --v30;
    }
    while ( v30 );
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v31, v32);
    if ( v2 )
    {
      GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 24));
      gdpiSystem = (HFONT)GreGetStockObject(13LL);
      gdpi96 = (HFONT)GreGetDpiStockObject(13LL, 0LL);
      GreSelectFont_0();
      CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 32), (__int64)v40, (LONG *)gpsi + 1042);
      v34 = v40[0];
      v35 = v40[1];
      *((_DWORD *)gpsi + 1041) = CharDimensions;
      v36 = (char *)gpsi;
      v37 = v42;
      *(_OWORD *)((char *)gpsi + 4172) = v34;
      v38 = v40[2];
      *(_OWORD *)(v36 + 4188) = v35;
      *(_QWORD *)&v35 = v41;
      *(_OWORD *)(v36 + 4204) = v38;
      *(_QWORD *)(v36 + 4220) = v35;
      *((_DWORD *)v36 + 1057) = v37;
      GreSelectFont_0();
      *((_DWORD *)gpsi + 492) = 0;
      *((_DWORD *)gpsi + 537) = InitSafeBootMode;
      *((_DWORD *)gpsi + 543) = 0;
      xxxODI_ColorInit(ProfileUserName);
      if ( (int)IsPaintScreenBackgroundSupported_0() >= 0 )
        PaintScreenBackground_0();
    }
  }
  else
  {
    v2 = 0;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v43);
  }
LABEL_11:
  FreeProfileUserName(ProfileUserName);
  return v2;
}
