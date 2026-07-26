/*
 * XREFs of ndisFNetPnPEventInternal @ 0x1C00980A0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C5C8 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0052670 (-ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C0098194 (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00A5754 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00E0B98 (ndisPnPNotifyAllTransports.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *a1)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  int v6; // eax
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // r15
  int v9; // eax
  _BYTE v10[176]; // [rsp+30h] [rbp-D8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)a1[1];
  v3 = a1[3];
  v4 = 0;
  Miniport = v1->Miniport;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qqd(0x3Du, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Miniport, v1, *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 15 )
  {
    if ( v6 <= 17 || v6 > 21 )
    {
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)Miniport, (__int64)v1);
      v8 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v4 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v3);
        ndisDereferenceRef((PKSPIN_LOCK)(v8 + 312), 0xAu);
        goto LABEL_7;
      }
      ndisInitializeNetPnPEvent(v10, 0LL);
      ndisShallowCopyNetPnPEvent(v10, v3);
      v9 = ndisPnPNotifyAllTransports(Miniport);
    }
    else
    {
      v9 = ndisFBindRequest(v1, (const struct _NET_PNP_EVENT_NOTIFICATION *)v3);
    }
    v4 = v9;
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qq(0x3Eu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, Miniport, v1);
  *(_DWORD *)a1 = v4;
}
