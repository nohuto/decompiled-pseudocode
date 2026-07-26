/*
 * XREFs of ndisOidPreIovVFParameters @ 0x1C00DAA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D914C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVFParameters(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // r11
  __int64 v5; // r14
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 *VFByVFId; // rax
  _OWORD *v11; // r10
  _OWORD *v12; // rax
  __int128 v13; // xmm1

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = byte_1C00895E1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
  {
    WPP_SF_qq(0x27u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
    v4 = byte_1C00895E1;
  }
  v5 = 12LL;
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_18;
  v6 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x660u )
  {
    if ( *(_DWORD *)(v1 + 52) < 0x660u )
    {
      *(_DWORD *)(v1 + 68) = 1632;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 68) = 1632;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_19;
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_20;
  v8 = *(_QWORD *)(v7 + 4672);
  if ( v8 && *(_QWORD *)(v7 + 3616) && (*(_BYTE *)(v8 + 8) & 3) == 3 )
  {
    v9 = *(_QWORD *)(v1 + 40);
    *(_DWORD *)(v1 + 64) = 1632;
    VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v9 + 1626));
    if ( VFByVFId )
    {
      v12 = VFByVFId + 12;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        v13 = v12[7];
        v12 += 8;
        *(v11 - 1) = v13;
        --v5;
      }
      while ( v5 );
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      *(_DWORD *)(v1 + 60) = 1632;
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
  }
  else
  {
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_19:
  v6 = 1;
LABEL_20:
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qdD(0x28u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v6, *(_DWORD *)(a1 + 40));
  return v6;
}
