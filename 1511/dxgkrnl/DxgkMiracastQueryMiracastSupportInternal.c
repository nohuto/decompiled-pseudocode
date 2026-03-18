/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00C9490 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C016D9B4 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000D0F8 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00C9644 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00C96F0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C00C9754 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // bp
  char v3; // si
  char v4; // r15
  int ForcedMode; // r12d
  __int64 RenderAdapterForSession; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r13d
  __int64 v10; // rax
  _WORD *v11; // r8
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v16);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  ForcedMode = DpiMiracastGetForcedMode();
  if ( ForcedMode == 1 )
    goto LABEL_17;
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( !RenderAdapterForSession )
    goto LABEL_17;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(RenderAdapterForSession + 483) )
    DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
  v7 = *(_QWORD *)(RenderAdapterForSession + 2544);
  if ( !v7 )
    goto LABEL_14;
  v8 = *(_QWORD *)(v7 + 1984);
  if ( v8 )
  {
    v9 = *(unsigned __int8 *)(v8 + 158);
    if ( !*(_QWORD *)(v7 + 1992) )
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = 31386LL;
      WdLogEvent5_WdError(v10);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(RenderAdapterForSession + 2544)) >= 2000
      && *(_DWORD *)(RenderAdapterForSession + 1688) >= 2u
      && v11
      && *v11
      && v9 )
    {
      v3 = 1;
    }
    else if ( ForcedMode != 2 )
    {
      goto LABEL_14;
    }
    v2 = 1;
    v4 = 0;
LABEL_14:
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
LABEL_36:
      *(_BYTE *)a1 = v3;
      v12 = 0;
      *(_DWORD *)(a1 + 4) = dword_1C0047034;
      *(_BYTE *)(a1 + 8) = v4;
      goto LABEL_19;
    }
LABEL_17:
    v17 = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&v17) < 0 )
      goto LABEL_18;
    v15 = v17;
    if ( !v17 )
      goto LABEL_18;
    if ( *(_DWORD *)(v17 + 1888) != -1 && *(_WORD *)(v17 + 3344) )
    {
      v2 = 1;
      v3 = *(_BYTE *)(v17 + 1884) & 1;
      v4 = 1;
    }
    if ( *(_BYTE *)(v17 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v17 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v15 + 168));
    KeLeaveCriticalRegion();
    if ( !v2 )
    {
LABEL_18:
      v12 = -1073741637;
      goto LABEL_19;
    }
    goto LABEL_36;
  }
  v14 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v14 + 24) = 31363LL;
  WdLogEvent5_WdError(v14);
  if ( *(_BYTE *)(RenderAdapterForSession + 483) )
    DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
  KeLeaveCriticalRegion();
  v12 = -1073741811;
LABEL_19:
  if ( v16 )
  {
    _InterlockedExchange64(&qword_1C0046D08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return v12;
}
