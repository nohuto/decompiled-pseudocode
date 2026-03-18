/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00B4090 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0169234 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000AA00 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00B4260 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiFreeAdapterInfo @ 0x1C00B431C (DpiFreeAdapterInfo.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00B43A0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C00B43E0 (DpiMiracastGetForcedMode.c)
 *     DpiGetAdapterInfo @ 0x1C00BAC70 (DpiGetAdapterInfo.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // r14
  char v3; // bp
  char v4; // r12
  int ForcedMode; // r13d
  __int64 RenderAdapterForSession; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  int AdapterInfo; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  _WORD v13[124]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+128h] [rbp+10h] BYREF
  int v15; // [rsp+130h] [rbp+18h] BYREF

  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v15);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  ForcedMode = DpiMiracastGetForcedMode();
  if ( ForcedMode == 1 )
    goto LABEL_14;
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( !RenderAdapterForSession )
    goto LABEL_14;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(RenderAdapterForSession + 451) )
    DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
  v7 = *(_QWORD *)(RenderAdapterForSession + 2504);
  if ( !v7 )
  {
LABEL_11:
    if ( *(_BYTE *)(RenderAdapterForSession + 451) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
LABEL_36:
      *(_BYTE *)a1 = v3;
      AdapterInfo = 0;
      *(_DWORD *)(a1 + 4) = dword_1C0046FB4;
      *(_BYTE *)(a1 + 8) = v4;
      goto LABEL_16;
    }
LABEL_14:
    v14 = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&v14) < 0 )
      goto LABEL_15;
    v12 = v14;
    if ( !v14 )
      goto LABEL_15;
    if ( *(_DWORD *)(v14 + 1848) != -1 && *(_WORD *)(v14 + 3280) )
    {
      v2 = 1;
      v3 = *(_BYTE *)(v14 + 1844) & 1;
      v4 = 1;
    }
    if ( *(_BYTE *)(v14 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v14 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
    KeLeaveCriticalRegion();
    if ( !v2 )
    {
LABEL_15:
      AdapterInfo = -1073741637;
      goto LABEL_16;
    }
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(v7 + 1976);
  if ( v8 )
  {
    LODWORD(v14) = *(unsigned __int8 *)(v8 + 133);
    memset(v13, 0, 0xC0uLL);
    AdapterInfo = DpiGetAdapterInfo(*(_QWORD *)(RenderAdapterForSession + 32), v13, 0LL);
    if ( AdapterInfo >= 0 )
    {
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(RenderAdapterForSession + 2504)) >= 2000
        && *(_DWORD *)(RenderAdapterForSession + 1648) >= 2u
        && v13[68] )
      {
        v3 = (_DWORD)v14 != 0;
      }
      DpiFreeAdapterInfo(v13);
      if ( v3 || ForcedMode == 2 )
      {
        v2 = 1;
        v4 = 0;
      }
      goto LABEL_11;
    }
    if ( *(_BYTE *)(RenderAdapterForSession + 451) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 30682LL;
    WdLogEvent5_WdError(v11);
    if ( *(_BYTE *)(RenderAdapterForSession + 451) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    AdapterInfo = -1073741811;
  }
LABEL_16:
  if ( v15 )
  {
    _InterlockedExchange64(&qword_1C0046C88, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  return (unsigned int)AdapterInfo;
}
