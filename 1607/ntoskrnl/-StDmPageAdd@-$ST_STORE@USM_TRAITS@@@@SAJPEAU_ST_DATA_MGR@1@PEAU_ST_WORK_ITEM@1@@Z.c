/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401189D0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     SmMapPage @ 0x14011C3D4 (SmMapPage.c)
 *     StIoCountsMovePeriod @ 0x14021FF34 (StIoCountsMovePeriod.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned __int32 v8; // edx
  int v9; // r10d
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __m128i v14; // [rsp+20h] [rbp-20h]
  __int64 i; // [rsp+28h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-10h]
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  int v18; // [rsp+70h] [rbp+30h]

  v16 = *(_QWORD *)(a2 + 24);
  v14 = *(__m128i *)(a2 + 8);
  v4 = SmMapPage(_mm_srli_si128(v14, 8).m128i_u64[0], &v17);
  if ( v4 )
  {
    v5 = v17 >> 12;
    for ( i = v4; ; i += 4096LL )
    {
      v18 = 1;
      do
      {
        v6 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd((struct NP_CONTEXT::NP_CTX *)a1);
        v7 = v6;
      }
      while ( v6 == -1073741267 );
      v8 = v14.m128i_i32[0];
      if ( v6 )
        break;
      v8 = (v14.m128i_i32[0] ^ ((v14.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8 ^ v14.m128i_i32[0];
      v14.m128i_i32[0] = v8;
      if ( ((v8 >> 3) & 0x7FFFFFF) >= v5 )
        goto LABEL_7;
      LODWORD(v16) = v16 + 1;
    }
    if ( v6 == -1073741818 )
    {
      v8 = v14.m128i_i32[0] & 0xC0000007;
      goto LABEL_10;
    }
LABEL_7:
    v9 = (v8 >> 3) & 0x7FFFFFF;
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 1784);
      if ( v10 )
      {
        v12 = v10 + 24;
        v13 = *(_DWORD **)v12;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v12 + 16) )
          v13 = (_DWORD *)StIoCountsMovePeriod(v12, MEMORY[0xFFFFF78000000008], v7);
        *v13 += v9;
        v8 = v14.m128i_i32[0];
      }
      LODWORD(v7) = 0;
    }
  }
  else
  {
    v8 = v14.m128i_i32[0];
    LODWORD(v7) = -1073741670;
  }
LABEL_10:
  result = (unsigned int)v7;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v8) & 0x3FFFFFF8;
  return result;
}
