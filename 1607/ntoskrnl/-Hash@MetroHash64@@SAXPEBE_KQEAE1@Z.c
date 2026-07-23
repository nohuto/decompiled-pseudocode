/*
 * XREFs of ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1401214FC
 * Callers:
 *     ?StDmpCheckForCombine@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKKPEAK@Z @ 0x14011BEA8 (-StDmpCheckForCombine@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEADKK.c)
 * Callees:
 *     <none>
 */

void __fastcall MetroHash64::Hash(const unsigned __int8 *a1, unsigned __int64 a2, unsigned __int8 *const a3)
{
  const unsigned __int8 *v3; // r11
  const unsigned __int8 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx

  v3 = &a1[a2];
  v5 = a1;
  v6 = 0x52BC33FEDBE4CBB5LL;
  if ( a2 >= 0x20 )
  {
    v7 = 0x52BC33FEDBE4CBB5LL;
    v8 = 0x52BC33FEDBE4CBB5LL;
    v9 = 0x52BC33FEDBE4CBB5LL;
    v10 = 0x52BC33FEDBE4CBB5LL;
    do
    {
      v7 = v9 + __ROR8__(3603962101LL * *(_QWORD *)v5 + v7, 29);
      v8 = v10 + __ROR8__(2729050939LL * *((_QWORD *)v5 + 1) + v8, 29);
      v11 = 817650473LL * *((_QWORD *)v5 + 3);
      v12 = __ROR8__(1654206401LL * *((_QWORD *)v5 + 2) + v9, 29);
      v5 += 32;
      v9 = v7 + v12;
      v10 = v8 + __ROR8__(v11 + v10, 29);
    }
    while ( v5 <= v3 - 32 );
    v13 = (2729050939LL * __ROR8__(v8 + 3603962101LL * (v10 + v7), 37)) ^ v9;
    v14 = (3603962101LL * __ROR8__(v7 + 2729050939LL * (v8 + v13), 37)) ^ v10;
    v6 = ((2729050939LL * __ROR8__(v14 + 3603962101LL * (v13 + v7), 37)) ^ v7 ^ (3603962101LL
                                                                               * __ROR8__(
                                                                                   v13 + 2729050939LL * (v14 + v8),
                                                                                   37)) ^ v8)
       + 0x52BC33FEDBE4CBB5LL;
  }
  if ( v3 - v5 >= 16 )
  {
    v19 = 1654206401LL * *(_QWORD *)v5;
    v20 = *((_QWORD *)v5 + 1);
    v5 += 16;
    v21 = 817650473LL * __ROR8__(v6 + v19, 29);
    v22 = 817650473LL * __ROR8__(v6 + 1654206401 * v20, 29);
    v6 += v22 ^ (__ROR8__(817650473 * v22, 21) + (v21 ^ (v22 + __ROR8__(3603962101LL * v21, 21))));
  }
  if ( v3 - v5 >= 8 )
  {
    v15 = 817650473LL * *(_QWORD *)v5;
    v5 += 8;
    v6 = (2729050939LL * __ROR8__(v15 + v6, 55)) ^ (v15 + v6);
  }
  if ( v3 - v5 >= 4 )
  {
    v18 = *(unsigned int *)v5;
    v5 += 4;
    v6 = (2729050939LL * __ROR8__(817650473 * v18 + v6, 26)) ^ (817650473 * v18 + v6);
  }
  if ( v3 - v5 >= 2 )
  {
    v16 = *(unsigned __int16 *)v5;
    v5 += 2;
    v6 = (2729050939LL * __ROR8__(817650473 * v16 + v6, 48)) ^ (817650473 * v16 + v6);
  }
  if ( v3 - v5 >= 1 )
    v6 = (2729050939LL * __ROR8__(817650473LL * *v5 + v6, 37)) ^ (817650473LL * *v5 + v6);
  v17 = 3603962101u * (v6 ^ __ROR8__(v6, 28));
  *(_QWORD *)a3 = v17 ^ __ROR8__(v17, 29);
}
