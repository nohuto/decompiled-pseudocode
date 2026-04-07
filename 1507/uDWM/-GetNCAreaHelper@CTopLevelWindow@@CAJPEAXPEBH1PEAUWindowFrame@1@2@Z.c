/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180041274
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z @ 0x180040CF4 (-EnsureImages@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040F6C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180041A44 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180041AAC (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x180041AFC (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180041E44 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800421B0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  void *v8; // rdi
  HRESULT ThemeMargins; // eax
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
  int v25; // r8d
  const int *v26; // r13
  const int *v27; // rax
  CBaseObject **v28; // rsi
  _QWORD *v29; // r12
  __int64 v31; // rdi
  __int64 v32; // rbx
  CBaseObject *v33; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  struct CBitmapSource *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h]
  struct _MARGINS v37; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+70h] [rbp-90h]
  struct _MARGINS v40; // [rsp+80h] [rbp-80h]
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
  if ( (dword_1800BC754 & 1) == 0 )
  {
    dword_1800BC70C = -2147023728;
    dword_1800BC754 |= 1u;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[1], 0, 3602, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 869;
LABEL_61:
    MilInstrumentationCheckHR(0x14u, &dword_1800BC70C, 1LL, ThemeMargins, iPropId);
    return v10;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, a2[3], 2u, &pMargins, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 881;
    goto LABEL_61;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 104) = v35;
  *((_QWORD *)a5 + 104) = v36;
  v13 = a2[4];
  *(_QWORD *)&v37.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, v13, 2u, &pMargins, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 890;
    goto LABEL_61;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 106) = v35;
  *((_QWORD *)a5 + 106) = v36;
  v15 = *((unsigned int *)a2 + 1);
  *(_QWORD *)&v38.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v15, cxLeftWidth, 0LL, 1, 2, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 908;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], *a3, 2430, (float *)a4 + 288);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 912;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], a3[1], 2430, (float *)a5 + 288);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 913;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], *a3, 2432, (float *)a4 + 292);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 916;
    goto LABEL_61;
  }
  ThemeMargins = GetThemePercentage(v8, a2[1], a3[1], 2432, (float *)a5 + 292);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 917;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 919;
    goto LABEL_61;
  }
  v54 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v54);
  v16 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v37.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v38.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v16, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 936;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 938;
    goto LABEL_61;
  }
  v46 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v46);
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v43 = v37;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v43);
  v49 = v38;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v49);
  v52 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v52);
  v50 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v50);
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 952;
    goto LABEL_61;
  }
  v17 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, a2[12], 2u, &pMargins, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 958;
    goto LABEL_61;
  }
  v18 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 122) = v35;
  *((_QWORD *)a5 + 122) = v36;
  v19 = a2[13];
  *(_QWORD *)&v37.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, v19, 2u, &pMargins, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 967;
    goto LABEL_61;
  }
  v20 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 124) = v35;
  *((_QWORD *)a5 + 124) = v36;
  v21 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v38.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v21, v17, 9LL, 10, 11, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 985;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 987;
    goto LABEL_61;
  }
  v44 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v44);
  v22 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v37.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v38.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v8, v22, v17, 14LL, 15, 16, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1004;
    goto LABEL_61;
  }
  ThemeMargins = GetThemeMargins(v8, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1006;
    goto LABEL_61;
  }
  v45 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v45);
  v23 = a2[17];
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v8, v23, &v57, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1014;
    goto LABEL_61;
  }
  v24 = v35;
  *((_QWORD *)a4 + 132) = v35;
  *((_QWORD *)a5 + 132) = v24;
  _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
  v51 = v57;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v51);
  v53 = v37;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v53);
  v55 = v38;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v55);
  v48 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v48);
  v47 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v47);
  v25 = 18;
  v26 = a2 + 18;
  v39 = 18;
  v27 = a2 + 18;
  v28 = (CBaseObject **)((char *)a5 + 1072);
  *(_QWORD *)&v38.cxLeftWidth = v27;
  v29 = (_QWORD *)((char *)a5 + 1072);
  *(_QWORD *)&v37.cxLeftWidth = a4 - a5;
  while ( !*v27 )
  {
LABEL_27:
    ++v25;
    ++v27;
    v29 += 2;
    v39 = v25;
    *(_QWORD *)&v38.cxLeftWidth = v27;
    if ( v25 > 21 )
      goto LABEL_28;
  }
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v8, *v27, 2u, &pMargins, &v35);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 && (_WORD)ThemeMargins != 1168 )
  {
    iPropId = 1033;
    goto LABEL_61;
  }
  if ( (_WORD)ThemeMargins != 1168 )
  {
    v25 = v39;
    *(_QWORD *)((char *)v29 + *(_QWORD *)&v37.cxLeftWidth) = v35;
    *v29 = v36;
    v27 = *(const int **)&v38.cxLeftWidth;
    goto LABEL_27;
  }
LABEL_28:
  if ( (_WORD)v10 == 1168 )
  {
    v31 = *(_QWORD *)&v37.cxLeftWidth;
    v32 = 4LL;
    do
    {
      if ( *v26 )
      {
        v33 = *(CBaseObject **)((char *)v28 + v31);
        if ( v33 )
        {
          CBaseObject::Release(v33);
          *(CBaseObject **)((char *)v28 + v31) = 0LL;
        }
        if ( *v28 )
        {
          CBaseObject::Release(*v28);
          *v28 = 0LL;
        }
      }
      v28 += 2;
      ++v26;
      --v32;
    }
    while ( v32 );
    v8 = v42;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v8, a4, a5);
  v10 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1062;
    goto LABEL_61;
  }
  return v10;
}
