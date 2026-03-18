/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0
 * Callers:
 *     bUnloadEudcFont @ 0x1C0021F90 (bUnloadEudcFont.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     bAddAllFlEntry @ 0x1C01082A8 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0108660 (bReadUserSystemEUDCRegistry.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027BF18 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0289B84 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0289D54 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
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
