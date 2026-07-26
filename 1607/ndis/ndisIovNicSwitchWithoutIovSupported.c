/*
 * XREFs of ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0016864 (ndisIndicateInitialStateToBinding.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003DC00 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     ndisIovGetNicSwitchList @ 0x1C00688D0 (ndisIovGetNicSwitchList.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0068FD0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0069330 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumNicSwitches @ 0x1C0069830 (ndisOidPreIovEnumNicSwitches.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0069D10 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AC004 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D9930 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovCreateVPort @ 0x1C00D9AF0 (ndisOidPreIovCreateVPort.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D9BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00D9D50 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA190 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DAC60 (ndisOidPreIovVPortParameters.c)
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
