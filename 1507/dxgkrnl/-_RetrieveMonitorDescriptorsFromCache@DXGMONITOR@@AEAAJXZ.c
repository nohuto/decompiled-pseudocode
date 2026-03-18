/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018659C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01414C4 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0185A34 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // r14d
  char v16; // si
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rbp
  EDIDCACHE *v19; // rcx
  int EdidForTarget; // esi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v27; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 94) == 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 28) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 15) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v10 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  v15 = *((_DWORD *)this + 7);
  v16 = *((_DWORD *)this + 94) != 1;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL);
  v18 = *(struct DXGADAPTER **)(v17 + 16);
  v19 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v8, v11, v12) + 80);
  if ( v19 )
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v19, v18, v15, v16, (unsigned __int8 *const)v10 + 24, &v27);
  else
    EdidForTarget = -1073741801;
  if ( EdidForTarget < 0 )
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v19);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdDmmEvent(v21);
LABEL_18:
    operator delete(v10);
    return (unsigned int)EdidForTarget;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock(v10 + 3) < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    WdLogEvent5_WdError(v23);
    EdidForTarget = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v27, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v10 + 1));
  *v10 = 0LL;
  *((_DWORD *)v10 + 3) = 1;
  v10[2] = 128LL;
  v24 = operator new[](8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 15) = v24;
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdError(v25);
    WdLogEvent5_WdError(v26);
    EdidForTarget = -1073741801;
    goto LABEL_18;
  }
  *v24 = 0LL;
  **((_QWORD **)this + 15) = v10;
  result = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 16) = v10;
  return result;
}
