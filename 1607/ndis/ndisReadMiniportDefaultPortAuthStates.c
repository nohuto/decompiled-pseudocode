/*
 * XREFs of ndisReadMiniportDefaultPortAuthStates @ 0x1C009ECAC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C009ED9C (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C009F434 (ndisReadMiniportSpecificPortAuthStates.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadMiniportDefaultPortAuthStates(__int64 a1)
{
  unsigned int MiniportMediaSpecificPortAuthStates; // edi
  unsigned int MiniportSpecificPortAuthStates; // eax
  PVOID v4; // rcx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x35u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = (void *)a1;
  MiniportMediaSpecificPortAuthStates = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !MiniportMediaSpecificPortAuthStates )
  {
    MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
    v4 = ConfigurationHandle;
    MiniportMediaSpecificPortAuthStates = MiniportSpecificPortAuthStates;
    if ( !MiniportSpecificPortAuthStates )
    {
      *(_DWORD *)(a1 + 2688) |= 8u;
      NdisCloseConfiguration(v4);
      goto LABEL_9;
    }
    NdisCloseConfiguration(ConfigurationHandle);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 32) < 6u )
LABEL_6:
    MiniportMediaSpecificPortAuthStates = ndisReadMiniportMediaSpecificPortAuthStates(a1);
  if ( MiniportMediaSpecificPortAuthStates )
  {
    *(_DWORD *)(a1 + 3376) = ndisGlobalPortSendAuthorizationState;
    *(_DWORD *)(a1 + 3380) = ndisGlobalPortReceiveAuthorizationState;
    *(_DWORD *)(a1 + 3368) = ndisGlobalPortSendControlState;
    *(_DWORD *)(a1 + 3372) = ndisGlobalPortReceiveControlState;
    *(_DWORD *)(a1 + 3360) = ndisGlobalPortSendAuthorizationState;
    *(_DWORD *)(a1 + 3364) = ndisGlobalPortReceiveAuthorizationState;
    *(_DWORD *)(a1 + 3352) = ndisGlobalPortSendControlState;
    *(_DWORD *)(a1 + 3356) = ndisGlobalPortReceiveControlState;
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x36u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, a1, MiniportMediaSpecificPortAuthStates);
  return MiniportMediaSpecificPortAuthStates;
}
