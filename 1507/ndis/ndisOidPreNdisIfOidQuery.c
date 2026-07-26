/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00C7760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0xAAu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
