/*
 * XREFs of ndisPnPRemoveDeviceEx @ 0x1C009AA70
 * Callers:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C009A97C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009AC5C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // eax
  _NET_IF_ADMIN_STATUS v3; // edi
  _NDIS_IF_BLOCK *IfBlock; // rcx
  bool v5; // zf
  unsigned int v6; // eax
  _DEVICE_OBJECT *InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x1Fu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
  v2 = a1->PnPFlags & 0xFFFEFFFF;
  a1->PnPDeviceState = NdisPnPDeviceRemoved;
  a1->PnPFlags = v2 | 0x10;
  if ( !ndisIsMiniportStarted(a1)
    || a1->OldPnPDeviceState != NdisPnPDeviceStarted
    || (v3 = NET_IF_ADMIN_STATUS_DOWN, (a1->PnPFlags & 0x4000) != 0) )
  {
    v3 = NET_IF_ADMIN_STATUS_UP;
  }
  if ( ndisIsMiniportStarted(a1)
    && ((a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0)
    && a1->PhysicalMediumType == NdisPhysicalMedium802_3 )
  {
    v5 = a1->PMHardwareCapabilities.Header.Revision == 2;
    v8 = 0LL;
    InputBuffer = a1->PhysicalDeviceObject;
    LODWORD(v8) = 4;
    if ( !v5
      || (a1->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
      || a1->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
      || a1->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
      || (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
      || (a1->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
      || (v6 = a1->PMHardwareCapabilities.SupportedProtocolOffloads & 3, BYTE5(v8) = 1, (_BYTE)v6 != 3) )
    {
      BYTE5(v8) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(a1);
  if ( a1->DevinterfaceNetSymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->DevinterfaceNetSymbolicLinkName);
    a1->DevinterfaceNetSymbolicLinkName.Buffer = 0LL;
  }
  IfBlock = a1->IfBlock;
  a1->AdminStatus = v3;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation(IfBlock, a1, (unsigned int)v3);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x20u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
}
