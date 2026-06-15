/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800677A0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18006CF48 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18006D5C4 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_Sq @ 0x18005FC4C (WPP_SF_Sq.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18006A8E0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18006DED8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18006F93C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18006FA2C (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateLowRightsRegistryKey(HKEY hKey, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  signed int v9; // ebx
  REGSAM v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  signed int LastError; // eax
  CAudioSession *v15; // rcx
  unsigned __int16 v16; // dx
  PSID Sid; // [rsp+50h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES v19; // [rsp+58h] [rbp-18h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids, a2);
  }
  memset(&v19.nLength + 1, 0, 20);
  v19.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(hKey, &v19.lpSecurityDescriptor);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_41;
  }
  v10 = a3 | 0x20000;
  if ( (a3 & 0x20006) != 0 )
    v10 = a3 | 0xA0000;
  v11 = SafeRegCreateKeyEx(hKey, a2, 0, 0LL, 0, v10, &v19, a4, 0LL);
  v9 = v11;
  if ( v11 )
  {
    if ( v11 > 0 )
      v9 = (unsigned __int16)v11 | 0x80070000;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v16 = 15;
      goto LABEL_40;
    }
  }
  else
  {
    Sid = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        a2,
        *a4);
    }
    if ( ConvertStringSidToSidW(L"LW", &Sid) )
    {
      v12 = SetRegistryKeyIntegrityLevel(*a4, Sid);
      v9 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
            v12);
        }
        v13 = SetRegistryHandleIntegrityLevel(*a4, Sid);
        v9 = v13;
        if ( v13 < 0
          && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
            v13);
        }
      }
      if ( Sid )
        LocalFree(Sid);
      goto LABEL_41;
    }
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v16 = 14;
LABEL_40:
      WPP_SF_D(*((_QWORD *)v15 + 2), v16, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids, v9);
    }
  }
LABEL_41:
  operator delete(v19.lpSecurityDescriptor);
  v19.lpSecurityDescriptor = 0LL;
  if ( v9 < 0 )
  {
    if ( *a4 )
    {
      RegCloseKey(*a4);
      *a4 = 0LL;
    }
    AudSrvTraceLoggingErrorHelper("CreateLowRightsRegistryKey", 1046, v9);
  }
  return (unsigned int)v9;
}
