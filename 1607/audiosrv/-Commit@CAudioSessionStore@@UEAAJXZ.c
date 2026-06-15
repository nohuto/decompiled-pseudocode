/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800677A0
 * Callers:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x180066E4C (--1CAudioSessionStore@@AEAA@XZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002988C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x18006AF28 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18006CF48 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Commit(CAudioSessionStore *this)
{
  int v2; // esi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  CAudioSession *v8; // rcx
  unsigned __int16 v9; // dx
  int v10; // r9d
  RPC_STATUS v11; // eax
  int v12; // edi
  CAudioSessionStore *v13; // rcx
  RPC_STATUS v14; // eax
  LSTATUS v15; // eax
  unsigned int v16; // edi
  const BYTE *v17; // rax
  BYTE *v18; // rdi
  LSTATUS v19; // eax
  BYTE *lpData; // [rsp+28h] [rbp-29h]
  HKEY hKey; // [rsp+38h] [rbp-19h] BYREF
  HKEY v22; // [rsp+40h] [rbp-11h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 cbData; // [rsp+50h] [rbp-1h] BYREF
  LPCRITICAL_SECTION v25; // [rsp+58h] [rbp+7h] BYREF
  char v26; // [rsp+60h] [rbp+Fh]
  WCHAR ValueName[20]; // [rsp+68h] [rbp+17h] BYREF

  v22 = 0LL;
  v2 = 0;
  hKey = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
  }
  v3 = CAudioSessionStore::OpenSessionKey(this, &v22);
  v4 = v3;
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        v3);
    }
    return v4;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v6 = *((_QWORD *)this + 3);
  while ( v6 )
  {
    v7 = StringFromCLSID((const IID *const)v6, &lpsz);
    if ( v7 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = 30;
        goto LABEL_17;
      }
      goto LABEL_60;
    }
    v11 = RpcImpersonateClient(0LL);
    if ( v11 )
    {
      if ( v11 != 1725 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Fu,
            (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
            v11);
        }
        goto LABEL_60;
      }
    }
    else
    {
      v2 = 1;
    }
    v12 = CreateLowRightsRegistryKey(v22, lpsz, 0x20006u, &hKey);
    CoTaskMemFree(lpsz);
    if ( v2 )
    {
      RpcRevertToSelf();
      v2 = 0;
    }
    if ( v12 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = 32;
        v10 = v12;
        goto LABEL_18;
      }
      goto LABEL_60;
    }
    v7 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v6 + 16));
    if ( v7 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = 33;
LABEL_17:
        v10 = v7;
LABEL_18:
        WPP_SF_D(*((_QWORD *)v8 + 2), v9, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids, v10);
      }
LABEL_60:
      v6 = *(_QWORD *)(v6 + 48);
    }
    else
    {
      if ( *(_WORD *)(v6 + 24) )
      {
        v17 = CAudioSessionStore::FlattenProperty(v13, (const struct tagPROPVARIANT *)(v6 + 24), &cbData);
        v18 = (BYTE *)v17;
        if ( v17 )
          v19 = RegSetValueExW(hKey, ValueName, 0, 3u, v17, cbData);
        else
          v19 = 8;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(lpData) = v19;
          WPP_SF_SD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x23u,
            (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
            ValueName,
            lpData);
        }
        operator delete(v18);
        goto LABEL_59;
      }
      v14 = RpcImpersonateClient(0LL);
      if ( !v14 )
      {
        v2 = 1;
LABEL_43:
        v15 = RegDeleteValueW(hKey, ValueName);
        v16 = v15;
        if ( v15 > 0 )
          v16 = (unsigned __int16)v15 | 0x80070000;
        if ( v2 )
        {
          RpcRevertToSelf();
          v2 = 0;
        }
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(lpData) = v16;
          WPP_SF_SD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
            ValueName,
            lpData);
        }
LABEL_59:
        RegCloseKey(hKey);
        hKey = 0LL;
        goto LABEL_60;
      }
      if ( v14 == 1725 )
        goto LABEL_43;
    }
  }
  if ( v26 )
    ATL::CCritSecLock::Unlock(&v25);
  RegCloseKey(v22);
  return 0LL;
}
