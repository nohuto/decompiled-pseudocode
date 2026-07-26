/*
 * XREFs of ndisOidPreIovGetVFVendorDeviceId @ 0x1C00D4080
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D3210 (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovGetVFVendorDeviceId(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r10
  unsigned __int8 v5; // bl
  int v6; // r8d
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_qq(0x47u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
    v4 = byte_1C0083721;
  }
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v5 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xAu )
  {
    if ( *(_DWORD *)(v1 + 52) < 0xAu )
    {
      *(_DWORD *)(v1 + 68) = 10;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 10;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_14;
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_14:
    v5 = 1;
    goto LABEL_15;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v6;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x48u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v5, v8);
  }
  return v5;
}
