/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00DEFC0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1C000EB0C (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00DF320 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DF444 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DF4F0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C00DF554 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // si
  char v3; // r15
  char v4; // r12
  int ForcedMode; // eax
  int v6; // r13d
  __int64 RenderAdapterForSession; // r14
  int v8; // esi
  __int64 v10; // r14
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+98h] [rbp+50h]
  char v16; // [rsp+A0h] [rbp+58h] BYREF
  int v17; // [rsp+A8h] [rbp+60h] BYREF

  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v16);
  v1 = 0LL;
  v2 = 0;
  v15 = 0;
  v3 = 0;
  v13 = 0LL;
  v4 = 0;
  ForcedMode = DpiMiracastGetForcedMode();
  v6 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_13;
  if ( ForcedMode != 1 )
  {
    RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
    if ( RenderAdapterForSession )
    {
      v17 = 0;
      v8 = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession, &v17);
      if ( v8 < 0 )
        goto LABEL_14;
      v3 = BYTE1(v17);
      if ( (_BYTE)v17 && (v1 = *(_QWORD *)(RenderAdapterForSession + 2536), v13 = v1, v15 = 1, BYTE1(v17)) || v6 == 2 )
      {
        v2 = 1;
        v4 = 0;
        goto LABEL_10;
      }
      v2 = 0;
      v3 = 0;
    }
  }
  v12 = 0LL;
  if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&v12) >= 0 )
  {
    v10 = v12;
    if ( v12 )
    {
      v11 = 0;
      if ( (int)DpiMiracastQueryMiracastSupportForFDO(v12, &v11) >= 0 )
      {
        v3 = HIBYTE(v11);
        v2 = BYTE2(v11);
        if ( BYTE2(v11) )
        {
          v1 = *(_QWORD *)(v10 + 2536);
          v4 = 1;
          v13 = v1;
        }
      }
      if ( *(_BYTE *)(v10 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v10 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 168));
      KeLeaveCriticalRegion();
    }
  }
LABEL_10:
  if ( byte_1C0056E97 )
  {
    if ( v2 )
      goto LABEL_28;
    if ( !v15 )
      goto LABEL_12;
    v2 = 1;
    v3 = 0;
    v4 = 0;
  }
  if ( !v2 )
  {
LABEL_12:
    xmmword_1C00572B0 = 0uLL;
    dword_1C00572C0 = 0;
LABEL_13:
    v8 = -1073741637;
    goto LABEL_14;
  }
LABEL_28:
  LOBYTE(xmmword_1C00572B0) = v3;
  DWORD1(xmmword_1C00572B0) = dword_1C00571F4;
  BYTE8(xmmword_1C00572B0) = v4;
  *(_QWORD *)((char *)&xmmword_1C00572B0 + 12) = v1;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C00572B0;
    *(_DWORD *)(a1 + 16) = dword_1C00572C0;
  }
  v8 = 0;
LABEL_14:
  if ( v16 )
  {
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)v8;
}
