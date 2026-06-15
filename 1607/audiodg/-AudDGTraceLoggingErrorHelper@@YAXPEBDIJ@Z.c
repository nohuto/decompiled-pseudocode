/*
 * XREFs of ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140004DF0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005470 (-DisconnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x140005550 (-StopStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x1400055F0 (-StartStreamGroup@CSystemAudioDeviceSharedBase@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005870 (-PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140005D30 (-InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140005FA0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140006280 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400064F0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140006840 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140006960 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140006D20 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007CF0 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400080A0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140008170 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140008240 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140008B90 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140009AB0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000A044 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000A0D0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000B474 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BC00 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BD60 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000C2D0 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000C330 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000C4E0 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14000C5D0 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000D930 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000F060 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140010278 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140011DDC (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140012174 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012F70 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014E64 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140014F78 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x1400158DC (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140026350 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140028DB0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140029FB0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002A270 (-GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x14002A330 (-GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002A3F0 (-GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputCon.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002A4D0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z @ 0x14002A9A0 (-GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z.c)
 *     ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x14002AA70 (-GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002AB70 (-GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14002AC30 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x14002AE30 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z.c)
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002AF00 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002B010 (-GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputCo.c)
 *     ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14002B220 (-ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C090 (-CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVI.c)
 *     ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C390 (-GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14002C480 (-GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z.c)
 *     ?GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14002C540 (-GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14002C5C0 (-GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 *     ?GetMute@CSystemAudioDeviceOffload@@UEAAJPEAE@Z @ 0x14002C6D0 (-GetMute@CSystemAudioDeviceOffload@@UEAAJPEAE@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002C750 (-GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputContr.c)
 *     ?GetVolumeChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14002C830 (-GetVolumeChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z.c)
 *     ?GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z @ 0x14002C8B0 (-GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002C930 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14002CC90 (-SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z.c)
 *     ?SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14002CD10 (-SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z.c)
 *     ?GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x14002D5D0 (-GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14002D650 (-GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 *     ?GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z @ 0x14002D760 (-GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z.c)
 *     ?GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x14002D7E0 (-GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x14002D860 (-GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14002DD00 (-SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z.c)
 *     ?SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14002DD80 (-SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002DE80 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14002E650 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14002E6E8 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14002E990 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x14002EB20 (-GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z.c)
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14002EE90 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 *     ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x14002EF60 (-SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z.c)
 *     ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x14002F000 (-SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z @ 0x14002F1F0 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z.c)
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14002F2F0 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002F540 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14002F690 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x14002F930 (-GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z.c)
 *     ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x14002FC90 (-GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x14002FD70 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140030014 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140030288 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400316F4 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

void __fastcall AudDGTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h]
  void *v5; // [rsp+40h] [rbp-9h] BYREF
  int v6; // [rsp+48h] [rbp-1h]
  int v7; // [rsp+4Ch] [rbp+3h]
  void *v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF
  int v17; // [rsp+C0h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  if ( (unsigned int)dword_1400540B0 > 2 )
  {
    TlgCreateSz(&pDesc, psz);
    v13 = 4LL;
    v14 = &v17;
    v12 = &v16;
    v15 = 4LL;
    v3[1] = 2;
    v5 = off_1400540B8;
    v3[0] = ((unsigned int)&unk_140045DFC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v4 = 0LL;
    v6 = *(unsigned __int16 *)off_1400540B8;
    v8 = &unk_140045E07;
    v7 = 2;
    v9 = 35;
    v10 = 1;
    EtwEventWriteTransfer(qword_1400540D0, v3, 0LL, 0LL, 5, &v5);
  }
}
