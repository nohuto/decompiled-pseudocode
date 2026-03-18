/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z @ 0x1400C6298 (-GrepGetTextFaceW@@YAHAEAVDCOBJ@@HPEAGH@Z.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1400F5394 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400FDE44 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     NtGdiGetFontFileInfo @ 0x1400FE220 (NtGdiGetFontFileInfo.c)
 *     ?GrepGetCharSet@@YAKAEAVDCOBJ@@@Z @ 0x1400FE5E8 (-GrepGetCharSet@@YAKAEAVDCOBJ@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z @ 0x14010C768 (-dwGetFontLanguageInfo@@YAKAEAVDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     NtGdiGetPublicFontTableChangeCookie @ 0x1401FFA20 (NtGdiGetPublicFontTableChangeCookie.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x14021C4D0 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x14021F2C4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64 (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140257CD0 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x14025B1C8 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1402916D4 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     NtGdiAddEmbFontToDC @ 0x140312030 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140312150 (NtGdiAddRemoteMMInstanceToDC.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x140326AC4 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x140326C0C (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1403270F0 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1403273E8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x140329890 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 *     NtGdiGetUFIPathname @ 0x14032AFB0 (NtGdiGetUFIPathname.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x140166A90 (GrepReleasePublicPFTSemaphoreEx.c)
 */

void __fastcall SEMOBJ<17>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 == (HSEMAPHORE)-2LL )
  {
    GrepReleasePublicPFTSemaphoreEx();
  }
  else if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PublicPFT", *a1);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = v4 + 8;
    v7 = -v4;
    v8 = (_QWORD *)(v6 & -(__int64)(v7 != 0));
    if ( v8 )
    {
      if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0x19))-- == 1 )
        *v8 &= ~0x20000uLL;
      if ( !*v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
  *a1 = 0LL;
}
