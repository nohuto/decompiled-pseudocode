/*
 * XREFs of GreAddFontMemResourceEx @ 0x1C027C95C
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02A6DC0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025A604 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027C444 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C027CBD0 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C027D0D0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall GreAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v6; // rbx
  int v9; // eax
  struct PFT **v10; // rax
  struct _FONTFILEVIEW **v12; // [rsp+30h] [rbp-51h] BYREF
  struct PFT *v13; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-41h] BYREF
  struct tagDOWNLOADFONTHEADER *v15; // [rsp+E0h] [rbp+5Fh] BYREF
  int v16; // [rsp+E8h] [rbp+67h] BYREF

  v15 = a1;
  v6 = 0LL;
  v12 = 0LL;
  v9 = cMapRemoteFonts(&v15, (unsigned int)(a2 + 16), v14, 2LL);
  if ( v15 && v9 )
  {
    v16 = 1;
    if ( (unsigned int)bCreateFontFileView((const struct _FONTFILEVIEW *)v14, v15, a2 + 16, &v12, 1u) )
    {
      v10 = gpPFTPrivate;
      if ( !gpPFTPrivate )
      {
        if ( !(unsigned int)bInitPrivatePFT() )
          goto LABEL_10;
        v10 = gpPFTPrivate;
      }
      v13 = *v10;
      v6 = PUBLIC_PFTOBJ::hLoadMemFonts(&v13, v12, a3, a4, (unsigned int *)&v15, &v16);
      if ( v6 )
      {
        *a5 = (_DWORD)v15;
        return v6;
      }
      if ( !v16 )
        return v6;
    }
LABEL_10:
    vUnmapRemoteFonts(v14);
  }
  return v6;
}
