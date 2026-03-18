/*
 * XREFs of InitUserScreen @ 0x1C006A65C
 * Callers:
 *     InitVideo @ 0x1C0061E88 (InitVideo.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     IsPaintScreenBackgroundSupported_0 @ 0x1C00022F0 (IsPaintScreenBackgroundSupported_0.c)
 *     PaintScreenBackground_0 @ 0x1C00022F8 (PaintScreenBackground_0.c)
 *     CreateEmptyRgnPublic @ 0x1C0022340 (CreateEmptyRgnPublic.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 *     GetCharDimensions @ 0x1C006B970 (GetCharDimensions.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 *     GreGetStockObject @ 0x1C006C0A0 (GreGetStockObject.c)
 *     xxxODI_ColorInit @ 0x1C006C4E0 (xxxODI_ColorInit.c)
 *     GreGetDpiStockObject @ 0x1C006D660 (GreGetDpiStockObject.c)
 *     GreMarkDCUnreadable @ 0x1C006D6A0 (GreMarkDCUnreadable.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D6FC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     FreeProfileUserName @ 0x1C007A8C0 (FreeProfileUserName.c)
 *     CreateProfileUserName @ 0x1C007A8E0 (CreateProfileUserName.c)
 */

__int64 InitUserScreen()
{
  __int64 ProfileUserName; // rsi
  bool v1; // di
  unsigned int v2; // edi
  char v3; // di
  char v4; // di
  char v5; // di
  char v6; // di
  char v7; // di
  char v8; // di
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
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  int CharDimensions; // eax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  char *v30; // rcx
  int v31; // eax
  __int128 v32; // xmm0
  _BYTE v34[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v35; // [rsp+38h] [rbp-48h]
  __int128 v36; // [rsp+48h] [rbp-38h]
  __int128 v37; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  int v39; // [rsp+70h] [rbp-10h]
  char v40; // [rsp+A0h] [rbp+20h] BYREF

  ProfileUserName = CreateProfileUserName(v34);
  *(_QWORD *)(gpDispInfo + 24) = GreCreateDisplayDC(*(_QWORD *)gpDispInfo, 0, 0LL);
  if ( !*(_QWORD *)(gpDispInfo + 24) )
    goto LABEL_12;
  GreGetStockObject(13LL);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 24), 0LL, 0LL, 1);
  *(_QWORD *)(gpDispInfo + 32) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  if ( !*(_QWORD *)(gpDispInfo + 32) )
    goto LABEL_12;
  GreGetStockObject(13LL);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 32), 0LL, 0LL, 1);
  ghdcMem = (HDC)GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v1 = ghdcMem != 0LL;
  ghdcMem2 = (HDC)GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v2 = ghdcMem2 != 0LL && v1;
  if ( !v2 )
    goto LABEL_11;
  GreSetDCOwnerEx((int)ghdcMem, 0LL, 0LL, 1);
  GreSetDCOwnerEx((int)ghdcMem2, 0LL, 0LL, 1);
  if ( !CreateCachedMonitor() )
  {
LABEL_12:
    v2 = 0;
    goto LABEL_11;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v40);
  if ( (unsigned int)UpdateUserScreen(1) )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v40);
    *((_DWORD *)gpsi + 1006) = 1;
    *((_DWORD *)gpsi + 1032) = 1;
    ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
    v3 = (ghrgnInv0 != 0LL) & v2;
    ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
    v4 = (ghrgnInv1 != 0LL) & v3;
    ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
    v5 = (ghrgnInv2 != 0LL) & v4;
    ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
    v6 = (ghrgnSPB1 != 0LL) & v5;
    ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
    v7 = (ghrgnSPB2 != 0LL) & v6;
    ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
    v8 = (ghrgnSCR != 0LL) & v7;
    ghrgnSW = (HRGN)CreateEmptyRgnPublic();
    v9 = (ghrgnSW != 0LL) & v8;
    ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
    v10 = (ghrgnScrl1 != 0LL) & v9;
    ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
    v11 = (ghrgnScrl2 != 0LL) & v10;
    ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
    v12 = (ghrgnScrlVis != 0LL) & v11;
    ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
    v13 = (ghrgnScrlSrc != 0LL) & v12;
    ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
    v14 = (ghrgnScrlDst != 0LL) & v13;
    ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
    v15 = (ghrgnScrlValid != 0LL) & v14;
    ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
    v16 = (ghrgnInvalidSum != 0LL) & v15;
    ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
    v17 = (ghrgnVisNew != 0LL) & v16;
    ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
    v18 = (ghrgnSWP1 != 0LL) & v17;
    ghrgnValid = (HRGN)CreateEmptyRgnPublic();
    v19 = (ghrgnValid != 0LL) & v18;
    ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
    v20 = (ghrgnValidSum != 0LL) & v19;
    ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
    v21 = (ghrgnInvalid != 0LL) & v20;
    ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
    LOBYTE(v2) = (ghrgnGDC != 0LL) & v21;
    GreLockVisRgn(*(_QWORD *)gpDispInfo, v22, v23);
    v24 = 5LL;
    do
    {
      v2 = (CreateCacheDC(0LL, 2050, 0LL) != 0) & (unsigned __int8)v2;
      --v24;
    }
    while ( v24 );
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v25, v26);
    if ( v2 )
    {
      GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 24));
      gdpiSystem = (HFONT)GreGetStockObject(13LL);
      gdpi96 = (HFONT)GreGetDpiStockObject(13LL, 0LL);
      GreSelectFont_0();
      CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 32));
      v28 = v35;
      v29 = v36;
      *((_DWORD *)gpsi + 1041) = CharDimensions;
      v30 = (char *)gpsi;
      v31 = v39;
      *(_OWORD *)((char *)gpsi + 4172) = v28;
      v32 = v37;
      *(_OWORD *)(v30 + 4188) = v29;
      *(_QWORD *)&v29 = v38;
      *(_OWORD *)(v30 + 4204) = v32;
      *(_QWORD *)(v30 + 4220) = v29;
      *((_DWORD *)v30 + 1057) = v31;
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
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v40);
  }
LABEL_11:
  FreeProfileUserName(ProfileUserName, v34);
  return v2;
}
