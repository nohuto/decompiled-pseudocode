/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C00C99CC
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C00DE4E0 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00CA448 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rbx
  char *v7; // rdi
  DXGMONITOR *v8; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v15; // rax
  __int64 v16; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  char **v24; // rcx
  char *v25; // rax
  __int64 v26; // rax

  v6 = this;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = (char *)v6 + 136;
  if ( !a2 )
    goto LABEL_27;
  v8 = *(DXGMONITOR **)v7;
  if ( *(char **)v7 == v7 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v8 != this )
  {
    if ( v7 == (char *)v8 )
      goto LABEL_27;
    v8 = *(DXGMONITOR **)v8;
  }
  this = (DXGMONITOR *)*((unsigned int *)v6 + 28);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v26 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = v6;
    WdLogEvent5_WdError(v26);
    return 3223192368LL;
  }
  v9 = a2->Id + 1;
  if ( (unsigned int)this <= v9 )
  {
LABEL_11:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v6;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v13 = *((_QWORD *)v6 + 16);
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v6 + 15) + 8LL * v9);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
LABEL_19:
    if ( !v13 )
      goto LABEL_11;
  }
  v15 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v17 = v15;
  if ( v15 )
  {
    v15->Id = a2->Id + 1;
    v15->Type = *(_DWORD *)(v13 + 12);
    v15->DataSize = *(_QWORD *)(v13 + 16);
    v15->pData = (void *)(v13 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v13 + 8), &v15->Origin) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = (char **)*((_QWORD *)v7 + 1);
    v25 = (char *)&v17[1];
    *(_QWORD *)&v17[1].Id = v7;
    v17[1].DataSize = (SIZE_T)v24;
    if ( *v24 != v7 )
      __fastfail(3u);
    *v24 = v25;
    *((_QWORD *)v7 + 1) = v25;
    *a3 = v17;
    return 0LL;
  }
  v18 = WdLogNewEntry5_WdError(v16);
  WdLogEvent5_WdError(v18);
  return 3221225495LL;
}
