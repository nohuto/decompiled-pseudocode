/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x180041AFC
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180041274 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041D9C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        void *const a1,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  unsigned int v3; // ebx
  char v5; // r9
  __int64 *v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int v9; // eax
  HRESULT ThemeMargins; // eax
  __int64 v11; // r8
  MARGINS *v12; // rdx
  MARGINS pMargins; // [rsp+40h] [rbp-79h] BYREF
  struct _MARGINS v15; // [rsp+50h] [rbp-69h] BYREF
  int v16; // [rsp+60h] [rbp-59h]
  struct CTopLevelWindow::WindowFrame *v17; // [rsp+68h] [rbp-51h] BYREF
  int v18; // [rsp+70h] [rbp-49h]
  struct CTopLevelWindow::WindowFrame *v19; // [rsp+78h] [rbp-41h]
  int v20; // [rsp+80h] [rbp-39h]
  char *v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+90h] [rbp-29h]
  char *v23; // [rsp+98h] [rbp-21h]
  int v24; // [rsp+A0h] [rbp-19h]
  char *v25; // [rsp+A8h] [rbp-11h]
  int v26; // [rsp+B0h] [rbp-9h]
  char *v27; // [rsp+B8h] [rbp-1h]
  int v28; // [rsp+C0h] [rbp+7h]
  char *v29; // [rsp+C8h] [rbp+Fh]
  int v30; // [rsp+D0h] [rbp+17h]
  char *v31; // [rsp+D8h] [rbp+1Fh]

  v3 = 0;
  v17 = a2;
  v19 = a3;
  if ( a2 == *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32) )
  {
    v16 = -1;
    v5 = 1;
    v18 = -1;
    v20 = -1;
  }
  else
  {
    v5 = 0;
    v16 = 3;
    v18 = 4;
    v20 = 5;
  }
  v21 = (char *)a2 + 32;
  v6 = (__int64 *)&v17;
  v23 = (char *)a3 + 32;
  v22 = v5 != 0 ? -1 : 6;
  v25 = (char *)a2 + 64;
  v24 = v5 != 0 ? -1 : 7;
  v27 = (char *)a3 + 64;
  v26 = v5 != 0 ? -1 : 8;
  v29 = (char *)a2 + 96;
  v28 = v5 != 0 ? 37 : 9;
  v30 = v5 != 0 ? 38 : 10;
  v7 = 0;
  v31 = (char *)a3 + 96;
  while ( 1 )
  {
    v8 = *v6;
    if ( *((_DWORD *)v6 - 2) == -1 )
      goto LABEL_9;
    v9 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *((_DWORD *)v6 - 2), 4u, &v15, *v6);
    v3 = v9;
    if ( v9 < 0 )
      break;
    ThemeMargins = GetThemeMargins(a1, 0LL, *((_DWORD *)v6 - 2), 0, 3602, 0LL, &pMargins);
    v11 = 0LL;
    v3 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeMargins, 0x329u);
      return v3;
    }
    if ( *(_DWORD *)(v8 + 24) )
    {
      do
      {
        v12 = *(MARGINS **)(*(_QWORD *)v8 + 8 * v11);
        v11 = (unsigned int)(v11 + 1);
        v12[4] = pMargins;
      }
      while ( (unsigned int)v11 < *(_DWORD *)(v8 + 24) );
    }
LABEL_9:
    ++v7;
    v6 += 2;
    if ( v7 >= 8 )
      return v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x328u);
  return v3;
}
