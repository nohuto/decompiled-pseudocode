/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140225258 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x14030EED4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     GrepReleaseRFONTListSemaphoreEx @ 0x140174F10 (GrepReleaseRFONTListSemaphoreEx.c)
 */

void __fastcall SEMOBJ<18>::vUnlock(HSEMAPHORE *a1)
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
  if ( *a1 == (HSEMAPHORE)-1LL )
  {
    GrepReleaseRFONTListSemaphoreEx();
  }
  else if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONTList", *a1);
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
      if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0x1A))-- == 1 )
        *v8 &= ~0x40000uLL;
      if ( !*v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
  *a1 = 0LL;
}
