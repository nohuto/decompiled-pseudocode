/*
 * XREFs of ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514
 * Callers:
 *     FreeFileView @ 0x1C00213DC (FreeFileView.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A4F38 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02BC00C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC2F0 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

AutoExclusiveUmfdFileViewLock *__fastcall AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock(
        AutoExclusiveUmfdFileViewLock *this)
{
  CAutoPushLockEx::CAutoPushLockEx(this, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
  return this;
}
