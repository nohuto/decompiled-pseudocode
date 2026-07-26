/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C0023E20
 * Callers:
 *     ndisIovGetNicSwitchList @ 0x1C0016164 (ndisIovGetNicSwitchList.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C001C7F0 (ndisIndicateInitialStateToBinding.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0039C80 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0064A80 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0064DE0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C0065290 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0065770 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D39F0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00D3BB0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D3CB0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00D3E10 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00D4250 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00D4D20 (ndisOidPreIovVPortParameters.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIovNicSwitchWithoutIovSupported(__int64 a1)
{
  unsigned __int8 v1; // al
  char v2; // dl
  __int64 v4; // rax

  v1 = *(_BYTE *)(a1 + 32);
  v2 = 0;
  if ( v1 > 6u || v1 == 6 && *(_BYTE *)(a1 + 33) >= 0x32u )
  {
    v4 = *(_QWORD *)(a1 + 3616);
    if ( v4 && (*(_DWORD *)(v4 + 32) & 0x40) != 0 )
      return 1;
  }
  return v2;
}
