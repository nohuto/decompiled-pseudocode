/*
 * XREFs of ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40
 * Callers:
 *     ?IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800111D4 (-IsWarpAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006A454 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18006F600 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006F794 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180071260 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800712FC (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800717A8 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180071B60 (-UnusableNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180071DF0 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007256C (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180072820 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Commit@CChannel@@QEAAJXZ @ 0x1800A03A8 (-Commit@CChannel@@QEAAJXZ.c)
 *     ?DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z @ 0x1800A056C (-DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x1800A1208 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800A1308 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?FlushChannelHandles@CHandleTable@@QEAAXI@Z @ 0x1800A1520 (-FlushChannelHandles@CHandleTable@@QEAAXI@Z.c)
 *     ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A3B00 (-PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A3F70 (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A4D70 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?MilResource_DuplicateHandleOnTarget@@YAJIIW4MIL_RESOURCE_TYPE@@PEAUMIL_CHANNEL__@@PEAI@Z @ 0x1800B1B80 (-MilResource_DuplicateHandleOnTarget@@YAJIIW4MIL_RESOURCE_TYPE@@PEAUMIL_CHANNEL__@@PEAI@Z.c)
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUMIL_CHANNEL__@@@Z @ 0x1800B4A70 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUMIL_CHANNEL__@@@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@QEAAXJ@Z @ 0x1800FF8FC (-OnConnectionLostNotification@CConnection@@QEAAXJ@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1800FFBC8 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 *     _lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_ @ 0x1801055E0 (_lambda_5783652f0dd56a35b382cf81fdc37911_--_helper_func_cdecl_.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180105640 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180105788 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1801059B8 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180138684 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180144A60 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180144B30 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CCriticalSection>::~CGuard<CCriticalSection>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
