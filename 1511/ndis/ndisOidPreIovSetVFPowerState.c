/*
 * XREFs of ndisOidPreIovSetVFPowerState @ 0x1C00D4A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D3210 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovSetVFPowerState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r10
  unsigned __int8 v5; // bl
  int v6; // r8d
  __int64 v7; // r11
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_qq(0x45u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
    v4 = byte_1C0083721;
  }
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xDu )
  {
    *(_DWORD *)(v1 + 56) = 13;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
    {
      if ( *(_QWORD *)a1 == v7
        || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = v6,
            ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL))) )
      {
        v5 = v7;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
      }
      goto LABEL_13;
    }
    goto LABEL_4;
  }
LABEL_13:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x46u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v5, v9);
  }
  return v5;
}
