/*
 * XREFs of ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A357C
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3D78 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3E2C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3F18 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3FF8 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A416C (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0127568 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

AutoSharedUmfdFileViewLock *__fastcall AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock(
        AutoSharedUmfdFileViewLock *this)
{
  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  return this;
}
