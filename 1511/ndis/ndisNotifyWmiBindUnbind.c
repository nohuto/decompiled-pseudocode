/*
 * XREFs of ndisNotifyWmiBindUnbind @ 0x1C009ECD4
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0098740 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00D7258 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E1274 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int128 *v6; // r9
  PVOID v7; // rsi
  char *v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-28h]
  PVOID Argument1; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qqd(0x36u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1, a2, a3);
  v6 = (__int128 *)&GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v6 = (__int128 *)&GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    *(const void ***)(a1 + 3912),
    *(unsigned __int16 *)(*(_QWORD *)(a1 + 3824) + 8LL) + *(unsigned __int16 *)(a2 + 72) + 4,
    v6,
    &Argument1);
  v7 = Argument1;
  if ( Argument1 )
  {
    v8 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v8, *(const void **)(a2 + 80), *(unsigned __int16 *)(a2 + 72));
    memmove(
      &v8[*(unsigned __int16 *)(a2 + 72) + 2],
      *(const void **)(*(_QWORD *)(a1 + 3824) + 16LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 3824) + 8LL));
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v7, 0LL);
    v9 = IoWMIWriteEvent(v7);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned __int8)byte_1C0083714 >= 2u )
        WPP_SF_d(0x37u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v10, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4064), v11, 0, 0);
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
  {
    LODWORD(v12) = a3;
    WPP_SF_qqd(0x38u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1, a2, v12);
  }
}
