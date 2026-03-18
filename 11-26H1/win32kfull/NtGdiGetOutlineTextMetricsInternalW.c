/*
 * XREFs of NtGdiGetOutlineTextMetricsInternalW @ 0x140280790
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, void *a3, void *a4)
{
  size_t v6; // rsi
  struct _OUTLINETEXTMETRICW *v8; // rbx
  __int64 SessionState; // rax
  unsigned int OutlineTextMetrics; // eax
  unsigned int v12; // edi
  __int64 v13; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v14[64]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v15[14]; // [rsp+80h] [rbp-78h] BYREF

  v6 = (unsigned int)Size;
  v8 = 0LL;
  v13 = 0LL;
  if ( (_DWORD)Size && a3 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v8 = (struct _OUTLINETEXTMETRICW *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v8 )
      return 0LL;
    memset_0(v8, 0, v6);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  SessionState = W32GetSessionState((_DWORD)a1, Size);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v14,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v14) )
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
    return 0LL;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  if ( v15[0] )
  {
    OutlineTextMetrics = GrepGetOutlineTextMetrics((struct DCOBJ *)v15, (unsigned int)v6, v8, (struct _TMDIFF *)&v13);
  }
  else
  {
    EngSetLastError(6u);
    OutlineTextMetrics = 0;
  }
  v12 = 0;
  if ( OutlineTextMetrics != -1 )
    v12 = OutlineTextMetrics;
  if ( v12 )
  {
    GreProbeAndWriteToUntrustedVa(a4, 8uLL, &v13, 8uLL, 4uLL);
    if ( (_DWORD)v6 )
      GreProbeAndWriteToUntrustedVa(a3, (unsigned int)v6, v8, (unsigned int)v6, 4uLL);
  }
  if ( v8 )
    FreeTmpBuffer(v8);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
  return v12;
}
