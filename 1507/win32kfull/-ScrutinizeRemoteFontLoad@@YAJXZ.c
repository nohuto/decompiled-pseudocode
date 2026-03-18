/*
 * XREFs of ?ScrutinizeRemoteFontLoad@@YAJXZ @ 0x1C025D30C
 * Callers:
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ScrutinizeRemoteFontLoad(void)
{
  return ScrutinizeFontLoad(2u, 0LL);
}
