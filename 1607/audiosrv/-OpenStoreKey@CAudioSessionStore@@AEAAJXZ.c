/*
 * XREFs of ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18006D5C4
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002988C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x18006BA88 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     WPP_SF_qSSq @ 0x180070718 (WPP_SF_qSSq.c)
 */

__int64 __fastcall CAudioSessionStore::OpenStoreKey(CAudioSessionStore *this)
{
  int ThreadUserStringSid; // ebx
  HKEY *v2; // rsi
  int v3; // r14d
  int v4; // r13d
  RPC_STATUS v5; // eax
  int v6; // r15d
  int v7; // edx
  int v8; // r8d
  HLOCAL hMem; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR SubKey[264]; // [rsp+58h] [rbp-B0h] BYREF

  ThreadUserStringSid = 0;
  v2 = (HKEY *)((char *)this + 32);
  hKey = 0LL;
  v3 = 0;
  hMem = 0LL;
  v4 = (int)this;
  if ( *((_QWORD *)this + 4) )
    return (unsigned int)ThreadUserStringSid;
  v5 = RpcImpersonateClient(0LL);
  ThreadUserStringSid = v5;
  if ( !v5 )
  {
    v3 = 1;
LABEL_7:
    ThreadUserStringSid = GetThreadUserStringSid((unsigned __int16 **)&hMem);
    if ( ThreadUserStringSid >= 0 )
    {
      ThreadUserStringSid = StringCbPrintfW(
                              SubKey,
                              0x208uLL,
                              L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry",
                              hMem);
      if ( ThreadUserStringSid >= 0 )
      {
        v6 = 131103;
        ThreadUserStringSid = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
        if ( ThreadUserStringSid == 5 )
        {
          v6 = 25;
          ThreadUserStringSid = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x19u, &hKey);
        }
        if ( ThreadUserStringSid )
        {
          if ( ThreadUserStringSid > 0 )
            ThreadUserStringSid = (unsigned __int16)ThreadUserStringSid | 0x80070000;
        }
        else
        {
          ThreadUserStringSid = CreateLowRightsRegistryKey(hKey, L"Audio\\PolicyConfig\\PropertyStore", v6, v2);
          if ( ThreadUserStringSid >= 0
            && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qSSq(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, v4, (__int64)SubKey);
          }
        }
      }
    }
    if ( hMem )
      LocalFree(hMem);
    if ( v3 )
      RpcRevertToSelf();
    goto LABEL_23;
  }
  if ( v5 == 1725 )
    goto LABEL_7;
  if ( v5 > 0 )
    ThreadUserStringSid = (unsigned __int16)v5 | 0x80070000;
LABEL_23:
  if ( hKey )
    RegCloseKey(hKey);
  if ( ThreadUserStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenStoreKey", 5609, ThreadUserStringSid);
  return (unsigned int)ThreadUserStringSid;
}
