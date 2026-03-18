/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7778 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0010170 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     MonitorCreateMonitorManager @ 0x1C00F5160 (MonitorCreateMonitorManager.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00F6228 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C00F6B3C (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C00F71F0 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F7678 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00F7D14 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0168D94 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C01696C0 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
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
  __int64 v14; // rcx
  int OutputDuplManager; // ebx
  int RegistryValues; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  unsigned int i; // r10d
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rdi
  struct DXGGLOBAL *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v37; // rcx
  char *v38; // rbx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 *v41; // rsi
  struct _LUID v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct OUTPUTDUPL_MGR_INDIRECT *v46; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  struct DXGGLOBAL *v51; // rax
  int v52; // eax
  _BYTE v53[8]; // [rsp+30h] [rbp-49h] BYREF
  char v54; // [rsp+38h] [rbp-41h]
  _QWORD v55[18]; // [rsp+40h] [rbp-39h] BYREF
  int v56; // [rsp+E0h] [rbp+67h] BYREF
  struct _LUID v57; // [rsp+E8h] [rbp+6Fh] BYREF
  struct _LUID v58; // [rsp+F0h] [rbp+77h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 1008LL);
  *((_DWORD *)this + 20) = v2;
  v3 = (unsigned int)v2;
  v4 = 1016 * v2;
  if ( !is_mul_ok(v2, 0x3F8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (char *)operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  if ( v7 )
  {
    v11 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      v7 + 8,
      1016LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 14) = v11;
  if ( !v11 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    OutputDuplManager = -1073741801;
    v39[3] = *((unsigned int *)this + 20);
    v39[4] = *((_QWORD *)this + 2);
    v39[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v39);
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
    if ( (int)result <= -1071774937 )
      return result;
    v14 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v14 <= 0x3FE1FCD5 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x100) != 0 )
    {
      v41 = (__int64 *)((char *)this + 104);
      v42 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 71);
      v43 = *((_QWORD *)this + 2);
      v58 = v42;
      v57 = *(struct _LUID *)(v43 + 268);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 20),
                            0LL,
                            &v58,
                            &v57,
                            (struct OUTPUTDUPL_MGR **)this + 13);
      if ( OutputDuplManager < 0 )
        return (unsigned int)OutputDuplManager;
      v45 = *v41;
      v46 = (struct OUTPUTDUPL_MGR_INDIRECT *)(*v41 - 24);
      if ( !v45 )
        v46 = 0LL;
      Global = DXGGLOBAL::GetGlobal(v44);
      DXGGLOBAL::AddIndirectOutputDuplMgr(Global, v46);
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
      v56 = 1;
      memset(v55, 0, 0x70uLL);
      v55[0] = 0LL;
      v55[2] = L"ModeListCaching";
      LODWORD(v55[1]) = 288;
      v55[3] = &v56;
      LODWORD(v55[4]) = 0x4000000;
      v55[5] = 0LL;
      LODWORD(v55[6]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v55, 0LL, 0LL);
      v20 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v23 = v56;
      }
      else
      {
        v21 = WdLogNewEntry5_WdEvent(v18);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdEvent(v21);
        if ( (_DWORD)v20 != -1073741772 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v48 + 24) = 3652LL;
          WdLogEvent5_WdAssertion(v48);
        }
        v23 = 1;
        LODWORD(v20) = 0;
        v56 = 1;
      }
      v24 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 132) = v23 == 1;
      if ( (*(_DWORD *)(v24 + 300) & 0x400) != 0 )
      {
        if ( g_IsMobileCore )
        {
          *(_WORD *)((char *)this + 133) = 257;
        }
        else
        {
          v57.LowPart = (*(unsigned __int8 *)(v24 + 2032) >> 1) & 1;
          memset(v55, 0, 0x70uLL);
          v55[0] = 0LL;
          v55[2] = L"ForceEnableDWMClone";
          LODWORD(v55[1]) = 288;
          v55[3] = &v57;
          LODWORD(v55[4]) = 67108868;
          v55[5] = &v57;
          LODWORD(v55[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v55, 0LL, 0LL);
          v25 = v57.LowPart == 0;
          *((_BYTE *)this + 133) = v57.LowPart != 0;
          *((_BYTE *)this + 134) = !v25;
        }
      }
      else
      {
        if ( g_IsMobileCore )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v17, v19);
          v49[3] = 275LL;
          v49[4] = 27LL;
          v49[5] = *((_QWORD *)this + 2);
          v49[6] = 0LL;
          v49[7] = 0LL;
          WdLogEvent5_WdCriticalError(v49);
        }
        else
        {
          if ( (*(_DWORD *)(v24 + 2032) & 2) != 0 )
          {
LABEL_46:
            v40 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            OutputDuplManager = -1073741735;
            v40[3] = *(int *)(*((_QWORD *)this + 2) + 272LL);
            v40[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
            v40[5] = -1073741735LL;
            WdLogEvent5_WdError(v40);
            return (unsigned int)OutputDuplManager;
          }
          v50 = WdLogNewEntry5_WdEvent(v24);
          *(_QWORD *)(v50 + 24) = *(int *)(*((_QWORD *)this + 2) + 272LL);
          *(_QWORD *)(v50 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 268LL);
          WdLogEvent5_WdEvent(v50);
        }
        *(_WORD *)((char *)this + 133) = 0;
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v24 + 192), L"EnableVirtualTopologySupport", (char *)&v57, 4u, 2u) < 0
        || !v57.LowPart )
      {
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 134) = 1;
        v51 = DXGGLOBAL::GetGlobal(v24);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v51 + 792));
LABEL_26:
        v26 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v26 + 2136) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v26 + 560) != 0LL);
          v37 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 32) = DodPresent;
          if ( !DodPresent )
            LODWORD(v20) = -1073741801;
          if ( (*(_DWORD *)(v37 + 300) & 0x20) != 0 || *(_DWORD *)(v37 + 296) == 4 )
          {
            v38 = (char *)this + 244;
            *((_DWORD *)this + 61) = 0;
          }
          else
          {
            v57 = 0LL;
            if ( *(_QWORD *)(v37 + 1440)
              && (*(int (__fastcall **)(_QWORD, struct _LUID *))(v37 + 1440))(*(_QWORD *)(v37 + 1368), &v57) >= 0 )
            {
              v52 = BYTE1(v57.LowPart);
              v38 = (char *)this + 244;
              *((_DWORD *)this + 61) = BYTE1(v57.LowPart);
              *((_DWORD *)this + 62) = v52;
            }
            else
            {
              v38 = (char *)this + 244;
              *((_DWORD *)this + 61) = 1;
            }
          }
          memset(v55, 0, 0x70uLL);
          v55[0] = 0LL;
          v55[2] = L"DODPreferredPresentMoveRegeionsOverride";
          LODWORD(v55[1]) = 288;
          v55[3] = v38;
          LODWORD(v55[4]) = 67108868;
          v55[5] = v38;
          LODWORD(v55[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v55, 0LL, 0LL);
          v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 192LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v24, 3);
        }
        if ( *((_QWORD *)this + 32) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 20);
                *(_QWORD *)(v24 + v30 + 224) = *(_QWORD *)(v29 + *((_QWORD *)this + 14) + 832) )
          {
            v28 = i++;
            v29 = 1016 * v28;
            v30 = 2632 * v28;
            v24 = *(_QWORD *)(*((_QWORD *)this + 32) + 8LL);
          }
        }
        v31 = *((unsigned __int8 *)this + 134);
        v32 = *((_QWORD *)this + 2);
        v33 = DXGGLOBAL::GetGlobal(v24);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v53, (struct DXGGLOBAL *)((char *)v33 + 792));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
        if ( DXGADAPTERSOURCEHASH::AddEntry(
               (struct DXGGLOBAL *)((char *)v33 + 792),
               (const struct _LUID *)(v32 + 268),
               0,
               v31) )
        {
          if ( v54 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
        }
        else
        {
          if ( v54 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
          v35 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v35 + 24) = 3866LL;
          WdLogEvent5_WdAssertion(v35);
        }
        return (unsigned int)v20;
      }
      goto LABEL_46;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 1016LL * v12), this, v12);
    if ( (int)result < 0 )
      return result;
    if ( ++v12 >= *((_DWORD *)this + 20) )
      goto LABEL_11;
  }
}
