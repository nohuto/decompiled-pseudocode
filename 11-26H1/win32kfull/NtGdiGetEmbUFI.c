/*
 * XREFs of NtGdiGetEmbUFI @ 0x14032AB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z @ 0x1401FEB48 (-GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetEmbUFI(HDC a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7)
{
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // r15d
  __int64 v13; // rdx
  int v14; // ecx
  __int64 SessionState; // rax
  unsigned int UFI; // ebx
  unsigned int v18; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-174h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-170h] BYREF
  __int64 v21; // [rsp+50h] [rbp-168h] BYREF
  void *v22; // [rsp+58h] [rbp-160h] BYREF
  void *v23; // [rsp+60h] [rbp-158h]
  void *v24; // [rsp+68h] [rbp-150h]
  void *v25; // [rsp+70h] [rbp-148h]
  _BYTE v26[56]; // [rsp+78h] [rbp-140h] BYREF
  _QWORD v27[14]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v28[80]; // [rsp+120h] [rbp-98h] BYREF

  v23 = a2;
  v24 = a6;
  v25 = a7;
  v21 = 0LL;
  v10 = 0;
  v18 = 0;
  memset_0(v28, 0, 0x48uLL);
  v11 = 0;
  v19 = 0;
  v12 = 0;
  v20 = 0;
  v22 = 0LL;
  SessionState = W32GetSessionState(v14, v13);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v26,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v26) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, a1);
    if ( v27[0] )
    {
      UFI = GrepGetUFI(
              (struct DCOBJ *)v27,
              (struct _UNIVERSAL_FONT_ID *)&v21,
              (struct tagDESIGNVECTOR *)v28,
              &v19,
              &v20,
              &v18,
              &v22);
      v10 = v18;
      v11 = v19;
      v12 = v20;
    }
    else
    {
      UFI = 0;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
  }
  else
  {
    UFI = 0;
  }
  if ( UFI )
  {
    GreProbeAndWriteToUntrustedVa(v23, 8uLL, &v21, 8uLL, 1uLL);
    v20 = v10;
    GreProbeAndWriteToUntrustedVa(v24, 4uLL, &v20, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa(v25, 8uLL, &v22, 8uLL, 1uLL);
    if ( (v10 & 2) != 0 )
    {
      if ( a3 )
      {
        GreProbeAndWriteToUntrustedVa(a3, v11, v28, v11, 1uLL);
        v19 = v11;
        GreProbeAndWriteToUntrustedVa(a4, 4uLL, &v19, 4uLL, 1uLL);
        v18 = v12;
        GreProbeAndWriteToUntrustedVa(a5, 4uLL, &v18, 4uLL, 1uLL);
      }
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v26);
  return UFI;
}
