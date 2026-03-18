/*
 * XREFs of NtGdiGetTextExtent @ 0x140280C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, const void *a2, int a3, void *a4, unsigned int a5)
{
  void *v5; // rax
  __int64 v6; // rsi
  char *v10; // rdi
  unsigned int TextExtentW; // ebx
  __int64 SessionState; // rax
  struct tagSIZE v15; // [rsp+58h] [rbp-130h] BYREF
  HDC v16; // [rsp+60h] [rbp-128h]
  void *v17; // [rsp+68h] [rbp-120h]
  _BYTE v18[64]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v19[14]; // [rsp+B0h] [rbp-D8h] BYREF
  char v20; // [rsp+120h] [rbp-68h] BYREF

  v5 = a4;
  v6 = a3;
  v16 = a1;
  v17 = a4;
  v15 = 0LL;
  v10 = 0LL;
  TextExtentW = 0;
  if ( a3 >= 0 )
  {
    if ( !a3 )
    {
      TextExtentW = 1;
LABEL_24:
      GreProbeAndWriteToUntrustedVa(v5, 8uLL, &v15, 8uLL, 1uLL);
      return TextExtentW;
    }
    if ( a2 )
    {
      if ( a3 > 16 )
      {
        if ( (unsigned __int64)a3 <= 0x1388000 )
          v10 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
      }
      else
      {
        v10 = &v20;
      }
      if ( v10 )
      {
        GreProbeAndReadFromUntrustedVa(v10, 2 * v6, a2, 2 * v6, 2uLL);
        TextExtentW = 1;
      }
    }
    if ( TextExtentW )
    {
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v18,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v18) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v19, a1);
        if ( v19[0] )
          TextExtentW = GrepGetTextExtentW((struct DCOBJ *)v19, (unsigned __int16 *)v10, v6, &v15, a5);
        else
          TextExtentW = 0;
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v19);
      }
      else
      {
        TextExtentW = 0;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v18);
    }
    if ( a3 > 16 && v10 )
      FreeTmpBuffer(v10);
    if ( TextExtentW )
    {
      v5 = a4;
      goto LABEL_24;
    }
  }
  return TextExtentW;
}
