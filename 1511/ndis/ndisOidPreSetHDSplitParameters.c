/*
 * XREFs of ndisOidPreSetHDSplitParameters @ 0x1C00C0EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C21D0 (ndisUpdateHDSplitKeyword.c)
 */

unsigned __int8 __fastcall ndisOidPreSetHDSplitParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0xBDu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_4;
  if ( !*(_QWORD *)a1 )
  {
LABEL_21:
    v4 = 0;
    goto LABEL_22;
  }
  v5 = *(_BYTE *)(v1 + 32);
  if ( v5 <= 6u && (v5 != 6 || !*(_BYTE *)(v1 + 33)) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_22;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 8u )
  {
    *(_DWORD *)(v3 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(v3 + 40);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)v6 != 0x80 || !*(_BYTE *)(v6 + 1) || *(_WORD *)(v6 + 2) < 8u )
      *(_DWORD *)(a1 + 40) = -1073676267;
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v7 = *(_QWORD *)(v1 + 4328);
      if ( !v7 || (*(_DWORD *)(v7 + 12) & 1) == 0 )
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_22;
      }
      ndisUpdateHDSplitKeyword(v1, (*(_BYTE *)(v6 + 4) & 1) == 0);
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qdD(0xBEu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
