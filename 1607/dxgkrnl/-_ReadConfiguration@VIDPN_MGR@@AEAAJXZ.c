/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00F3DE4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this)
{
  VIDPN_MGR *v1; // rbx
  int RegistryValues; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v25[3]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v26[14]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+B8h] [rbp-48h]
  const wchar_t *v29; // [rsp+C0h] [rbp-40h]
  _DWORD *v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  _DWORD *v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+F0h] [rbp-10h]
  const wchar_t *v36; // [rsp+F8h] [rbp-8h]
  char *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  char *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  __int64 v41; // [rsp+120h] [rbp+20h]
  int v42; // [rsp+128h] [rbp+28h]
  _BYTE v43[40]; // [rsp+130h] [rbp+30h] BYREF

  v1 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v24 = 2;
    memset(v26, 0, sizeof(v26));
    v26[0] = 0LL;
    v26[2] = L"BadMonitorModeDiag";
    LODWORD(v26[1]) = 288;
    v26[3] = &v24;
    LODWORD(v26[4]) = 0x4000000;
    v26[5] = 0LL;
    LODWORD(v26[6]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v26, 0LL, 0LL);
    v4 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v24;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v3);
      *(_QWORD *)(v5 + 24) = v4;
      WdLogEvent5_WdDmmEvent(v5);
      if ( (_DWORD)v4 != -1073741772 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v18);
      }
      this = 2LL;
      v24 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v19 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v19 + 24) = v24;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedVSync",
              (char *)&v24,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v24 != 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdDmmEvent(v7);
    WdLogEvent5_WdDmmEvent(v8);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedHSync",
              (char *)&v24,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v24 != 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v9);
    WdLogEvent5_WdDmmEvent(v10);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"AllowUnspecifiedPixelRate",
              (char *)&v24,
              4u,
              2u) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v24 != 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v11);
    WdLogEvent5_WdDmmEvent(v12);
  }
  v24 = 0;
  if ( !*((_QWORD *)v1 + 1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 1) + 16LL) + 192LL),
              L"ForceDualViewBehavior",
              (char *)&v24,
              4u,
              2u) >= 0 )
  {
    *((_BYTE *)v1 + 464) = v24 != 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v13);
    WdLogEvent5_WdDmmEvent(v14);
    *((_BYTE *)v1 + 464) = 0;
  }
  v25[0] = 1000;
  v15 = (_DWORD *)((char *)v1 + 488);
  v31 = 67108868;
  v38 = 67108868;
  v29 = L"RapidHPDTime";
  *((_DWORD *)v1 + 122) = 5;
  v30 = v25;
  v27 = 0LL;
  v32 = v25;
  v36 = L"RapidHPDThresholdCount";
  v28 = 288;
  v33 = 4;
  v34 = 0LL;
  v35 = 288;
  v37 = (char *)v1 + 488;
  v39 = (char *)v1 + 488;
  v40 = 4;
  v41 = 0LL;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v27, 0LL, 0LL);
  v16 = v25[0];
  if ( v25[0] > 0xEA60u )
    v16 = 60000;
  v25[0] = v16;
  *((_DWORD *)v1 + 121) = 10000 * v16 / KeQueryTimeIncrement();
  if ( *v15 == 1 )
  {
    *v15 = 0;
  }
  else if ( *v15 > 0x20u )
  {
    *v15 = 32;
  }
  return 0LL;
}
