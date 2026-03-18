/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z @ 0x1C02BBEA0
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C025A374 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C027CBD0 (cMapRemoteFonts.c)
 *     ?EUDCEnsureUmfdHost@@YAHXZ @ 0x1C02892A0 (-EUDCEnsureUmfdHost@@YAHXZ.c)
 *     AtmDrvFontManagementRedirector @ 0x1C02A5040 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

char __fastcall UmfdHostLifeTimeManager::EnsureUmfdHost(int a1)
{
  char v2; // bl
  int v3; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  PRKEVENT v6; // rcx
  _BYTE v8[8]; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)v8,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
  v2 = 0;
  if ( UmfdHostLifeTimeManager::s_Launched )
  {
    v2 = 1;
    goto LABEL_19;
  }
  if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemEUDC1) )
    goto LABEL_19;
  KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
  KeClearEvent(UmfdTls::s_FontDriverThreadsReadyEvent);
  if ( gpidLogon )
    v3 = PostWinlogonMessage(1033LL, 0LL);
  else
    v3 = -1073741271;
  if ( v3 >= 0 )
  {
    v6 = UmfdHostLifeTimeManager::s_WinlogonCallbackEvent;
    if ( a1 )
      v6 = UmfdTls::s_FontDriverThreadsReadyEvent;
    if ( !KeWaitForSingleObject(v6, Executive, 0, 0, 0LL) && UmfdHostLifeTimeManager::s_UmfdHostProcess )
    {
      v2 = 1;
      UmfdHostLifeTimeManager::s_Ready = 1;
      goto LABEL_19;
    }
    if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
LABEL_18:
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EFA06, v4, v5, 2u, &pData);
  }
  else if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000000uLL) )
  {
    goto LABEL_18;
  }
LABEL_19:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  return v2;
}
