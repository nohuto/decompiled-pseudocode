/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4
 * Callers:
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C013D870 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C013DE28 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C013F410 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C013F73C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027E2E8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C028B194 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B364 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  void *v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM2(a2, 1886221383LL, 1);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
