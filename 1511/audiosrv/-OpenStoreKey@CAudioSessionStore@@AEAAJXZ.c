/*
 * XREFs of ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180036928
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033D00 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180036EB0 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     WPP_SF_qSSq @ 0x180086FE0 (WPP_SF_qSSq.c)
 */

__int64 __fastcall CAudioSessionStore::OpenStoreKey(CAudioSessionStore *this)
{
  int ThreadUserStringSid; // ebx
  HKEY *v2; // rsi
  int v3; // ebp
  int v4; // r14d
  RPC_STATUS v5; // eax
  LSTATUS v6; // eax
  int v7; // edx
  int v8; // r8d
  HLOCAL hMem; // [rsp+40h] [rbp-248h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-240h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-238h] BYREF

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
  if ( v5 )
  {
    if ( v5 != 1725 )
    {
      if ( v5 > 0 )
        ThreadUserStringSid = (unsigned __int16)v5 | 0x80070000;
      goto LABEL_16;
    }
  }
  else
  {
    v3 = 1;
  }
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
      v6 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
      ThreadUserStringSid = v6;
      if ( v6 )
      {
        if ( v6 > 0 )
          ThreadUserStringSid = (unsigned __int16)v6 | 0x80070000;
      }
      else
      {
        ThreadUserStringSid = CreateLowRightsRegistryKey(hKey, L"Audio\\PolicyConfig\\PropertyStore", 131103, v2);
        if ( ThreadUserStringSid >= 0
          && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
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
LABEL_16:
  if ( hKey )
    RegCloseKey(hKey);
  if ( ThreadUserStringSid < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      95LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)ThreadUserStringSid);
  }
  return (unsigned int)ThreadUserStringSid;
}
