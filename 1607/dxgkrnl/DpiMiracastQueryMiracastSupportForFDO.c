/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C00DF320
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebp
  DXGADAPTER *v8; // rcx
  int DriverVersion; // eax
  _WORD *v10; // r8
  int v11; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al

  v2 = 0;
  *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(a1 + 483) )
    DpiCheckForOutstandingD3Requests(a1);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 168), 1u);
  v5 = *(_QWORD *)(a1 + 3688);
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)(v5 + 2128);
  if ( v6 )
  {
    v7 = *(unsigned __int8 *)(v6 + 134);
    if ( !*(_QWORD *)(v5 + 2136) )
    {
      v13 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v13 + 24) = 1054LL;
      WdLogEvent5_WdError(v13);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(a1 + 3688)) >= 2000 && v7 )
      *(_BYTE *)a2 = 1;
    DriverVersion = DXGADAPTER::GetDriverVersion(v8);
    if ( DriverVersion >= v11 && *(_DWORD *)(a1 + 2832) >= 2u && v10 && *v10 && v7 )
      *(_BYTE *)(a2 + 1) = 1;
    if ( *(_DWORD *)(a1 + 3032) != -1 && *(_WORD *)(a1 + 4496) )
    {
      v15 = *(_BYTE *)(a1 + 3028) & 1;
      *(_BYTE *)(a2 + 2) = 1;
      *(_BYTE *)(a2 + 3) = v15;
    }
LABEL_15:
    if ( *(_BYTE *)(a1 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
    goto LABEL_17;
  }
  v14 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v14 + 24) = 1031LL;
  WdLogEvent5_WdError(v14);
  if ( *(_BYTE *)(a1 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  v2 = -1073741811;
LABEL_17:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 168));
  KeLeaveCriticalRegion();
  return v2;
}
