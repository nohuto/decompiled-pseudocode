/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018ADAC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0146F84 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C018A244 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // r14d
  char v10; // si
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rbp
  EDIDCACHE *v13; // rcx
  int EdidForTarget; // esi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v21; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 94) == 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v6 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    WdLogEvent5_WdError(v7);
    return 3221225495LL;
  }
  v9 = *((_DWORD *)this + 7);
  v10 = *((_DWORD *)this + 94) != 1;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL);
  v12 = *(struct DXGADAPTER **)(v11 + 16);
  v13 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 98);
  if ( v13 )
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v13, v12, v9, v10, (unsigned __int8 *const)v6 + 24, &v21);
  else
    EdidForTarget = -1073741801;
  if ( EdidForTarget < 0 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v13);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdDmmEvent(v15);
LABEL_18:
    operator delete(v6);
    return (unsigned int)EdidForTarget;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock(v6 + 3) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v17);
    EdidForTarget = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v21, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v6 + 1));
  *v6 = 0LL;
  *((_DWORD *)v6 + 3) = 1;
  v6[2] = 128LL;
  v18 = operator new[](8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 15) = v18;
  if ( !v18 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    WdLogEvent5_WdError(v20);
    EdidForTarget = -1073741801;
    goto LABEL_18;
  }
  *v18 = 0LL;
  **((_QWORD **)this + 15) = v6;
  result = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 16) = v6;
  return result;
}
