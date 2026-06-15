/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0
 * Callers:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180036DA8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003644C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180036928 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x180072050 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800720A8 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180076A2C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x180086298 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800862E4 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18008634C (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this)
{
  char v1; // si
  CAudioSessionStore *v2; // r14
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edi
  TraceLoggingHProvider v7; // rcx
  __int64 v8; // rdx
  RPC_STATUS v9; // eax
  bool v10; // cc
  LSTATUS v11; // eax
  void *v12; // rbx
  BYTE *v13; // r15
  DWORD v14; // eax
  LSTATUS v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rdx
  TraceLoggingHProvider v19; // rcx
  char v20; // bl
  unsigned __int64 v21; // r14
  float *v22; // r15
  unsigned int v23; // ebx
  float v24; // xmm0_4
  unsigned int v25; // eax
  SAFEARRAY *v26; // rbx
  TraceLoggingHProvider v27; // rcx
  char *v28; // rax
  size_t v29; // r8
  const unsigned __int16 *v30; // rbx
  unsigned __int16 *v31; // rax
  SIZE_T v32; // rdx
  const char *v33; // rbx
  char *v34; // rax
  SIZE_T v35; // rdx
  BSTR v36; // rax
  char v37; // [rsp+68h] [rbp-A0h]
  HKEY phkResult; // [rsp+70h] [rbp-98h] BYREF
  DWORD cchName[2]; // [rsp+78h] [rbp-90h] BYREF
  SAFEARRAY *psa; // [rsp+80h] [rbp-88h] BYREF
  CAudioSessionStore *v41; // [rsp+88h] [rbp-80h]
  DWORD cbMaxValueNameLen; // [rsp+90h] [rbp-78h] BYREF
  HKEY hKey; // [rsp+98h] [rbp-70h] BYREF
  DWORD v44; // [rsp+A0h] [rbp-68h]
  DWORD cbMaxValueLen; // [rsp+A4h] [rbp-64h] BYREF
  DWORD v46; // [rsp+A8h] [rbp-60h]
  DWORD cbData; // [rsp+ACh] [rbp-5Ch] BYREF
  DWORD cValues; // [rsp+B0h] [rbp-58h] BYREF
  float v49; // [rsp+B4h] [rbp-54h] BYREF
  SIZE_T cb; // [rsp+B8h] [rbp-50h] BYREF
  BYTE *v51; // [rsp+C0h] [rbp-48h]
  SIZE_T v52; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v53; // [rsp+D0h] [rbp-38h]
  struct _FILETIME ftLastWriteTime; // [rsp+D8h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E0h] [rbp-28h]
  GUID pclsid; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR Name[104]; // [rsp+F8h] [rbp-10h] BYREF

  v41 = this;
  hKey = 0LL;
  v1 = 0;
  phkResult = 0LL;
  v2 = this;
  v37 = 0;
  v3 = CAudioSessionStore::OpenStoreKey(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      return v4;
    }
    v8 = 108LL;
    goto LABEL_16;
  }
  v3 = CAudioSessionStore::OpenSessionKey(v2, &hKey);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      return v4;
    }
    v8 = 109LL;
LABEL_16:
    WPP_SF_D(*((_QWORD *)v7 + 2), v8, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, (unsigned int)v3);
    return v4;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 48));
  v46 = 0;
  cchName[0] = 100;
  v5 = RegEnumKeyExW(hKey, 0, Name, cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
  if ( v5 )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = CLSIDFromString(Name, &pclsid);
    if ( v5 < 0 )
      goto LABEL_6;
    v9 = RpcImpersonateClient(0LL);
    if ( v9 )
    {
      if ( v9 != 1725 )
      {
        v10 = v9 <= 0;
LABEL_26:
        if ( v10 )
        {
          v5 = v9;
          goto LABEL_6;
        }
        v5 = (unsigned __int16)v9;
        goto LABEL_106;
      }
    }
    else
    {
      v1 = 1;
      v37 = 1;
    }
    v9 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    v10 = v9 <= 0;
    if ( v9 )
      goto LABEL_26;
    if ( v1 )
    {
      RpcRevertToSelf();
      v37 = 0;
    }
    v11 = RegQueryInfoKeyW(
            phkResult,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &cValues,
            &cbMaxValueNameLen,
            &cbMaxValueLen,
            0LL,
            0LL);
    if ( v11 )
    {
      if ( v11 > 0 )
        v5 = (unsigned __int16)v11 | 0x80070000;
      else
        v5 = v11;
      goto LABEL_112;
    }
    v53 = operator new(saturated_mul(++cbMaxValueNameLen, 2uLL));
    v12 = v53;
    if ( !v53 )
    {
      v5 = -2147024882;
LABEL_112:
      RegCloseKey(phkResult);
      goto LABEL_113;
    }
    v51 = (BYTE *)operator new(cbMaxValueLen);
    v13 = v51;
    if ( !v51 )
    {
      v5 = -2147024882;
      operator delete(v12);
      RegCloseKey(phkResult);
LABEL_113:
      phkResult = 0LL;
      goto LABEL_6;
    }
    v14 = 0;
    v44 = 0;
    while ( v14 < cValues )
    {
      cchName[0] = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
      v15 = RegEnumValueW(phkResult, v14, (LPWSTR)v12, cchName, 0LL, 0LL, v13, &cbData);
      if ( v15 == 259 )
        break;
      if ( v15 )
      {
        if ( v15 > 0 )
          v5 = (unsigned __int16)v15 | 0x80070000;
        else
          v5 = v15;
        break;
      }
      v16 = operator new(0x38uLL);
      v17 = v16;
      if ( !v16 )
      {
        v5 = -2147024882;
        break;
      }
      v16[6] = *((_QWORD *)v2 + 3);
      *((_DWORD *)v16 + 4) = _wtoi((const wchar_t *)v12);
      v5 = 0;
      *(GUID *)v17 = pclsid;
      *(_OWORD *)(v17 + 3) = *(_OWORD *)v13;
      v17[5] = *((_QWORD *)v13 + 2);
      switch ( *((_WORD *)v17 + 12) )
      {
        case 8:
          v36 = SysAllocString((const OLECHAR *)&v13[v17[4]]);
          v17[4] = v36;
          if ( !v36 )
          {
            v5 = -2147024882;
LABEL_96:
            if ( v5 )
              goto LABEL_60;
          }
          break;
        case 0x1E:
          v33 = (const char *)&v13[v17[4]];
          v5 = StringCbLengthA(v33, v18, &v52);
          if ( v5 )
            goto LABEL_60;
          v34 = (char *)CoTaskMemAlloc(v52);
          if ( !v34 )
            goto LABEL_86;
          v35 = v52;
          v17[4] = v34;
          StringCchCopyA(v34, v35, v33);
          break;
        case 0x1F:
          v30 = (const unsigned __int16 *)&v13[v17[4]];
          v5 = StringCbLengthW(v30, 0x7FFFFFFFuLL, &cb);
          if ( v5 )
            goto LABEL_60;
          v31 = (unsigned __int16 *)CoTaskMemAlloc(cb);
          if ( !v31 )
          {
LABEL_86:
            v5 = -2147024882;
            goto LABEL_60;
          }
          v32 = cb;
          v17[4] = v31;
          v5 = StringCbCopyW(v31, v32, v30);
          if ( v5 )
            goto LABEL_96;
          break;
        case 0x41:
        case 0x46:
          v28 = (char *)CoTaskMemAlloc(*((unsigned int *)v17 + 8));
          if ( !v28 )
            goto LABEL_86;
          v29 = *((unsigned int *)v17 + 8);
          v17[5] = v28;
          memcpy_0(v28, &v13[(_QWORD)v28], v29);
          break;
        case 0x2004:
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x6Eu,
              (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
            v19 = WPP_GLOBAL_Control;
          }
          v20 = cbData - 24;
          v21 = ((unsigned __int64)cbData - 24) >> 2;
          if ( v19 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_BYTE *)v19 + 28) & 8) != 0
            && *((_BYTE *)v19 + 25) >= 4u )
          {
            WPP_SF_q(*((_QWORD *)v19 + 2), 111LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, cbData - 24LL);
            v19 = WPP_GLOBAL_Control;
          }
          if ( (v20 & 3) != 0 )
          {
            if ( v19 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
              && (*((_BYTE *)v19 + 28) & 8) != 0
              && *((_BYTE *)v19 + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)v19 + 2), 0x70u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
            }
          }
          else
          {
            v22 = (float *)&v13[v17[4]];
            psa = 0LL;
            v5 = ATL::CComSafeArray<float,4>::Create(&psa, (unsigned int)v21);
            if ( v5 )
            {
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x71u,
                  (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
              }
LABEL_67:
              ATL::CComSafeArray<float,4>::Destroy(&psa);
              v2 = v41;
              goto LABEL_96;
            }
            v23 = 0;
            if ( v21 )
            {
              while ( 1 )
              {
                v24 = *v22;
                v49 = *v22;
                if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_dg(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    114LL,
                    &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
                    v23,
                    v24);
                }
                v25 = ATL::CComSafeArray<float,4>::SetAt(&psa, v23, &v49);
                v5 = v25;
                if ( v25 )
                  break;
                ++v23;
                ++v22;
                if ( v23 >= v21 )
                  goto LABEL_75;
              }
              v27 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
              {
                if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    115LL,
                    &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
                    v25,
                    v23);
                  v27 = WPP_GLOBAL_Control;
                }
                if ( v27 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                  && (*((_BYTE *)v27 + 28) & 8) != 0
                  && *((_BYTE *)v27 + 25) >= 4u )
                {
                  WPP_SF_D(
                    *((_QWORD *)v27 + 2),
                    116LL,
                    &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
                    (unsigned int)v5);
                }
              }
              goto LABEL_67;
            }
LABEL_75:
            v26 = psa;
            SafeArrayUnlock(psa);
            psa = 0LL;
            v17[4] = v26;
            ATL::CComSafeArray<float,4>::Destroy(&psa);
          }
          v2 = v41;
          break;
      }
      *((_QWORD *)v2 + 3) = v17;
LABEL_60:
      v13 = v51;
      v14 = v44 + 1;
      v12 = v53;
      v44 = v14;
    }
    operator delete(v13);
    operator delete(v12);
    RegCloseKey(phkResult);
    phkResult = 0LL;
    if ( v5 < 0 )
      goto LABEL_6;
    ++v46;
    cchName[0] = 100;
    v5 = RegEnumKeyExW(hKey, v46, Name, cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
    if ( v5 )
      break;
    v1 = v37;
  }
LABEL_4:
  if ( v5 != 259 )
  {
    if ( v5 <= 0 )
      goto LABEL_6;
    v5 = (unsigned __int16)v5;
LABEL_106:
    v5 |= 0x80070000;
    goto LABEL_6;
  }
  v5 = 0;
LABEL_6:
  LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(hKey);
  phkResult = 0LL;
  if ( v37 )
    RpcRevertToSelf();
  if ( v5 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      117LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)v5);
  }
  return (unsigned int)v5;
}
