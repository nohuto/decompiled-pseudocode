/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C0064DE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0023E20 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisIovDeleteNicSwitch @ 0x1C0063E90 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C0063F30 (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(0x12u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
  if ( *(_QWORD *)a1
    && ndisIovNicSwitchWithoutIovSupported(v3)
    && (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) != &ndisIntReqGeneric
    && !*(_DWORD *)(a1 + 40) )
  {
    v4 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(_DWORD *)(v4 + 8));
    ndisIovDeleteNicSwitch(v3, *(_DWORD *)(v4 + 8));
  }
}
