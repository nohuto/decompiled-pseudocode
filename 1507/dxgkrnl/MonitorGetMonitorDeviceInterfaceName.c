/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C00ABC40
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlStringCchCopyUnicodeString @ 0x1C000A438 (RtlStringCchCopyUnicodeString.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(DXGADAPTER *this, __int64 a2, __int64 a3, wchar_t *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGMONITOR *v17; // rbx
  size_t v18; // rdx
  NTSTATUS v19; // eax
  struct _ERESOURCE *v20; // rcx
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 || !a4 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 247) + 96LL);
  if ( !v12 )
  {
    v25 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v32 = 0LL;
  LOBYTE(v10) = 1;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v5, v10, (ULONG **)&v32) < 0 )
    return 3221225664LL;
  v17 = v32;
  if ( !v32 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v26);
    v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
  v19 = RtlStringCchCopyUnicodeString(a4, v18, (PCUNICODE_STRING)((char *)v17 + 72));
  v20 = (struct _ERESOURCE *)((char *)v17 + 240);
  v21 = v19;
  ExReleaseResourceLite(v20);
  KeLeaveCriticalRegion();
  return v21;
}
