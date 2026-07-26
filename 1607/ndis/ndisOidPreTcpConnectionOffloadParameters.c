/*
 * XREFs of ndisOidPreTcpConnectionOffloadParameters @ 0x1C00C5F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisOidPreQueryTcpConnectionParameters @ 0x1C00C5AC4 (ndisOidPreQueryTcpConnectionParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // bl
  __int64 v4; // rbp
  char TcpConnectionParameters; // r15
  char v7; // r14
  char v8; // al
  int v10; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v3 = 1;
  v4 = *(_QWORD *)(a1 + 32);
  TcpConnectionParameters = 1;
  v7 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xE0u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v2, v4);
    v7 = byte_1C00895D2;
  }
  if ( !v2 || *(_QWORD *)(v2 + 4152) )
  {
    if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) == 0 )
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(v2, a2, v4, (int *)(a1 + 40));
    v8 = TcpConnectionParameters;
    if ( *(_DWORD *)(v4 + 4) == 1 )
      v8 = 0;
    v3 = v8;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( (unsigned __int8)v7 >= 4u )
  {
    v10 = v3;
    WPP_SF_qdD(0xE1u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v2, *(_DWORD *)(a1 + 40), v10);
  }
  return v3;
}
