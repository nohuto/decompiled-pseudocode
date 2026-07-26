/*
 * XREFs of ndisOidPreMaxLinkSpeed @ 0x1C00C5450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreMaxLinkSpeed(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  char v5; // cl
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = 0LL;
  v5 = byte_1C00895D2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_qq(0xA8u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0LL, v1);
    v5 = byte_1C00895D2;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_13:
    v2 = 1;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v3 = *(_QWORD *)(v6 + 32);
  }
  else if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)a1;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 40) = *(_OWORD *)(v3 + 3064);
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
    goto LABEL_13;
  }
LABEL_14:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xA9u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v3, v2, v8);
  }
  return v2;
}
