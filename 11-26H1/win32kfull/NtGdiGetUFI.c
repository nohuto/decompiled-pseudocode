/*
 * XREFs of NtGdiGetUFI @ 0x1402812D0
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

__int64 __fastcall NtGdiGetUFI(HDC a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  unsigned int UFI; // ebx
  unsigned int v17; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-164h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-160h] BYREF
  __int64 v20; // [rsp+50h] [rbp-158h] BYREF
  void *v21; // [rsp+58h] [rbp-150h]
  void *v22; // [rsp+60h] [rbp-148h]
  _BYTE v23[56]; // [rsp+68h] [rbp-140h] BYREF
  _QWORD v24[14]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v25[80]; // [rsp+110h] [rbp-98h] BYREF

  v21 = a4;
  v22 = a5;
  v20 = 0LL;
  v9 = 0;
  v17 = 0;
  memset_0(v25, 0, 0x48uLL);
  v10 = 0;
  v18 = 0;
  v11 = 0;
  v19 = 0;
  SessionState = W32GetSessionState(v13, v12);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v23,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v23) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a1);
    if ( v24[0] )
    {
      UFI = GrepGetUFI(
              (struct DCOBJ *)v24,
              (struct _UNIVERSAL_FONT_ID *)&v20,
              (struct tagDESIGNVECTOR *)v25,
              &v18,
              &v19,
              &v17,
              0LL);
      v9 = v17;
      v10 = v18;
      v11 = v19;
    }
    else
    {
      UFI = 0;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
  }
  else
  {
    UFI = 0;
  }
  if ( UFI )
  {
    GreProbeAndWriteToUntrustedVa(a2, 8uLL, &v20, 8uLL, 1uLL);
    v19 = v9;
    GreProbeAndWriteToUntrustedVa(a6, 4uLL, &v19, 4uLL, 1uLL);
    if ( (v9 & 2) != 0 )
    {
      if ( a3 )
      {
        GreProbeAndWriteToUntrustedVa(a3, v10, v25, v10, 1uLL);
        v18 = v10;
        GreProbeAndWriteToUntrustedVa(v21, 4uLL, &v18, 4uLL, 1uLL);
        v17 = v11;
        GreProbeAndWriteToUntrustedVa(v22, 4uLL, &v17, 4uLL, 1uLL);
      }
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v23);
  return UFI;
}
