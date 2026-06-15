/*
 * XREFs of ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x1800358E0
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180035788 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006210 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180035DF0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180036C4C (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     WPP_SF_qSSq @ 0x180089C60 (WPP_SF_qSSq.c)
 */

__int64 __fastcall CAudioSessionStore::OpenStoreKey(CAudioSessionStore *this)
{
  signed int ThreadUserStringSid; // ebx
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
        ThreadUserStringSid = CreateLowRightsRegistryKey(hKey, L"Audio\\PolicyConfig\\PropertyStore", 0x2001Fu, v2);
        if ( ThreadUserStringSid >= 0
          && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_qSSq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v7, v8, v4, (__int64)SubKey);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x60u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      ThreadUserStringSid);
  }
  return (unsigned int)ThreadUserStringSid;
}
