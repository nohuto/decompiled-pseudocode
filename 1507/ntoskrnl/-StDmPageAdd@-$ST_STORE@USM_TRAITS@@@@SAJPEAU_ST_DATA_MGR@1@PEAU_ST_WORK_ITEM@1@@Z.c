/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141A10
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     SmMapPage @ 0x140142A84 (SmMapPage.c)
 *     StIoCountsMovePeriod @ 0x140256E4C (StIoCountsMovePeriod.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int32 v9; // edx
  int v10; // r10d
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __m128i v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  int v17; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(__m128i *)(a2 + 8);
  v16 = *(_QWORD *)(a2 + 24);
  v15 = v2;
  v5 = SmMapPage(_mm_srli_si128(v2, 8).m128i_u64[0], &v18);
  if ( v5 )
  {
    v6 = v18 >> 12;
    for ( v15.m128i_i64[1] = v5; ; v15.m128i_i64[1] += 4096LL )
    {
      v17 = (unsigned __int8)*(_DWORD *)(a1 + 128) ? *(_DWORD *)(a1 + 172) : 1;
      do
      {
        v7 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v15, &v17);
        v8 = v7;
      }
      while ( v7 == -1073741267 );
      v9 = v15.m128i_i32[0];
      if ( v7 )
        break;
      v9 = (v15.m128i_i32[0] ^ ((v15.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8 ^ v15.m128i_i32[0];
      v15.m128i_i32[0] = v9;
      if ( ((v9 >> 3) & 0x7FFFFFF) >= v6 )
        goto LABEL_8;
      LODWORD(v16) = v16 + 1;
    }
    if ( v7 == -1073741818 )
    {
      v9 = v15.m128i_i32[0] & 0xC0000007;
      goto LABEL_11;
    }
LABEL_8:
    v10 = (v9 >> 3) & 0x7FFFFFF;
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 1080);
      if ( v11 )
      {
        v13 = v11 + 24;
        v14 = *(_DWORD **)v13;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v13 + 16) )
          v14 = (_DWORD *)StIoCountsMovePeriod(v13, MEMORY[0xFFFFF78000000008], v8);
        *v14 += v10;
        v9 = v15.m128i_i32[0];
      }
      LODWORD(v8) = 0;
    }
  }
  else
  {
    v9 = v15.m128i_i32[0];
    LODWORD(v8) = -1073741670;
  }
LABEL_11:
  result = (unsigned int)v8;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v9) & 0x3FFFFFF8;
  return result;
}
