/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A2B60
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0011E88 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0011F48 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0012590 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00147E0 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001491C (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F8FC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfAliasChange @ 0x1C00432A8 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0043A74 (ndisIfSetIfDescr.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009E470 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C009EC60 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A1A7C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00C4B80 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00C4C44 (ndisIfUpdateL2MtuSizeAndNotify.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0014FD8 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  int v8; // edx
  __int64 v9; // xmm1_8
  _OWORD v10[4]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1384)) )
  {
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_qD(0x8Eu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v8);
    memset(v10, 0, sizeof(v10));
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
    DWORD2(v10[3]) = *(_DWORD *)(*(_QWORD *)(a1 + 1384) + 16LL);
    (*(void (__fastcall **)(_OWORD *))(qword_1C0088D88 + 8))(v10);
    if ( (unsigned __int8)byte_1C00895DD >= 4u )
      WPP_SF_qD(0x8Fu, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, a2);
  }
}
