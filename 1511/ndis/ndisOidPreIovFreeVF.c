/*
 * XREFs of ndisOidPreIovFreeVF @ 0x1C00D3F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D3210 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovFreeVF(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r11
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  _BYTE *OidSourceHandle; // rax
  __int64 *VFByVFId; // rax
  __int64 v9; // r10
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_qq(0x23u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
    v4 = byte_1C0083721;
  }
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_19;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    *(_DWORD *)(v1 + 56) = 10;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_20;
  if ( !*(_QWORD *)a1 )
  {
LABEL_8:
    v5 = 0;
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(v3 + 4672);
  if ( !v6
    || !*(_QWORD *)(v3 + 3616)
    || (*(_BYTE *)(v6 + 8) & 3) != 3
    || (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1)) == 0LL
    || *OidSourceHandle != 18 )
  {
LABEL_19:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_20;
  }
  VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 8LL));
  if ( VFByVFId && VFByVFId[7] == v9 && !*((_DWORD *)VFByVFId + 19) )
  {
    *(_QWORD *)(v1 + 144) = VFByVFId;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_20:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x24u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v5, v11);
  }
  return v5;
}
