/*
 * XREFs of InitUserScreen @ 0x1C0057224
 * Callers:
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     IsPaintScreenBackgroundSupported_0 @ 0x1C0001E50 (IsPaintScreenBackgroundSupported_0.c)
 *     PaintScreenBackground_0 @ 0x1C0001E58 (PaintScreenBackground_0.c)
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     GreGetStockObject @ 0x1C0035660 (GreGetStockObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     CreateProfileUserName @ 0x1C0054DA0 (CreateProfileUserName.c)
 *     xxxODI_ColorInit @ 0x1C0055430 (xxxODI_ColorInit.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     CreateEmptyRgnPublic @ 0x1C0057880 (CreateEmptyRgnPublic.c)
 *     GetCharDimensions @ 0x1C0057B00 (GetCharDimensions.c)
 *     FreeProfileUserName @ 0x1C005CEF0 (FreeProfileUserName.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005FCEC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreMarkDCUnreadable @ 0x1C0082754 (GreMarkDCUnreadable.c)
 *     GreGetDpiStockObject @ 0x1C00827B0 (GreGetDpiStockObject.c)
 */

__int64 InitUserScreen()
{
  const UNICODE_STRING *ProfileUserName; // rsi
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
  int v23; // r8d
  __int64 v24; // rbx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  char *v27; // rcx
  int v28; // eax
  __int128 v29; // xmm0
  _BYTE v31[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  int v36; // [rsp+70h] [rbp-10h]
  char v37; // [rsp+A0h] [rbp+20h] BYREF

  ProfileUserName = (const UNICODE_STRING *)CreateProfileUserName();
  *(_QWORD *)(gpDispInfo + 24) = GreCreateDisplayDC(*(_QWORD *)gpDispInfo, 0, 0);
  if ( !*(_QWORD *)(gpDispInfo + 24) )
    goto LABEL_12;
  GreGetStockObject(13);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 24), 0, 0, 1);
  *(_QWORD *)(gpDispInfo + 32) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  if ( !*(_QWORD *)(gpDispInfo + 32) )
    goto LABEL_12;
  GreGetStockObject(13);
  GreSelectFont_0();
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 32), 0, 0, 1);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v1 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 24));
  v2 = ghdcMem2 != 0LL && v1;
  if ( !v2 )
    goto LABEL_11;
  GreSetDCOwnerEx((unsigned int)ghdcMem, 0, 0, 1);
  GreSetDCOwnerEx((unsigned int)ghdcMem2, 0, 0, 1);
  if ( !CreateCachedMonitor() )
  {
LABEL_12:
    v2 = 0;
    goto LABEL_11;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v37);
  if ( (unsigned int)UpdateUserScreen(1LL) )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
    *((_DWORD *)gpsi + 1354) = 1;
    *((_DWORD *)gpsi + 1380) = 1;
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
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    if ( v2 )
    {
      GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 24));
      gdpiSystem = (HFONT)GreGetStockObject(13);
      gdpi96 = (HFONT)GreGetDpiStockObject(13LL, 0LL);
      GreSelectFont_0();
      v25 = v32;
      v26 = v33;
      *((_DWORD *)gpsi + 1389) = GetCharDimensions(*(HDC *)(gpDispInfo + 32));
      v27 = (char *)gpsi;
      v28 = v36;
      *(_OWORD *)((char *)gpsi + 5564) = v25;
      v29 = v34;
      *(_OWORD *)(v27 + 5580) = v26;
      *(_QWORD *)&v26 = v35;
      *(_OWORD *)(v27 + 5596) = v29;
      *(_QWORD *)(v27 + 5612) = v26;
      *((_DWORD *)v27 + 1405) = v28;
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
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v37);
  }
LABEL_11:
  FreeProfileUserName(ProfileUserName, v31);
  return v2;
}
