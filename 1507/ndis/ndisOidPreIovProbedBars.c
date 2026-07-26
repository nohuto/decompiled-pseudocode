/*
 * XREFs of ndisOidPreIovProbedBars @ 0x1C00DAC70
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreIovProbedBars(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r8
  unsigned __int8 v5; // bl
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_qq(0x46u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v1);
    v4 = byte_1C0085321;
  }
  v5 = 0;
  if ( *(_DWORD *)(v1 + 4) )
  {
LABEL_10:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 8u )
  {
    *(_DWORD *)(v1 + 56) = 8;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_11;
  if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 40) + 4LL) + 24 >= *(unsigned int *)(v1 + 48) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
      goto LABEL_12;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_11:
  v5 = 1;
LABEL_12:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x47u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v5, v7);
  }
  return v5;
}
