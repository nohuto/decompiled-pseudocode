/*
 * XREFs of DpiPollDisplayChildren @ 0x1C0193460
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014DE48 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01697E0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiPollDisplayChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, &byte_1C00FF410, 1u, 0x20u);
  v12 = v7;
  if ( v7 < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = a1;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)v12;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    LODWORD(v12) = -1073741823;
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 32) = -1073741823LL;
LABEL_11:
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 3768) == 1 || *(_DWORD *)(v3 + 284) != 1 )
  {
    LODWORD(v12) = -1073741661;
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 32) = -1073741661LL;
    goto LABEL_11;
  }
  LODWORD(v12) = DpiFdoInvalidateChildRelations(a1, a2, a3);
LABEL_12:
  if ( *(_BYTE *)(v3 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  return (unsigned int)v12;
}
