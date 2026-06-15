/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24
 * Callers:
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003644C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180036928 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180036A90 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180034A2C (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180085EE4 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateLowRightsRegistryKey(HKEY hKey, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v13; // eax
  signed int LastError; // eax
  TraceLoggingHProvider v15; // rcx
  __int64 v16; // rdx
  PSID Sid; // [rsp+50h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES v18; // [rsp+58h] [rbp-18h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, a2);
  }
  memset(&v18.nLength + 1, 0, 20);
  v18.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(hKey, &v18.lpSecurityDescriptor);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v10 = SafeRegCreateKeyEx(hKey, a2, 0, 0LL, 0, a3 | 0xA0000u, &v18, a4, 0LL);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 > 0 )
        v9 = (unsigned __int16)v10 | 0x80070000;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v16 = 21LL;
        goto LABEL_40;
      }
    }
    else
    {
      Sid = 0LL;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17,
          (unsigned int)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
          (_DWORD)a2,
          (char)*a4);
      }
      if ( ConvertStringSidToSidW(L"LW", &Sid) )
      {
        v11 = SetRegistryKeyIntegrityLevel(*a4, Sid);
        v9 = v11;
        if ( v11 < 0 )
        {
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              18LL,
              &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
              (unsigned int)v11);
          }
          v13 = SetRegistryHandleIntegrityLevel(*a4, Sid);
          v9 = v13;
          if ( v13 < 0
            && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              19LL,
              &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
              (unsigned int)v13);
          }
        }
        if ( Sid )
          LocalFree(Sid);
        goto LABEL_15;
      }
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v16 = 20LL;
LABEL_40:
        WPP_SF_D(*((_QWORD *)v15 + 2), v16, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
      }
    }
  }
LABEL_15:
  operator delete(v18.lpSecurityDescriptor);
  v18.lpSecurityDescriptor = 0LL;
  if ( (v9 & 0x80000000) != 0 )
  {
    if ( *a4 )
    {
      RegCloseKey(*a4);
      *a4 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
    }
  }
  return v9;
}
