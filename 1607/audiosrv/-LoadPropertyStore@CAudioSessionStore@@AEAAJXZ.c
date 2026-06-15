/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340
 * Callers:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x18006BF08 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x18005A9A8 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005AA00 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18005F0DC (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18006CF48 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18006D5C4 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18006FF1C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18006FF68 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18006FFD0 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this)
{
  DWORD v1; // r13d
  char v2; // si
  CAudioSessionStore *v3; // r14
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  DWORD v8; // r15d
  int v9; // edi
  RPC_STATUS v10; // eax
  char v11; // bl
  LSTATUS v12; // eax
  LSTATUS v13; // eax
  void *v14; // rbx
  BYTE *v15; // r12
  LSTATUS v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rdx
  CAudioSession *v20; // rcx
  char v21; // bl
  unsigned __int64 v22; // r14
  __int64 v23; // r15
  float *v24; // r15
  unsigned int v25; // ebx
  float v26; // xmm0_4
  SAFEARRAY *v27; // rbx
  CAudioSession *v28; // rcx
  void *v29; // rax
  size_t v30; // r8
  unsigned __int16 *v31; // rbx
  unsigned __int16 *v32; // rax
  SIZE_T v33; // rdx
  const char *v34; // rbx
  char *v35; // rax
  SIZE_T v36; // rdx
  BSTR v37; // rax
  char v38; // [rsp+68h] [rbp-A0h]
  DWORD v39; // [rsp+6Ch] [rbp-9Ch]
  HKEY phkResult; // [rsp+70h] [rbp-98h] BYREF
  DWORD cchName[2]; // [rsp+78h] [rbp-90h] BYREF
  SAFEARRAY *psa; // [rsp+80h] [rbp-88h] BYREF
  CAudioSessionStore *v43; // [rsp+88h] [rbp-80h]
  DWORD cbMaxValueLen; // [rsp+90h] [rbp-78h] BYREF
  DWORD cbData; // [rsp+94h] [rbp-74h] BYREF
  DWORD cValues; // [rsp+98h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-68h] BYREF
  float v48; // [rsp+A8h] [rbp-60h] BYREF
  SIZE_T cb; // [rsp+B0h] [rbp-58h] BYREF
  SIZE_T v50; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID v51; // [rsp+C0h] [rbp-48h]
  LPCRITICAL_SECTION v52; // [rsp+C8h] [rbp-40h] BYREF
  char v53; // [rsp+D0h] [rbp-38h]
  struct _FILETIME ftLastWriteTime; // [rsp+D8h] [rbp-30h] BYREF
  GUID pclsid; // [rsp+E0h] [rbp-28h] BYREF
  WCHAR Name[104]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = 0;
  v43 = this;
  hKey = 0LL;
  v2 = 0;
  phkResult = 0LL;
  v3 = this;
  v38 = 0;
  v4 = CAudioSessionStore::OpenStoreKey(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 5839;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::LoadPropertyStore", v6, v4);
    return v5;
  }
  v4 = CAudioSessionStore::OpenSessionKey(v3, &hKey);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 5847;
    goto LABEL_3;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v52, (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 48));
  v8 = 0;
  v39 = 0;
  cchName[0] = 100;
  v9 = RegEnumKeyExW(hKey, 0, Name, cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
  if ( v9 )
    goto LABEL_49;
LABEL_7:
  v9 = CLSIDFromString(Name, &pclsid);
  if ( v9 < 0 )
    goto LABEL_104;
  v10 = RpcImpersonateClient(0LL);
  if ( v10 )
  {
    if ( v10 != 1725 )
    {
      if ( v10 > 0 )
        v9 = (unsigned __int16)v10 | 0x80070000;
      else
        v9 = v10;
      if ( v53 )
        ATL::CCritSecLock::Unlock(&v52);
      v2 = v38;
      goto LABEL_97;
    }
    v11 = v38;
  }
  else
  {
    v11 = 1;
    v38 = 1;
  }
  v12 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
  if ( !v12 )
  {
    if ( v11 )
    {
      RpcRevertToSelf();
      v38 = 0;
    }
    v13 = RegQueryInfoKeyW(phkResult, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cchName[1], &cbMaxValueLen, 0LL, 0LL);
    if ( v13 )
    {
      if ( v13 > 0 )
        v9 = (unsigned __int16)v13 | 0x80070000;
      else
        v9 = v13;
      goto LABEL_103;
    }
    v51 = operator new(saturated_mul(++cchName[1], 2uLL));
    v14 = v51;
    if ( !v51 )
    {
      v9 = -2147024882;
      goto LABEL_103;
    }
    v15 = (BYTE *)operator new(cbMaxValueLen);
    if ( !v15 )
    {
      v9 = -2147024882;
      operator delete(v14);
LABEL_103:
      RegCloseKey(phkResult);
      phkResult = 0LL;
LABEL_104:
      v2 = v38;
      goto LABEL_105;
    }
    if ( !cValues )
    {
LABEL_45:
      v1 = 0;
      goto LABEL_46;
    }
    while ( 1 )
    {
      cchName[0] = cchName[1];
      cbData = cbMaxValueLen;
      v16 = RegEnumValueW(phkResult, v1, (LPWSTR)v14, cchName, 0LL, 0LL, v15, &cbData);
      if ( v16 == 259 )
        goto LABEL_44;
      if ( v16 )
      {
        v8 = v39;
        v1 = 0;
        if ( v16 > 0 )
          v9 = (unsigned __int16)v16 | 0x80070000;
        else
          v9 = v16;
LABEL_46:
        operator delete(v15);
        operator delete(v14);
        RegCloseKey(phkResult);
        phkResult = 0LL;
        if ( v9 < 0 )
          goto LABEL_104;
        v39 = ++v8;
        cchName[0] = 100;
        v9 = RegEnumKeyExW(hKey, v8, Name, cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
        if ( v9 )
        {
          v2 = v38;
LABEL_49:
          if ( v9 == 259 )
          {
            v9 = 0;
          }
          else if ( v9 > 0 )
          {
            v9 = (unsigned __int16)v9;
            goto LABEL_114;
          }
          goto LABEL_105;
        }
        goto LABEL_7;
      }
      v17 = operator new(0x38uLL);
      v18 = v17;
      if ( !v17 )
      {
        v9 = -2147024882;
LABEL_44:
        v8 = v39;
        goto LABEL_45;
      }
      v17[6] = *((_QWORD *)v3 + 3);
      *((_DWORD *)v17 + 4) = _o__wtoi(v14);
      v9 = 0;
      *(GUID *)v18 = pclsid;
      *(_OWORD *)(v18 + 3) = *(_OWORD *)v15;
      v18[5] = *((_QWORD *)v15 + 2);
      switch ( *((_WORD *)v18 + 12) )
      {
        case 8:
          v37 = SysAllocString((const OLECHAR *)&v15[v18[4]]);
          v18[4] = v37;
          if ( !v37 )
          {
            v9 = -2147024882;
            goto LABEL_43;
          }
          break;
        case 0x1E:
          v34 = (const char *)&v15[v18[4]];
          v9 = StringCbLengthA(v34, v19, &v50);
          if ( v9 )
            goto LABEL_43;
          v35 = (char *)CoTaskMemAlloc(v50);
          if ( !v35 )
            goto LABEL_75;
          v36 = v50;
          v18[4] = v35;
          StringCchCopyA(v35, v36, v34);
          break;
        case 0x1F:
          v31 = (unsigned __int16 *)&v15[v18[4]];
          v9 = StringCbLengthW(v31, 0x7FFFFFFFuLL, &cb);
          if ( v9 )
            goto LABEL_43;
          v32 = (unsigned __int16 *)CoTaskMemAlloc(cb);
          if ( !v32 )
          {
LABEL_75:
            v9 = -2147024882;
            goto LABEL_43;
          }
          v33 = cb;
          v18[4] = v32;
          v9 = StringCbCopyW(v32, v33, (size_t *)v31);
          if ( v9 )
            goto LABEL_43;
          break;
        case 0x41:
        case 0x46:
          v29 = CoTaskMemAlloc(*((unsigned int *)v18 + 8));
          if ( !v29 )
            goto LABEL_75;
          v30 = *((unsigned int *)v18 + 8);
          v18[5] = v29;
          memcpy_0(v29, &v15[(_QWORD)v29], v30);
          break;
        case 0x2004:
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x35u,
              (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
            v20 = WPP_GLOBAL_Control;
          }
          v21 = cbData - 24;
          v22 = ((unsigned __int64)cbData - 24) >> 2;
          if ( v20 != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v20 + 28) & 8) != 0
            && *((_BYTE *)v20 + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)v20 + 2),
              0x36u,
              (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
              cbData - 24LL);
            v20 = WPP_GLOBAL_Control;
          }
          if ( (v21 & 3) != 0 )
          {
            if ( v20 != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)v20 + 28) & 8) != 0
              && *((_BYTE *)v20 + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)v20 + 2), 0x37u, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
            }
          }
          else
          {
            v23 = v18[4];
            psa = 0LL;
            v24 = (float *)&v15[v23];
            v9 = ATL::CComSafeArray<float,4>::Create(&psa, v22);
            if ( v9 )
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x38u,
                  (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
              }
LABEL_57:
              ATL::CComSafeArray<float,4>::Destroy(&psa);
              v3 = v43;
              goto LABEL_43;
            }
            v25 = 0;
            if ( v22 )
            {
              while ( 1 )
              {
                v26 = *v24;
                v48 = *v24;
                if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dg(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    0x39u,
                    (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
                    v25,
                    v26);
                }
                v9 = ATL::CComSafeArray<float,4>::SetAt(&psa, v25, &v48);
                if ( v9 )
                  break;
                ++v25;
                ++v24;
                if ( v25 >= v22 )
                  goto LABEL_65;
              }
              v28 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
              {
                if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
                  v28 = WPP_GLOBAL_Control;
                }
                if ( v28 != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)v28 + 28) & 8) != 0
                  && *((_BYTE *)v28 + 25) >= 4u )
                {
                  WPP_SF_D(*((_QWORD *)v28 + 2), 0x3Bu, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids, v9);
                }
              }
              goto LABEL_57;
            }
LABEL_65:
            v27 = psa;
            SafeArrayUnlock(psa);
            psa = 0LL;
            v18[4] = v27;
            ATL::CComSafeArray<float,4>::Destroy(&psa);
          }
          v3 = v43;
          break;
      }
      *((_QWORD *)v3 + 3) = v18;
LABEL_43:
      v14 = v51;
      if ( ++v1 >= cValues )
        goto LABEL_44;
    }
  }
  v2 = v38;
  if ( v12 > 0 )
  {
    v9 = (unsigned __int16)v12;
LABEL_114:
    v9 |= 0x80070000;
  }
  else
  {
    v9 = v12;
  }
LABEL_105:
  if ( v53 )
    ATL::CCritSecLock::Unlock(&v52);
LABEL_97:
  RegCloseKey(hKey);
  phkResult = 0LL;
  if ( v2 )
    RpcRevertToSelf();
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::LoadPropertyStore", 6200, v9);
  return (unsigned int)v9;
}
