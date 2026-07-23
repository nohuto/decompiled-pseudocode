/*
 * XREFs of ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140003434
 * Callers:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14000342C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F44C (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140076ADC (RtlNumberOfClearBits.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?StCopyIoStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z @ 0x14021D7C8 (-StCopyIoStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_IO_STATS@@PEAU_ST_IO_COUNTS@@@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x14021E684 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     StLcBucketsCopy @ 0x14021FFA8 (StLcBucketsCopy.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStatsWorker(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // r15d
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  _DWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  _WORD *v25; // rcx
  unsigned __int64 v26; // rdx
  _WORD *v27; // r9
  int v28; // eax
  unsigned __int64 v29; // r14
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( a2 >= 4 )
    return 3221225485LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v9 = 1536;
        break;
      case 2:
        v9 = ((a3 + 1537) & 0xFFFFFFFE) + 4 * *(_DWORD *)(a1 + 12) - a3;
        break;
      case 3:
        v22 = *(_DWORD *)(a1 + 12);
        v23 = *(_DWORD *)(a1 + 888) + 1;
        if ( v23 > 0x200 )
          v23 = 512;
        v5 = v22 * ((v23 + 7) >> 3);
        v9 = v5 + ((((a3 + 1537) & 0xFFFFFFFE) + 4 * v22 + 7) & 0xFFFFFFF8) - a3 + 12;
        break;
      default:
        v9 = -1;
        break;
    }
  }
  else
  {
    v9 = 188;
  }
  if ( *a4 < v9 )
  {
    *a4 = v9;
    return 3221225507LL;
  }
  else
  {
    *(_BYTE *)a3 = 11;
    *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ (a2 << 8)) & 0xF00;
    v10 = *(_DWORD *)a3 ^ (*(_DWORD *)a3 ^ (*(_DWORD *)a1 << 12)) & 0xF000;
    *(_DWORD *)a3 = v10;
    v11 = v10 ^ (v10 ^ (*(_DWORD *)a1 << 8)) & 0x10000;
    *(_DWORD *)a3 = v11;
    v12 = v11 ^ (v11 ^ (*(_DWORD *)a1 << 7)) & 0x20000;
    *(_DWORD *)a3 = v12;
    v13 = v12 ^ (v12 ^ (*(_DWORD *)(a1 + 3976) << 21)) & 0x3FFC0000;
    *(_DWORD *)a3 = v13;
    v14 = v13 ^ (*(_DWORD *)(a1 + 856) << 12);
    *(_DWORD *)(a3 + 4) = v9;
    *(_DWORD *)a3 = v13 ^ v14 & 0x40000000;
    *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 3932);
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 936) + *(_DWORD *)(a1 + 2824);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a3 + 24) = 16;
    memset((void *)(a3 + 28), 0, 0x50uLL);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 936);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(a3 + 40) = RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 920));
    v15 = (_DWORD *)(a3 + 44);
    v16 = a1 + 80 - (a3 + 28);
    v17 = *(_BYTE *)(a1 + 856) != 0 ? 1 : 8;
    do
    {
      *v15 = *(_DWORD *)((char *)v15 + v16 + 1776);
      v15[1] = *(_DWORD *)((char *)v15 + v16 + 1780);
      v15 += 2;
      --v17;
    }
    while ( v17 );
    memset((void *)(a3 + 108), 0, 0x50uLL);
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(a1 + 2824);
    *(_DWORD *)(a3 + 112) = *(_DWORD *)(a1 + 1976);
    *(_DWORD *)(a3 + 120) = RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 2808));
    v18 = (_DWORD *)(a3 + 124);
    v19 = a1 + 1968 - (a3 + 108);
    v20 = *(_BYTE *)(a1 + 2744) != 0 ? 1 : 8;
    do
    {
      *v18 = *(_DWORD *)((char *)v18 + v19 + 1776);
      v18[1] = *(_DWORD *)((char *)v18 + v19 + 1780);
      v18 += 2;
      --v20;
    }
    while ( v20 );
    if ( !a2 )
      goto LABEL_10;
    ST_STORE<SM_TRAITS>::StCopyIoStats(a3 + 188, a1 + 4168);
    StLcBucketsCopy(a3 + 1472, v24, *(_QWORD *)(a1 + 5488), *(unsigned int *)(a1 + 5480));
    if ( a2 == 1 )
      goto LABEL_10;
    v25 = *(_WORD **)(a1 + 56);
    v26 = (a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL;
    v27 = &v25[*(unsigned int *)(a1 + 12)];
    while ( v25 < v27 )
    {
      *(_WORD *)v26 = *v25 & 0x1FFF;
      if ( (unsigned __int8)*(_DWORD *)(a1 + 856) )
        LOBYTE(v28) = 0;
      else
        v28 = (unsigned __int16)*v25 >> 13;
      ++v25;
      *(_BYTE *)(v26 + 2) = v28;
      v26 += 4LL;
    }
    if ( a2 == 2 )
      goto LABEL_10;
    v29 = (((a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL) + 4LL * *(unsigned int *)(a3 + 20) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    memset((void *)(v29 + 12), 0, v5);
    v30 = *(_DWORD *)(a1 + 8) >> 9;
    if ( v30 <= 0x10 )
      v30 = 16;
    *(_DWORD *)(v29 + 8) = v30;
    v31 = v30 >> 4;
    result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 80, v31, v29 + 12, &v32);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)v29 = v32;
      result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 1968, v31, v29 + 12, &v32);
      if ( (int)result >= 0 )
      {
LABEL_10:
        *a4 = v9;
        return 0LL;
      }
    }
  }
  return result;
}
