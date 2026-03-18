/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC904
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlStringCchCopyUnicodeString @ 0x1C000C658 (RtlStringCchCopyUnicodeString.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(DXGADAPTER *this, __int64 a2, __int64 a3, wchar_t *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _FAST_MUTEX *v9; // rcx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  size_t v12; // rdx
  NTSTATUS v13; // eax
  struct _ERESOURCE *v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 || !a4 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_QWORD *)this + 248) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 248) + 120LL);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v23 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v9, v5, 1, (ULONG **)&v23) < 0 )
    return 3221225664LL;
  v11 = v23;
  if ( !v23 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v20);
    v22 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v22);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
  v13 = RtlStringCchCopyUnicodeString(a4, v12, (PCUNICODE_STRING)((char *)v11 + 72));
  v14 = (struct _ERESOURCE *)((char *)v11 + 240);
  v15 = v13;
  ExReleaseResourceLite(v14);
  KeLeaveCriticalRegion();
  return v15;
}
