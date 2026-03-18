/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C00F1704
 * Callers:
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0D48 (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0F34 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C00F10C0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F16AC (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01B2674 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01B270C (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01B27A4 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C01B2844 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F2F60 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F9C40 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  __int16 v6; // ax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 94) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = *((_WORD *)this + 228);
  if ( v6 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v6 + 170;
    v7 = (wchar_t *)operator new((unsigned __int16)(v6 + 170), 0x4D677844u, PagedPool);
    Destination.Buffer = v7;
    if ( v7 )
    {
      memset(v7, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 456));
      v9 = a2 != 0 ? 0xFFF2FFDA : 0;
      v12 = DxgkOpenRegistrySubkey(a3, v9 + 983103, 0LL, &Destination);
      if ( v12 == -1073741772
        && (a2 || (v12 = DxgkCreateRegistrySubkey(a3, v9 + 983103, 0LL, &Destination), v12 == -1073741772)) )
      {
        v15 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
        *(_QWORD *)(v15 + 24) = this;
        *(_QWORD *)(v15 + 32) = -1073741772LL;
      }
      else if ( v12 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v20 + 32) = v12;
        *(_QWORD *)(v20 + 24) = this;
        WdLogEvent5_WdError(v20);
      }
      operator delete(Destination.Buffer);
      return (unsigned int)v12;
    }
    else
    {
      v19 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdLowResource(v19);
      return 3221225495LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v18);
    return 3221225659LL;
  }
}
