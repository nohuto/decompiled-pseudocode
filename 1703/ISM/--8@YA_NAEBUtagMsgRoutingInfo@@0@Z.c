/*
 * XREFs of ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180019C08
 * Callers:
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180013CE0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800188A0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x1800188F4 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800189CC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x180018C18 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18001A850 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByInputDest@DWMInputTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18001A950 (-IsSameByInputDest@DWMInputTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x1800690B8 (-MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInput.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16)
      && *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24)
      && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
}
