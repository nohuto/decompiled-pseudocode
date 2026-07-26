/*
 * XREFs of ndisOidPreIovWriteVFConfigSpace @ 0x1C00DB210
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D914C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovWriteVFConfigSpace(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r10
  unsigned __int8 v5; // bl
  unsigned int v6; // r8d
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r11
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C00895E1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
  {
    WPP_SF_qq(0x3Du, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
    v4 = byte_1C00895E1;
  }
  v5 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x14u )
  {
    *(_DWORD *)(v1 + 56) = 20;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < v6 )
    {
      *(_DWORD *)(v1 + 56) = v6;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
      {
        if ( *(_QWORD *)a1 == v9
          || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = v7, ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4))) )
        {
          v5 = v9;
        }
        else
        {
          *(_DWORD *)(a1 + 40) = -1073741811;
        }
        goto LABEL_16;
      }
      goto LABEL_4;
    }
  }
LABEL_16:
  if ( (unsigned __int8)v4 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x3Eu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v5, v11);
  }
  return v5;
}
