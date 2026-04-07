/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180048C38
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800488C4 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180042BB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180049420 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x18004948C (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800494DC (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800497F0 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  void *v8; // rdi
  int ThemeMargins; // eax
  unsigned int v10; // ebx
  unsigned int cxLeftWidth; // r13d
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // edx
  struct CBitmapSource *v24; // rax
  __int64 v25; // r13
  CBaseObject **v26; // r12
  int *v27; // rdx
  _QWORD *v28; // rcx
  int v29; // r8d
  int v30; // edx
  __int64 v32; // rdi
  CBaseObject *v33; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  struct CBitmapSource *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h]
  struct _MARGINS v37; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v38; // [rsp+60h] [rbp-A0h]
  struct _MARGINS v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+80h] [rbp-80h]
  struct _MARGINS v41; // [rsp+90h] [rbp-70h]
  void *v42; // [rsp+A0h] [rbp-60h]
  struct _MARGINS v43; // [rsp+B0h] [rbp-50h] BYREF
  struct _MARGINS v44; // [rsp+C0h] [rbp-40h] BYREF
  struct _MARGINS v45; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v46; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v47; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v48; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v49; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v50; // [rsp+120h] [rbp+20h] BYREF
  struct _MARGINS v51; // [rsp+130h] [rbp+30h] BYREF
  struct _MARGINS v52; // [rsp+140h] [rbp+40h] BYREF
  struct _MARGINS v53; // [rsp+150h] [rbp+50h] BYREF
  struct _MARGINS v54; // [rsp+160h] [rbp+60h] BYREF
  struct _MARGINS v55; // [rsp+170h] [rbp+70h] BYREF
  MARGINS pMargins; // [rsp+180h] [rbp+80h] BYREF
  struct _MARGINS v57; // [rsp+190h] [rbp+90h] BYREF

  v42 = a1;
  v8 = a1;
  if ( (dword_1800B7F54 & 1) == 0 )
  {
    dword_1800B7F0C = -2147023728;
    dword_1800B7F54 |= 1u;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[1], 0, 3602, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 802;
LABEL_61:
    MilInstrumentationCheckHR(0x14u, &dword_1800B7F0C, 1u, ThemeMargins, iPropId);
    return v10;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, a2[3], 2u, &pMargins, (struct tagRECT **)&v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 814;
    goto LABEL_61;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 193) = v35;
  *((_QWORD *)a5 + 193) = v36;
  v13 = a2[4];
  *(_QWORD *)&v39.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v37.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, v13, 2u, &pMargins, (struct tagRECT **)&v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 823;
    goto LABEL_61;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 195) = v35;
  *((_QWORD *)a5 + 195) = v36;
  v15 = *((unsigned int *)a2 + 1);
  *(_QWORD *)&v38.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v15, cxLeftWidth, 0LL, 1, 2, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 841;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], *a3, 2430, (float *)a4 + 466);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 844;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], a3[1], 2430, (float *)a5 + 466);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 845;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], *a3, 2432, (float *)a4 + 470);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 848;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], a3[1], 2432, (float *)a5 + 470);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 849;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 851;
    goto LABEL_61;
  }
  v43 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v43);
  v16 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v39.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v38.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v16, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 868;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 870;
    goto LABEL_61;
  }
  v44 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v44);
  *(_QWORD *)&v37.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v45 = v39;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v45);
  v46 = v38;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v46);
  v47 = v37;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v47);
  v48 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v48);
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 884;
    goto LABEL_61;
  }
  v17 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, a2[12], 2u, &pMargins, (struct tagRECT **)&v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 890;
    goto LABEL_61;
  }
  v18 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 211) = v35;
  *((_QWORD *)a5 + 211) = v36;
  v19 = a2[13];
  *(_QWORD *)&v39.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  *(_QWORD *)&v37.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, v19, 2u, &pMargins, (struct tagRECT **)&v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 899;
    goto LABEL_61;
  }
  v20 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 213) = v35;
  *((_QWORD *)a5 + 213) = v36;
  v21 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v38.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v21, v17, 9LL, 10, 11, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 917;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 919;
    goto LABEL_61;
  }
  v49 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v49);
  v22 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v39.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v38.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v22, v17, 14LL, 15, 16, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 936;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 938;
    goto LABEL_61;
  }
  v50 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v50);
  v23 = a2[17];
  *(_QWORD *)&v37.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v8, v23, &v57, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 946;
    goto LABEL_61;
  }
  v24 = v35;
  *((_QWORD *)a4 + 221) = v35;
  *((_QWORD *)a5 + 221) = v24;
  _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
  v51 = v57;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v51);
  v52 = v39;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v52);
  v53 = v38;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v53);
  v54 = v37;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v54);
  v55 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v55);
  v25 = 18LL;
  v26 = (CBaseObject **)((char *)a5 + 1784);
  v40 = 18;
  v27 = (int *)(a2 + 18);
  v28 = (_QWORD *)((char *)a5 + 1784);
  *(_QWORD *)&v39.cxLeftWidth = a4 - a5;
  v29 = 18;
  *(_QWORD *)&v37.cxLeftWidth = a2 + 18;
  *(_QWORD *)&v38.cxLeftWidth = (char *)a5 + 1784;
  while ( 1 )
  {
    v30 = *v27;
    if ( v30 )
      break;
LABEL_27:
    ++v29;
    v27 = (int *)(*(_QWORD *)&v37.cxLeftWidth + 4LL);
    v40 = v29;
    v28 += 2;
    *(_QWORD *)&v37.cxLeftWidth += 4LL;
    *(_QWORD *)&v38.cxLeftWidth = v28;
    if ( v29 > 21 )
      goto LABEL_28;
  }
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, v30, 2u, &pMargins, (struct tagRECT **)&v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 && (_WORD)ThemeMargins != 1168 )
  {
    iPropId = 965;
    goto LABEL_61;
  }
  if ( (_WORD)ThemeMargins != 1168 )
  {
    v28 = *(_QWORD **)&v38.cxLeftWidth;
    v29 = v40;
    *(_QWORD *)(*(_QWORD *)&v39.cxLeftWidth + *(_QWORD *)&v38.cxLeftWidth) = v35;
    *v28 = v36;
    goto LABEL_27;
  }
LABEL_28:
  if ( (_WORD)v10 == 1168 )
  {
    v32 = *(_QWORD *)&v39.cxLeftWidth;
    do
    {
      if ( a2[v25] )
      {
        v33 = *(CBaseObject **)((char *)v26 + v32);
        if ( v33 )
        {
          CBaseObject::Release(v33);
          *(CBaseObject **)((char *)v26 + v32) = 0LL;
        }
        if ( *v26 )
        {
          CBaseObject::Release(*v26);
          *v26 = 0LL;
        }
      }
      ++v25;
      v26 += 2;
    }
    while ( v25 <= 21 );
    v8 = v42;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v8, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 994;
    goto LABEL_61;
  }
  return v10;
}
