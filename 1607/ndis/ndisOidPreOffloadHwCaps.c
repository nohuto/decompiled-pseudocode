/*
 * XREFs of ndisOidPreOffloadHwCaps @ 0x1C00AFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCopyNdisOffload @ 0x1C0025760 (ndisCopyNdisOffload.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadHwCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // r14
  unsigned __int8 v5; // bl
  __int64 v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xDAu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, v3);
    v4 = byte_1C00895D2;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_10;
  if ( !*(_QWORD *)a1 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v1 + 4152) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x70u )
    {
      *(_DWORD *)(v3 + 56) = 112;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    v5 = 1;
    if ( !*(_DWORD *)(a1 + 40) )
    {
      ndisCopyNdisOffload(
        *(_QWORD *)(v3 + 40),
        *(_QWORD *)(v1 + 4152) + 548LL,
        *(_DWORD *)(v3 + 48),
        (_DWORD *)(v3 + 52),
        1);
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  else
  {
LABEL_10:
    *(_DWORD *)(a1 + 40) = -1073741637;
    v5 = 1;
  }
LABEL_6:
  if ( (unsigned __int8)v4 >= 4u )
  {
    LODWORD(v7) = v5;
    WPP_SF_qdD(0xDBu, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v1, *(_DWORD *)(a1 + 40), v7);
  }
  return v5;
}
