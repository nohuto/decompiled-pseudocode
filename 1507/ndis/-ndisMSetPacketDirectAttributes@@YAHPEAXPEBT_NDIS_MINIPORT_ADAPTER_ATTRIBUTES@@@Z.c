/*
 * XREFs of ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00E08E4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qccL @ 0x1C006D574 (WPP_SF_qccL.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00E0BA4 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetPacketDirectAttributes(_QWORD *a1, const union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  struct _NDIS_PD_BLOCK *v2; // rdi
  _QWORD *v3; // rsi
  int v4; // ebx
  unsigned int Flags; // eax
  unsigned __int8 DmaAddressWidth; // cl
  int PDDomainId; // r9d

  v2 = (struct _NDIS_PD_BLOCK *)a1[688];
  v3 = a1;
  if ( !v2 )
  {
    v4 = -1073741637;
    goto LABEL_3;
  }
  if ( a2->Header.Revision == 1 && a2->Header.Size >= 9u )
  {
    Flags = a2->GeneralAttributes.Flags;
    if ( (Flags & 0xFFFFFFFC) != 0 )
    {
LABEL_9:
      v4 = -1073741811;
      goto LABEL_3;
    }
    if ( (Flags & 1) != 0 )
    {
      if ( a2->PacketDirectAttributes.DmaAddressWidth )
        goto LABEL_9;
      v2->PDDmaAddressWidth = 0;
      v2->PDNonDmaAdapter = 1;
    }
    else
    {
      DmaAddressWidth = a2->PacketDirectAttributes.DmaAddressWidth;
      if ( (unsigned __int8)(DmaAddressWidth - 1) <= 0x1Eu || DmaAddressWidth >= 0x41u )
        goto LABEL_9;
      if ( DmaAddressWidth )
        v2->PDDmaAddressWidth = DmaAddressWidth;
      else
        v2->PDDmaAddressWidth = 64;
      v2->PDNonDmaAdapter = 0;
    }
    if ( (a2->GeneralAttributes.Flags & 2) != 0 )
    {
      if ( !*(_QWORD *)(v3[477] + 1208LL) )
      {
        v4 = -1073741808;
        goto LABEL_3;
      }
      v2->PDBuffersManagedByDriver = 1;
    }
    if ( v2->PDEnabledRegistryValue )
    {
      v4 = ndisPDInitializeMiniportBufferManagement(v2);
      if ( v4 == -1073740007 )
      {
        PDDomainId = v2->PDDomainId;
        if ( !PDDomainId )
          goto LABEL_3;
        if ( (unsigned __int8)byte_1C0085324 >= 2u )
          WPP_SF_qD(0x10u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)v3, PDDomainId);
        v2->PDDomainId = 0;
        v2->DiagnosticCode |= 0x80000001;
        v4 = ndisPDInitializeMiniportBufferManagement(v2);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 < 0 )
  {
LABEL_3:
    if ( (unsigned __int8)byte_1C0085324 >= 2u )
      WPP_SF_qD(0x12u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)v3, v4);
    return (unsigned int)v4;
  }
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    LOBYTE(a1) = v2->PDNonDmaAdapter == 0;
    WPP_SF_qccL(
      (__int64)a1,
      (__int64)a2,
      (__int64)v3,
      v2->PDBuffersManagedByDriver == 0,
      (_BYTE)a1,
      v2->PDDmaAddressWidth);
  }
  return (unsigned int)v4;
}
