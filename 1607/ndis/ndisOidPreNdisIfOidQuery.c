/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00C5850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0xACu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
