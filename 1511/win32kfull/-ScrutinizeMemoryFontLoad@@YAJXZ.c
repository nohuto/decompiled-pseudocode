/*
 * XREFs of ?ScrutinizeMemoryFontLoad@@YAJXZ @ 0x1C025CFDC
 * Callers:
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025D890 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS ScrutinizeMemoryFontLoad(void)
{
  return ScrutinizeFontLoad(1u, 0LL);
}
