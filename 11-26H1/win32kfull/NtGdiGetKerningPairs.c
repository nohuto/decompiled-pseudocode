/*
 * XREFs of NtGdiGetKerningPairs @ 0x140280640
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, __int64 a2, void *a3)
{
  unsigned int v4; // r14d
  unsigned int KerningPairs; // ebx
  struct tagKERNINGPAIR *v7; // rdi
  __int64 SessionState; // rax
  unsigned int v9; // eax
  _BYTE v11[64]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v12[14]; // [rsp+70h] [rbp-88h] BYREF

  v4 = a2;
  KerningPairs = 0;
  v7 = 0LL;
  if ( a3 && (unsigned int)a2 <= 0x4E2000 )
    v7 = (struct tagKERNINGPAIR *)AllocFreeTmpBuffer((unsigned int)(8 * a2));
  if ( !a3 || v7 )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v11,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v11) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
      if ( v12[0] )
        KerningPairs = GrepGetKerningPairs((struct DCOBJ *)v12, v4, v7);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    }
    if ( a3 )
    {
      v9 = 0;
      if ( KerningPairs <= v4 )
        v9 = KerningPairs;
      KerningPairs = v9;
      if ( v9 )
        GreProbeAndWriteToUntrustedVa(a3, 8LL * v9, v7, 8LL * v9, 1uLL);
      FreeTmpBuffer(v7);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
  }
  return KerningPairs;
}
