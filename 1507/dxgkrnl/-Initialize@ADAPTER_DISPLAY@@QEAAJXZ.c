/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00D1E28 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C000F590 (DpiSetSchedulerCallbackState.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C00C7D6C (MonitorCreateMonitorManager.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C00D0818 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00D0DE8 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z @ 0x1C00D1904 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D19F8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00D2844 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C013EE34 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int OutputDuplManager; // ebx
  int RegistryValues; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int i; // r10d
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rdi
  struct DXGGLOBAL *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v45; // rcx
  char *v46; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 *v49; // rsi
  struct _LUID v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  struct OUTPUTDUPL_MGR_INDIRECT *v57; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _BYTE v61[8]; // [rsp+30h] [rbp-49h] BYREF
  char v62; // [rsp+38h] [rbp-41h]
  _QWORD v63[18]; // [rsp+40h] [rbp-39h] BYREF
  int v64; // [rsp+E0h] [rbp+67h] BYREF
  struct _LUID v65; // [rsp+E8h] [rbp+6Fh] BYREF
  struct _LUID v66; // [rsp+F0h] [rbp+77h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 912LL);
  *((_DWORD *)this + 20) = v2;
  v3 = v2;
  v4 = 1008 * v2;
  if ( !is_mul_ok(v2, 0x3F0uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v11 = v7 + 8;
    *(_DWORD *)v7 = v3;
    `vector constructor iterator'(v7 + 8, 1008LL, v3, (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 14) = v11;
  if ( !v11 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    OutputDuplManager = -1073741801;
    v47[3] = *((unsigned int *)this + 20);
    v47[4] = *((_QWORD *)this + 2);
    v47[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v47);
    return (unsigned int)OutputDuplManager;
  }
  v12 = 0;
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this, (MONITOR_MGR **)this + 12, v9, v10);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 11);
    if ( (int)result <= -1071774937 || (unsigned int)(result + 1071774934) <= 0x3FE1FCD5 )
      return result;
    v17 = *(unsigned int *)(*((_QWORD *)this + 2) + 284LL);
    if ( (v17 & 0x80u) != 0LL )
    {
      v49 = (__int64 *)((char *)this + 104);
      v50 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v14, v15, v16) + 72);
      v51 = *((_QWORD *)this + 2);
      v66 = v50;
      v65 = *(struct _LUID *)(v51 + 252);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v66,
                            &v65,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v56 = *v49;
      v57 = (struct OUTPUTDUPL_MGR_INDIRECT *)(*v49 - 24);
      if ( !v56 )
        v57 = 0LL;
      Global = DXGGLOBAL::GetGlobal(v53, v52, v54, v55);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, v57);
    }
    else
    {
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            this,
                            0LL,
                            0LL,
                            (struct OUTPUTDUPL_MGR **)this + 13);
    }
    if ( OutputDuplManager >= 0 )
    {
      v64 = 1;
      memset(v63, 0, 0x70uLL);
      v63[0] = 0LL;
      v63[2] = L"ModeListCaching";
      LODWORD(v63[1]) = 288;
      v63[3] = &v64;
      LODWORD(v63[4]) = 0x4000000;
      v63[5] = 0LL;
      LODWORD(v63[6]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v63, 0LL, 0LL);
      v24 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v27 = v64;
      }
      else
      {
        v25 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
        *(_QWORD *)(v25 + 24) = v24;
        WdLogEvent5_WdEvent(v25);
        if ( (_DWORD)v24 != -1073741772 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v26, v20, v22, v23);
          *(_QWORD *)(v59 + 24) = 17811LL;
          WdLogEvent5_WdAssertion(v59);
        }
        v27 = 1;
        LODWORD(v24) = 0;
        v64 = 1;
      }
      v28 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 132) = v27 == 1;
      if ( (*(_DWORD *)(v28 + 284) & 0x200) != 0 )
      {
        v65.LowPart = (*(unsigned __int8 *)(v28 + 1888) >> 1) & 1;
        memset(v63, 0, 0x70uLL);
        v63[0] = 0LL;
        v63[2] = L"ForceEnableDWMClone";
        LODWORD(v63[1]) = 288;
        v63[3] = &v65;
        LODWORD(v63[4]) = 67108868;
        v63[5] = &v65;
        LODWORD(v63[6]) = 4;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v63, 0LL, 0LL);
        *((_BYTE *)this + 133) = v65.LowPart != 0;
LABEL_23:
        v33 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v33 + 1984) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v33 + 544) != 0LL);
          v45 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 31) = DodPresent;
          if ( !DodPresent )
            LODWORD(v24) = -1073741801;
          if ( (*(_DWORD *)(v45 + 284) & 0x10) != 0 || *(_DWORD *)(v45 + 280) == 4 )
          {
            v46 = (char *)this + 244;
            *((_DWORD *)this + 61) = 0;
          }
          else
          {
            v46 = (char *)this + 244;
            *((_DWORD *)this + 61) = 1;
          }
          memset(v63, 0, 0x70uLL);
          v63[0] = 0LL;
          LODWORD(v63[1]) = 288;
          v63[2] = L"DODPreferredPresentMoveRegeionsOverride";
          v63[3] = v46;
          LODWORD(v63[4]) = 67108868;
          v63[5] = v46;
          LODWORD(v63[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v63, 0LL, 0LL);
          v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 176LL);
          v29 = *(_QWORD *)(*(_QWORD *)(v30 + 64) + 40LL);
          if ( *(_DWORD *)(v29 + 28) >= 0x3007u )
            DpiSetSchedulerCallbackState(v30, 3);
        }
        if ( *((_QWORD *)this + 31) )
        {
          for ( i = 0; i < *((_DWORD *)this + 20); *(_QWORD *)(2384 * v35 + v30 + 128) = *(_QWORD *)(1008 * v35 + v29 + 824) )
          {
            v29 = *((_QWORD *)this + 14);
            v35 = i++;
            v31 = 2384 * v35;
            v32 = 1008 * v35;
            v30 = *(_QWORD *)(*((_QWORD *)this + 31) + 8LL);
          }
        }
        v36 = *((unsigned __int8 *)this + 133);
        v37 = *((_QWORD *)this + 2);
        v38 = DXGGLOBAL::GetGlobal(v30, v29, v31, v32);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, (struct DXGGLOBAL *)((char *)v38 + 808));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
        if ( DXGADAPTERSOURCEHASH::AddEntry(
               (struct DXGGLOBAL *)((char *)v38 + 808),
               (struct _LUID *)(v37 + 252),
               0,
               v36) )
        {
          if ( v62 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
        }
        else
        {
          if ( v62 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
          v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
          *(_QWORD *)(v43 + 24) = 17976LL;
          WdLogEvent5_WdAssertion(v43);
        }
        return (unsigned int)v24;
      }
      if ( (*(_DWORD *)(v28 + 1888) & 2) == 0 )
      {
        v60 = WdLogNewEntry5_WdEvent(v28, v20, v22, v23);
        *(_QWORD *)(v60 + 24) = (int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2) + 252LL));
        *(_QWORD *)(v60 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 252LL);
        WdLogEvent5_WdEvent(v60);
        *((_BYTE *)this + 133) = 0;
        goto LABEL_23;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      OutputDuplManager = -1073741735;
      v48[3] = (int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2) + 252LL));
      v48[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 252LL);
      v48[5] = -1073741735LL;
      WdLogEvent5_WdError(v48);
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 1008LL * v12), this, v12);
    if ( (int)result < 0 )
      return result;
    if ( ++v12 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}
