/*
 * XREFs of ndisOidPostIovDeleteNicSwitch @ 0x1C0069330
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisIovDeleteNicSwitch @ 0x1C0068250 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C00682F0 (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0x12u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
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
