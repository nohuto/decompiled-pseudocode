/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988
 * Callers:
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C000ED04 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C0019CB8 (bAddFlEntry.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C028AA00 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C028B16C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B33C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM2(a2);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
