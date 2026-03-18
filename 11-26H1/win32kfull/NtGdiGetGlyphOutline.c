/*
 * XREFs of NtGdiGetGlyphOutline @ 0x140280390
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        void *a4,
        size_t Size,
        void *a6,
        const void *a7,
        int a8)
{
  const void *v9; // rcx
  unsigned int GlyphOutline; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  _BYTE v19[56]; // [rsp+98h] [rbp-100h] BYREF
  _QWORD v20[14]; // [rsp+D0h] [rbp-C8h] BYREF
  _GLYPHMETRICS v21; // [rsp+140h] [rbp-58h] BYREF
  _MAT2 v22; // [rsp+158h] [rbp-40h] BYREF

  v9 = a7;
  GlyphOutline = -1;
  v22 = 0LL;
  memset(&v21, 0, sizeof(v21));
  if ( (unsigned int)(Size - 1) > 0x270FFFF )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (_DWORD *)AllocFreeTmpBuffer((unsigned int)Size);
    v9 = a7;
  }
  if ( v11 || !(_DWORD)Size )
  {
    GreProbeAndReadFromUntrustedVa(&v22, 0x10uLL, v9, 0x10uLL, 1uLL);
    if ( v11 )
      memset_0(v11, 0, (unsigned int)Size);
    SessionState = W32GetSessionState(v13, v12);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v19,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v19) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
      if ( v20[0] )
        GlyphOutline = GrepGetGlyphOutline((struct DCOBJ *)v20, a2, a3, &v21, Size, v11, &v22, a8);
      else
        GlyphOutline = -1;
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
    }
    else
    {
      GlyphOutline = -1;
    }
    if ( GlyphOutline != -1 )
    {
      if ( v11 )
        GreProbeAndWriteToUntrustedVa(a6, (unsigned int)Size, v11, (unsigned int)Size, 1uLL);
      GreProbeAndWriteToUntrustedVa(a4, 0x14uLL, &v21, 0x14uLL, 1uLL);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v19);
    if ( v11 )
      FreeTmpBuffer(v11);
  }
  return GlyphOutline;
}
