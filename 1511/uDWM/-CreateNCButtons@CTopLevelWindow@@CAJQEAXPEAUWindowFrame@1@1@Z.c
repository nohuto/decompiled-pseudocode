/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800485F0
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180047A4C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041274 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        void *const a1,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  unsigned int v3; // ebx
  char v6; // r8
  struct CBitmapSource ****v7; // rsi
  unsigned int v8; // r14d
  struct CBitmapSource ***v9; // rdi
  int v10; // eax
  HRESULT ThemeMargins; // eax
  __int64 v12; // r8
  MARGINS *v13; // rdx
  MARGINS pMargins; // [rsp+40h] [rbp-C0h] BYREF
  struct _MARGINS v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+60h] [rbp-A0h]
  struct CTopLevelWindow::WindowFrame *v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  char *v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-80h]
  struct CTopLevelWindow::WindowFrame *v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  char *v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  char *v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp-50h]
  char *v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+C0h] [rbp-40h]
  char *v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  char *v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+E0h] [rbp-20h]
  char *v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+F0h] [rbp-10h]
  char *v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+100h] [rbp+0h]
  char *v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+110h] [rbp+10h]
  char *v40; // [rsp+118h] [rbp+18h]

  v3 = 0;
  v18 = a2;
  if ( a2 == *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32) )
  {
    v17 = -1;
    v6 = 1;
    v19 = -1;
  }
  else
  {
    v6 = 0;
    v17 = 3;
    v19 = 5;
  }
  v22 = a3;
  v20 = (char *)a2 + 32;
  if ( v6 )
  {
    v21 = -1;
    v23 = -1;
  }
  else
  {
    v21 = 4;
    v23 = 6;
  }
  v24 = (char *)a3 + 32;
  v7 = (struct CBitmapSource ****)&v18;
  v26 = (char *)a2 + 64;
  v25 = v6 != 0 ? -1 : 89;
  v28 = (char *)a2 + 96;
  v27 = v6 != 0 ? -1 : 91;
  v30 = (char *)a3 + 64;
  v29 = v6 != 0 ? -1 : 90;
  v32 = (char *)a3 + 96;
  v31 = v6 != 0 ? -1 : 92;
  v34 = (char *)a2 + 128;
  v33 = v6 != 0 ? -1 : 7;
  v36 = (char *)a3 + 128;
  v35 = v6 != 0 ? -1 : 8;
  v38 = (char *)a2 + 160;
  v37 = v6 != 0 ? 37 : 9;
  v39 = v6 != 0 ? 38 : 10;
  v8 = 0;
  v40 = (char *)a3 + 160;
  while ( 1 )
  {
    v9 = *v7;
    if ( *((_DWORD *)v7 - 2) == -1 )
      goto LABEL_11;
    v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *((_DWORD *)v7 - 2), 4u, &v16, *v7);
    v3 = v10;
    if ( v10 < 0 )
      break;
    ThemeMargins = GetThemeMargins(a1, 0LL, *((_DWORD *)v7 - 2), 0, 3602, 0LL, &pMargins);
    v12 = 0LL;
    v3 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeMargins, 0x353u);
      return v3;
    }
    if ( *((_DWORD *)v9 + 6) )
    {
      do
      {
        v13 = (MARGINS *)(*v9)[v12];
        v12 = (unsigned int)(v12 + 1);
        v13[4] = pMargins;
      }
      while ( (unsigned int)v12 < *((_DWORD *)v9 + 6) );
    }
LABEL_11:
    ++v8;
    v7 += 2;
    if ( v8 >= 0xC )
      return v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x352u);
  return v3;
}
