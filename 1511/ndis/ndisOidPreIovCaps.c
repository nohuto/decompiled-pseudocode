/*
 * XREFs of ndisOidPreIovCaps @ 0x1C00D38F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCaps(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  char v5; // dl
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_qq(0x17u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v1, v3);
    v5 = byte_1C0083721;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0xCu )
  {
    *(_DWORD *)(v3 + 56) = 12;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    if ( !v1 )
      goto LABEL_14;
    v6 = *(_DWORD *)(v3 + 32) == 66121 ? *(_QWORD *)(v1 + 4664) : *(_QWORD *)(v1 + 4672);
    if ( !v6 )
    {
LABEL_7:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v7 = *(_QWORD *)v6;
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v3 + 52) = 12;
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  v4 = 1;
LABEL_14:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x18u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v1, v4, v9);
  }
  return v4;
}
