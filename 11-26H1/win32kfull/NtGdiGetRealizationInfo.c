/*
 * XREFs of NtGdiGetRealizationInfo @ 0x140280940
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C2D54 (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, void *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int64 SessionState; // rax
  unsigned int v8; // ebx
  _BYTE v9[8]; // [rsp+30h] [rbp-3F8h] BYREF
  _BYTE v10[56]; // [rsp+38h] [rbp-3F0h] BYREF
  _QWORD v11[14]; // [rsp+70h] [rbp-3B8h] BYREF
  _DWORD Src[204]; // [rsp+E0h] [rbp-348h] BYREF

  memset_0(Src, 0, 0x32CuLL);
  GreProbeAndReadFromUntrustedVa(Src, 4uLL, a2, 4uLL, 1uLL);
  if ( Src[0] != 16 && Src[0] != 24 && Src[0] != 812 )
    return 0LL;
  SessionState = W32GetSessionState(v5, v4);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v10,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v10) )
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
    v8 = *(_DWORD *)GrepGetRealizationInfo((__int64)v9, (struct XDCOBJ *)v11, (__int64)Src);
  else
    v8 = 0;
  if ( v8 )
  {
    GreProbeForWriteToUntrustedVa(a2, Src[0], 4uLL);
    memmove(a2, Src, Src[0]);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  return v8;
}
