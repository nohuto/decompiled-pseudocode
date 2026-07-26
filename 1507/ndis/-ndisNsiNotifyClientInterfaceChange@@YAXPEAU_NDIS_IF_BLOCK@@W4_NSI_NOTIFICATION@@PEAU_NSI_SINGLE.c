/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548
 * Callers:
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0010164 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C0010228 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0010AE0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0019BD8 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001A730 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0020978 (ndisIfSetIfDescr.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003E7CC (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009AC5C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A8C70 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00AAE68 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00C6B74 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00C6C38 (ndisIfUpdateL2MtuSizeAndNotify.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001A144 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  int v8; // edx
  __int64 v9; // xmm1_8
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1384)) )
  {
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x8Eu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v8);
    memset(v10, 0, 0x38uLL);
    *(_QWORD *)&v10[0] = ndisNsiSavedClientNpi;
    *(_QWORD *)&v10[1] = a1 + 1312;
    WORD4(v10[0]) = a4;
    HIDWORD(v10[0]) = a2;
    DWORD2(v10[1]) = 8;
    if ( a2 )
    {
      *((_QWORD *)&v10[2] + 1) = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 16);
      v10[2] = *(_OWORD *)a3;
      *(_QWORD *)&v10[3] = v9;
    }
    (*(void (__fastcall **)(_OWORD *))(qword_1C00850B8 + 8))(v10);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x8Fu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2);
  }
}
