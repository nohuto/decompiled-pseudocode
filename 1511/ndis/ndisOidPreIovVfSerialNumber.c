/*
 * XREFs of ndisOidPreIovVfSerialNumber @ 0x1C00D50A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVfSerialNumber(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  char v5; // dl
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_qq(0x4Fu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
    v5 = byte_1C0083721;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_13;
  if ( !v3 )
    goto LABEL_14;
  v6 = *(_QWORD *)(v3 + 4672);
  if ( v6 && (*(_BYTE *)(v6 + 8) & 5) == 5 && *(_QWORD *)(v3 + 4928) )
  {
    v7 = *(_DWORD **)(v1 + 40);
    *v7 = 524672;
    v7[1] = *(_DWORD *)(v3 + 4936);
    *(_DWORD *)(v1 + 52) = 8;
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
    WPP_SF_qdD(0x50u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v4, v9);
  }
  return v4;
}
