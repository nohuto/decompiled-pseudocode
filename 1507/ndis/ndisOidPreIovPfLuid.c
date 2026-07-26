/*
 * XREFs of ndisOidPreIovPfLuid @ 0x1C00DAB80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovPfLuid(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbp
  unsigned __int8 v4; // bl
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)a1;
  v4 = 0;
  v5 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_qq(0x4Au, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v1);
    v5 = byte_1C0085321;
  }
  if ( *(_DWORD *)(v1 + 4) )
    goto LABEL_12;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    *(_DWORD *)(v1 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_13;
  if ( !v3 )
    goto LABEL_14;
  v6 = v3[584];
  if ( v6 && v3[452] && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    v7 = *(_QWORD *)(v1 + 40);
    *(_DWORD *)v7 = 786816;
    *(_QWORD *)(v7 + 4) = *(_QWORD *)((char *)v3 + 4940);
    *(_DWORD *)(v1 + 52) = 12;
  }
  else
  {
LABEL_12:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_13:
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Bu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, (__int64)v3, v4, v9);
  }
  return v4;
}
