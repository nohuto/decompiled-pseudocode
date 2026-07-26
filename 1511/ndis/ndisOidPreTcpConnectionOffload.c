/*
 * XREFs of ndisOidPreTcpConnectionOffload @ 0x1C00C10D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffload(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // dl
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0xDCu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3);
    v4 = byte_1C0083712;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  v5 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_13;
  v6 = *(_QWORD *)(v1 + 4152);
  if ( v6 && *(_BYTE *)(v6 + 861) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x14u )
    {
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v7 = *(_QWORD *)(v1 + 4152);
      v8 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v8 = *(_OWORD *)(v7 + 860);
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 876);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  else
  {
LABEL_11:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  v5 = 1;
LABEL_13:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v10 = v5;
    WPP_SF_qdD(0xDDu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, *(_DWORD *)(a1 + 40), v10);
  }
  return v5;
}
