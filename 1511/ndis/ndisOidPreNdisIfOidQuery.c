/*
 * XREFs of ndisOidPreNdisIfOidQuery @ 0x1C00C0B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreNdisIfOidQuery(__int64 a1)
{
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0xACu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, *(_QWORD *)a1, *(_QWORD *)(a1 + 32));
  *(_DWORD *)(a1 + 40) = -1073741637;
  return 1;
}
