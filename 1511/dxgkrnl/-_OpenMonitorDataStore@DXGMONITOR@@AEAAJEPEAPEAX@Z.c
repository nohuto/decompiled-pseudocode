/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00E1010
 * Callers:
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E064C (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E0838 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C00E09C4 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0FB8 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0188CB4 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0188D4C (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0188DE4 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0188E84 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E434C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(UNICODE_STRING *this, char a2, void **a3)
{
  unsigned __int16 Length; // ax
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  if ( LODWORD(this[23].Buffer) != 1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  Length = this[28].Length;
  if ( Length )
  {
    Destination.Length = 0;
    Destination.MaximumLength = Length + 170;
    v7 = (wchar_t *)operator new[]((unsigned __int16)(Length + 170), 0x4D677844u, PagedPool);
    Destination.Buffer = v7;
    if ( v7 )
    {
      memset(v7, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, this + 28);
      v12 = a2 != 0 ? 0xFFF2FFDA : 0;
      v15 = DxgkOpenRegistrySubkey(a3, v12 + 983103, 0LL, &Destination);
      if ( v15 == -1073741772
        && (a2 || (v15 = DxgkCreateRegistrySubkey(a3, v12 + 983103, 0LL, &Destination), v15 == -1073741772)) )
      {
        v18 = WdLogNewEntry5_WdTrace(v14, v13, v16, v17);
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = -1073741772LL;
      }
      else if ( v15 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v23 + 32) = v15;
        *(_QWORD *)(v23 + 24) = this;
        WdLogEvent5_WdError(v23);
      }
      operator delete(Destination.Buffer);
      return (unsigned int)v15;
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = this;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v21);
    return 3221225659LL;
  }
}
