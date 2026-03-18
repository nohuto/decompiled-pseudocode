/*
 * XREFs of DpiPollDisplayChildren @ 0x1C0167108
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C013F898 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiPollDisplayChildren(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), 0LL, &byte_1C00E2920, 1u, 0x20u);
  v10 = v5;
  if ( v5 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = a1;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v2 + 451) )
    DpiCheckForOutstandingD3Requests(v2);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
  if ( *(_DWORD *)(v2 + 236) != 2 )
  {
    LODWORD(v10) = -1073741823;
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 32) = -1073741823LL;
LABEL_11:
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v2 + 2584) == 1 || *(_DWORD *)(v2 + 248) != 1 )
  {
    LODWORD(v10) = -1073741661;
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 32) = -1073741661LL;
    goto LABEL_11;
  }
  LODWORD(v10) = DpiFdoInvalidateChildRelations(a1, a2);
LABEL_12:
  if ( *(_BYTE *)(v2 + 451) )
    DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), 0LL, 0x20u);
  return (unsigned int)v10;
}
