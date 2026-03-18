/*
 * XREFs of memmove @ 0x1C0010940
 * Callers:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0008A84 (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C0008BBC (EDIDV1_ObtainMonitorSerialNumber.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C0008C90 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000AA60 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     DpiGetRegistryPathFromPDO @ 0x1C000D4B0 (DpiGetRegistryPathFromPDO.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C000F980 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C0024048 (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastInterfaceChange @ 0x1C0024520 (DpiMiracastInterfaceChange.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C0026260 (DpiProcessMiracastNotifyInterrupt.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002BB3C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C002BD68 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?Serialize@DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA_KPEAU_DMM_DISPMODECHANGEREQUEST_SERIALIZATION@@@Z @ 0x1C002BE60 (-Serialize@DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA_KPEAU_DMM_DISPMODECHANGEREQUEST_SERIALIZATION@@.c)
 *     ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C808 (-Initialize@-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00607A4 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C0060978 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@P.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0060D88 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C006766C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C006771C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C006775C (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00678D0 (DxgkCreateContextVirtual.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkCreateContext @ 0x1C00689F0 (DxgkCreateContext.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C006991C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0069A30 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C006B16C (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B52C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C007F320 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXH@Z @ 0x1C007F690 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00879B0 (-DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089988 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089CE8 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0094220 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0094FB8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C009AD10 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     _CcdReadRegistryValues @ 0x1C009C5C0 (_CcdReadRegistryValues.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00A6E90 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00A7020 (DxgkGetDisplayModeList.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00A7870 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00A7BD0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B18A0 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00BA7FC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00BB6D0 (DxgkRetrieveStringFromRegistry.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C00C5290 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     ParseResolutionKeyName @ 0x1C00C7E1C (ParseResolutionKeyName.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00CDC8C (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00D16FC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D3468 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00D3F20 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00D590C (SeSddlSecurityDescriptorFromSDDL.c)
 *     DpiPdoHandleQueryId @ 0x1C00D6720 (DpiPdoHandleQueryId.c)
 *     DpiFdoHandleStartDevice @ 0x1C00D7A80 (DpiFdoHandleStartDevice.c)
 *     DpiInitializeEx @ 0x1C00D9938 (DpiInitializeEx.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00DADF0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiQuerySystemFirmwareTables @ 0x1C00DC730 (DpiQuerySystemFirmwareTables.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00DD620 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoHandleFilterResources @ 0x1C00DD800 (DpiFdoHandleFilterResources.c)
 *     DpAcquirePostDisplayOwnership @ 0x1C00DEA20 (DpAcquirePostDisplayOwnership.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1C00DF010 (DpiPdoHandleQueryDeviceText.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C01258F0 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0126628 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     DxgkNetDispGetNextChunkInfo @ 0x1C012A120 (DxgkNetDispGetNextChunkInfo.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C012A470 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C012A660 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C012AA10 (DxgkNetDispStopMiracastDisplayDevice.c)
 *     DxgkPollDisplayChildren @ 0x1C012AED0 (DxgkPollDisplayChildren.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C012E820 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0137DA0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0138250 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkPinDirectFlipResources @ 0x1C0138A10 (DxgkPinDirectFlipResources.c)
 *     DxgkSetGammaRamp @ 0x1C0138D70 (DxgkSetGammaRamp.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C0139190 (DxgkUnpinDirectFlipResources.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C013973C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     _CombineModeList @ 0x1C013B6E0 (_CombineModeList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C013C3E0 (DxgkInvalidateActiveVidPn.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C013FFE0 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0142498 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0142BE4 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 *     DxgkCreateOverlay @ 0x1C0142F50 (DxgkCreateOverlay.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C0145BDC (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0146350 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     DxgkOutputDuplPresent @ 0x1C01495F0 (DxgkOutputDuplPresent.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C014C184 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@H@Z @ 0x1C014C488 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C014D020 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C014F8D0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C015354C (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0153E6C (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C0155C10 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C0155DD0 (DxgkOutputDuplGetPointerShapeData.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0156878 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C0157710 (-GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0158B18 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0159298 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C015BC40 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C015BF10 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C015CF74 (-ConvertToPresentMultiPlaneOverlay@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEA.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C0161C7C (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0162BEC (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     DxgkCreateSwapChain @ 0x1C01634A0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0163BD0 (DxgkOpenSwapChain.c)
 *     SepSddlAddAceToAcl @ 0x1C0165460 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C0165770 (CmRegUtilUcValueSetUcString.c)
 *     KappxParsePackageFullNameFromToken @ 0x1C01658D8 (KappxParsePackageFullNameFromToken.c)
 *     KappxParseString @ 0x1C01659F4 (KappxParseString.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C0166250 (DpGetPostDisplayInfoPlusEdid.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastIoCompleteWork @ 0x1C0169DB0 (DpiMiracastIoCompleteWork.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C0169E20 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C016AE50 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C016D1F0 (DpiAcpiEvalAcpiMethodEx.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C016F6B0 (DpiLdaHandleQueryDeviceRelations.c)
 *     DpiTestGetPossibleBrightness @ 0x1C0170C10 (DpiTestGetPossibleBrightness.c)
 *     DpiTestProcessRegKey @ 0x1C0170C60 (DpiTestProcessRegKey.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0174308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017C8F8 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Copy@CCD_TOPOLOGY@@QEAAJPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017D478 (-Copy@CCD_TOPOLOGY@@QEAAJPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C017D96C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ParseFreqRangeValue @ 0x1C01842D8 (ParseFreqRangeValue.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
