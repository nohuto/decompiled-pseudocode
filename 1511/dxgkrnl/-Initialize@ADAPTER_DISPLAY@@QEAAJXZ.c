/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00DB25C
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DA798 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000B17C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0010450 (DpiSetSchedulerCallbackState.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C00DB6DC (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z @ 0x1C00DB8E4 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEAU_LUID@@IH@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00DB9E8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00DBD08 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C00DE5E4 (MonitorCreateMonitorManager.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00E4D24 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01452AC (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C0145C54 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // rax
  bool v5; // cf
  SIZE_T v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rbx
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rcx
  int OutputDuplManager; // ebx
  int RegistryValues; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rdi
  struct DXGGLOBAL *v31; // rsi
  __int64 v32; // rcx
  unsigned int i; // r10d
  __int64 v34; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  __int64 v38; // rax
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
  __int64 v49; // rax
  struct DXGGLOBAL *v50; // rax
  _BYTE v51[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v52[18]; // [rsp+40h] [rbp-39h] BYREF
  int v53; // [rsp+E0h] [rbp+67h] BYREF
  struct _LUID v54; // [rsp+E8h] [rbp+6Fh] BYREF
  struct _LUID v55; // [rsp+F0h] [rbp+77h] BYREF

  v2 = *(unsigned int *)(*((_QWORD *)this + 2) + 920LL);
  *((_DWORD *)this + 26) = v2;
  v3 = v2;
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
    v12 = v7 + 8;
    *(_DWORD *)v7 = v3;
    `vector constructor iterator'(v7 + 8, 1016LL, v3, (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 17) = v12;
  if ( !v12 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    OutputDuplManager = -1073741801;
    v39[3] = *((unsigned int *)this + 26);
    v39[4] = *((_QWORD *)this + 2);
    v39[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v39);
    return (unsigned int)OutputDuplManager;
  }
  v13 = 0;
  if ( !*((_DWORD *)this + 26) )
  {
LABEL_11:
    result = MonitorCreateMonitorManager(this);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 14);
    if ( (int)result <= -1071774937 )
      return result;
    v15 = (unsigned int)(result + 1071774934);
    if ( (unsigned int)v15 <= 0x3FE1FCD5 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 284LL) & 0x100) != 0 )
    {
      v41 = (__int64 *)((char *)this + 128);
      v42 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 90);
      v43 = *((_QWORD *)this + 2);
      v55 = v42;
      v54 = *(struct _LUID *)(v43 + 252);
      OutputDuplManager = CreateOutputDuplManager(
                            *((_DWORD *)this + 26),
                            0LL,
                            &v55,
                            &v54,
                            (struct OUTPUTDUPL_MGR **)this + 16);
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
                            *((_DWORD *)this + 26),
                            this,
                            0LL,
                            0LL,
                            (struct OUTPUTDUPL_MGR **)this + 16);
    }
    if ( OutputDuplManager >= 0 )
    {
      v53 = 1;
      memset(v52, 0, 0x70uLL);
      v52[0] = 0LL;
      v52[2] = L"ModeListCaching";
      LODWORD(v52[1]) = 288;
      v52[3] = &v53;
      LODWORD(v52[4]) = 0x4000000;
      v52[5] = 0LL;
      LODWORD(v52[6]) = 0;
      RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v52, 0LL, 0LL);
      v22 = RegistryValues;
      if ( RegistryValues >= 0 )
      {
        v25 = v53;
      }
      else
      {
        v23 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
        *(_QWORD *)(v23 + 24) = v22;
        WdLogEvent5_WdEvent(v23);
        if ( (_DWORD)v22 != -1073741772 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v48 + 24) = 18189LL;
          WdLogEvent5_WdAssertion(v48);
        }
        v25 = 1;
        LODWORD(v22) = 0;
        v53 = 1;
      }
      v26 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 156) = v25 == 1;
      if ( (*(_DWORD *)(v26 + 284) & 0x400) != 0 )
      {
        v54.LowPart = (*(unsigned __int8 *)(v26 + 1896) >> 1) & 1;
        memset(v52, 0, 0x70uLL);
        v52[0] = 0LL;
        v52[2] = L"ForceEnableDWMClone";
        LODWORD(v52[1]) = 288;
        v52[3] = &v54;
        LODWORD(v52[4]) = 67108868;
        v52[5] = &v54;
        LODWORD(v52[6]) = 4;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v52, 0LL, 0LL);
        v27 = v54.LowPart == 0;
        *((_BYTE *)this + 157) = v54.LowPart != 0;
        *((_BYTE *)this + 158) = !v27;
      }
      else
      {
        if ( (*(_DWORD *)(v26 + 1896) & 2) != 0 )
        {
LABEL_45:
          v40 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          OutputDuplManager = -1073741735;
          v40[3] = (int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2) + 252LL));
          v40[4] = *(unsigned int *)(*((_QWORD *)this + 2) + 252LL);
          v40[5] = -1073741735LL;
          WdLogEvent5_WdError(v40);
          return (unsigned int)OutputDuplManager;
        }
        v49 = WdLogNewEntry5_WdEvent(v26, v18, v20, v21);
        *(_QWORD *)(v49 + 24) = (int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2) + 252LL));
        *(_QWORD *)(v49 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 252LL);
        WdLogEvent5_WdEvent(v49);
        *(_WORD *)((char *)this + 157) = 0;
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)this + 2)) >= 2000
        || (int)DpiReadPnpRegistryValue(*(_QWORD *)(v26 + 176), L"EnableVirtualTopologySupport", (char *)&v54, 4u, 2u) < 0
        || !v54.LowPart )
      {
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 284LL) & 0x800) != 0 )
      {
        *((_BYTE *)this + 158) = 1;
        v50 = DXGGLOBAL::GetGlobal(v26);
        DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v50 + 952));
LABEL_25:
        v28 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v28 + 1992) )
        {
          DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v28 + 544) != 0LL);
          v36 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 40) = DodPresent;
          if ( !DodPresent )
            LODWORD(v22) = -1073741801;
          if ( (*(_DWORD *)(v36 + 284) & 0x20) != 0 || *(_DWORD *)(v36 + 280) == 4 )
          {
            v37 = (char *)this + 316;
            *((_DWORD *)this + 79) = 0;
          }
          else
          {
            v37 = (char *)this + 316;
            *((_DWORD *)this + 79) = 1;
          }
          memset(v52, 0, 0x70uLL);
          v52[0] = 0LL;
          v52[2] = L"DODPreferredPresentMoveRegeionsOverride";
          LODWORD(v52[1]) = 288;
          v52[3] = v37;
          LODWORD(v52[4]) = 67108868;
          v52[5] = v37;
          LODWORD(v52[6]) = 4;
          RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v52, 0LL, 0LL);
          v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 176LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 64) + 40LL) + 28LL) >= 0x3007u )
            DpiSetSchedulerCallbackState(v26, 3);
        }
        if ( *((_QWORD *)this + 40) )
        {
          for ( i = 0;
                i < *((_DWORD *)this + 26);
                *(_QWORD *)(2408 * v34 + v26 + 128) = *(_QWORD *)(1016 * v34 + *((_QWORD *)this + 17) + 824) )
          {
            v34 = i++;
            v26 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL);
          }
        }
        v29 = *((unsigned __int8 *)this + 158);
        v30 = *((_QWORD *)this + 2);
        v31 = DXGGLOBAL::GetGlobal(v26);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (struct DXGGLOBAL *)((char *)v31 + 952));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
        if ( DXGADAPTERSOURCEHASH::AddEntry(
               (struct DXGGLOBAL *)((char *)v31 + 952),
               (struct _LUID *)(v30 + 252),
               0,
               v29) )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
        }
        else
        {
          if ( v51[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51);
          v38 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v38 + 24) = 18391LL;
          WdLogEvent5_WdAssertion(v38);
        }
        return (unsigned int)v22;
      }
      goto LABEL_45;
    }
    return (unsigned int)OutputDuplManager;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 17) + 1016LL * v13), this, v13);
    if ( (int)result < 0 )
      return result;
    if ( ++v13 >= *((_DWORD *)this + 26) )
      goto LABEL_11;
  }
}
