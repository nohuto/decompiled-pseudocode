/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180035A50
 * Callers:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x180035C34 (--1CAudioSessionStore@@AEAA@XZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006210 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003552C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180035DF0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800863B8 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Commit(CAudioSessionStore *this)
{
  int v2; // esi
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v6; // rbx
  HRESULT v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  int v11; // r9d
  RPC_STATUS v12; // eax
  int v13; // edi
  CAudioSessionStore *v14; // rcx
  RPC_STATUS v15; // eax
  LSTATUS v16; // eax
  char v17; // di
  const BYTE *lpData; // rax
  BYTE *v19; // rdi
  char v20; // al
  HKEY v21; // [rsp+38h] [rbp-19h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-11h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+50h] [rbp-1h]
  unsigned __int64 cbData; // [rsp+58h] [rbp+7h] BYREF
  WCHAR ValueName[20]; // [rsp+60h] [rbp+Fh] BYREF

  hKey = 0LL;
  v2 = 0;
  v21 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x52u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
  }
  v3 = CAudioSessionStore::OpenSessionKey(this, &hKey);
  v4 = v3;
  if ( v3 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x53u,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        v3);
    }
    return v4;
  }
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    goto LABEL_7;
  do
  {
    v8 = StringFromCLSID((const IID *const)v6, &lpsz);
    if ( v8 )
    {
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        goto LABEL_61;
      }
      v10 = 84;
LABEL_18:
      v11 = v8;
      goto LABEL_19;
    }
    v12 = RpcImpersonateClient(0LL);
    if ( v12 )
    {
      if ( v12 != 1725 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x55u,
            (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
            v12);
        }
        goto LABEL_61;
      }
    }
    else
    {
      v2 = 1;
    }
    v13 = CreateLowRightsRegistryKey(hKey, lpsz, 0x20006u, &v21);
    CoTaskMemFree(lpsz);
    if ( v2 )
    {
      RpcRevertToSelf();
      v2 = 0;
    }
    if ( v13 )
    {
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v10 = 86;
        v11 = v13;
LABEL_19:
        WPP_SF_D(*(_QWORD *)(v9 + 16), v10, (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, v11);
      }
LABEL_61:
      v6 = *(_QWORD *)(v6 + 48);
      continue;
    }
    v8 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v6 + 16));
    if ( v8 )
    {
      v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        goto LABEL_61;
      }
      v10 = 87;
      goto LABEL_18;
    }
    if ( *(_WORD *)(v6 + 24) )
    {
      lpData = CAudioSessionStore::FlattenProperty(v14, (const struct tagPROPVARIANT *)(v6 + 24), &cbData);
      v19 = (BYTE *)lpData;
      if ( lpData )
        v20 = RegSetValueExW(v21, ValueName, 0, 3u, lpData, cbData);
      else
        v20 = 8;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          89,
          (unsigned int)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          (unsigned int)ValueName,
          v20);
      }
      operator delete(v19);
LABEL_60:
      RegCloseKey(v21);
      v21 = 0LL;
      goto LABEL_61;
    }
    v15 = RpcImpersonateClient(0LL);
    if ( !v15 )
    {
      v2 = 1;
LABEL_44:
      v16 = RegDeleteValueW(v21, ValueName);
      v17 = v16;
      if ( v16 > 0 )
        v17 = v16;
      if ( v2 )
      {
        RpcRevertToSelf();
        v2 = 0;
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          88,
          (unsigned int)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          (unsigned int)ValueName,
          v17);
      }
      goto LABEL_60;
    }
    if ( v15 == 1725 )
      goto LABEL_44;
  }
  while ( v6 );
  v5 = v24;
LABEL_7:
  LeaveCriticalSection(v5);
  RegCloseKey(hKey);
  return 0LL;
}
