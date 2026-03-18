/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00CDD24
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rbx
  int RegistryValues; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rdi
  int v28; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v37[3]; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v38[14]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  const wchar_t *v41; // [rsp+C0h] [rbp-40h]
  _DWORD *v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+D0h] [rbp-30h]
  _DWORD *v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+F0h] [rbp-10h]
  const wchar_t *v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  char *v51; // [rsp+110h] [rbp+10h]
  int v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  _BYTE v56[32]; // [rsp+138h] [rbp+38h] BYREF

  v4 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v36 = 2;
    memset(v38, 0, sizeof(v38));
    v38[0] = 0LL;
    v38[2] = L"BadMonitorModeDiag";
    LODWORD(v38[1]) = 288;
    v38[3] = &v36;
    LODWORD(v38[4]) = 0x4000000;
    v38[5] = 0LL;
    LODWORD(v38[6]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v38, 0LL, 0LL);
    v7 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v36;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdDmmEvent(v8);
      if ( (_DWORD)v7 != -1073741772 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
        WdLogEvent5_WdAssertion(v30);
      }
      this = 2LL;
      v36 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v31 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v31 + 24) = v36;
      WdLogEvent5_WdError(v31);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v36 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 176LL),
              L"AllowUnspecifiedVSync",
              &v36,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v36 != 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v11);
    WdLogEvent5_WdDmmEvent(v14);
  }
  v36 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 176LL),
              L"AllowUnspecifiedHSync",
              &v36,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v36 != 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v16);
    WdLogEvent5_WdDmmEvent(v19);
  }
  v36 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 176LL),
              L"AllowUnspecifiedPixelRate",
              &v36,
              4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v36 != 0;
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v21);
    WdLogEvent5_WdDmmEvent(v24);
  }
  v36 = 0;
  if ( !*((_QWORD *)v4 + 1) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) + 176LL),
              L"ForceDualViewBehavior",
              &v36,
              4LL) >= 0 )
  {
    *((_BYTE *)v4 + 465) = v36 != 0;
  }
  else
  {
    v26 = WdLogNewEntry5_WdDmmEvent(v25);
    WdLogEvent5_WdDmmEvent(v26);
    *((_BYTE *)v4 + 465) = 0;
  }
  v45 = 4;
  v27 = (_DWORD *)((char *)v4 + 488);
  v52 = 4;
  v43 = 67108868;
  v41 = L"RapidHPDTime";
  v50 = 67108868;
  v42 = v37;
  v37[0] = 1000;
  v44 = v37;
  *((_DWORD *)v4 + 122) = 5;
  v48 = L"RapidHPDThresholdCount";
  v39 = 0LL;
  v40 = 288;
  v46 = 0LL;
  v47 = 288;
  v49 = (char *)v4 + 488;
  v51 = (char *)v4 + 488;
  v53 = 0LL;
  v54 = 0;
  v55 = 0LL;
  memset(v56, 0, sizeof(v56));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL);
  v28 = v37[0];
  if ( v37[0] > 0xEA60u )
    v28 = 60000;
  v37[0] = v28;
  *((_DWORD *)v4 + 121) = 10000 * v28 / KeQueryTimeIncrement();
  if ( *v27 == 1 )
  {
    *v27 = 0;
  }
  else if ( *v27 > 0x20u )
  {
    *v27 = 32;
  }
  return 0LL;
}
