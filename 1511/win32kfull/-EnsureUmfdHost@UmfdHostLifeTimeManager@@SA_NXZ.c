/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B8A20
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C025CFF4 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C027E968 (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C02A3EE0 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02B2BF0 (GreMakeFontDir.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  const struct _TlgProvider_t *v0; // rcx
  char v1; // bl
  int v2; // eax
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  _BYTE v8[8]; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)v8,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
  v1 = 0;
  if ( UmfdHostLifeTimeManager::s_Launched )
    goto LABEL_11;
  if ( gpidLogon )
    v2 = PostWinlogonMessage(1033LL, 0LL);
  else
    v2 = -1073741271;
  if ( v2 >= 0 )
  {
    if ( KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0LL)
      || !UmfdHostLifeTimeManager::s_UmfdHostProcess )
    {
      if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(v6, 0x200000000000uLL) )
        goto LABEL_14;
      goto LABEL_15;
    }
LABEL_11:
    v1 = 1;
    goto LABEL_15;
  }
  if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(v0, 0x200000000000uLL) )
LABEL_14:
    TlgWrite(v3, &unk_1C02E9E56, v4, v5, 2u, &pData);
LABEL_15:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  return v1;
}
