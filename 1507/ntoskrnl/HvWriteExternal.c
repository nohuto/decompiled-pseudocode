/*
 * XREFs of HvWriteExternal @ 0x14065E3F4
 * Callers:
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 *     CmpFileFlush @ 0x14065BBC0 (CmpFileFlush.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned int v4; // r13d
  unsigned int v5; // r15d
  _DWORD *v6; // rsi
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *CellMap; // r14
  __int64 FreeBin; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r12d
  unsigned __int64 BinAddress; // rax
  __int64 v14; // rcx
  _OWORD *PoolWithTag; // rax
  _DWORD *v16; // r14
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  char v20; // bl
  unsigned int v21; // ebx
  struct _EX_RUNDOWN_REF *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  size_t v27; // r13
  unsigned __int64 v28; // rax
  BOOLEAN v29; // r12
  SIZE_T v30; // rdx
  _DWORD *v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v35; // [rsp+38h] [rbp-20h]
  int v36; // [rsp+40h] [rbp-18h]
  BOOLEAN v37; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+50h]
  int v39; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+60h]

  v39 = -1;
  v2 = *(_QWORD *)(BugCheckParameter2 + 2680) == 0LL;
  v37 = 0;
  if ( v2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 1400);
  v40 = v4;
  result = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v4 + 4096, 0);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    for ( i = 0; i < v4; i += v12 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, i);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0xB5AuLL);
      v6 = 0LL;
      FreeBin = HvpMapEntryGetFreeBin();
      if ( FreeBin )
      {
        v11 = *(unsigned int *)(FreeBin + 24);
        v12 = *(_DWORD *)(FreeBin + 16);
        if ( (v11 & 1) == 0 )
          continue;
        BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, &v37, &v39);
      }
      else
      {
        BinAddress = HvpMapEntryGetBinAddress(v10, CellMap, &v37, &v39);
        v12 = *(_DWORD *)(BinAddress + 8);
      }
      v6 = (_DWORD *)BinAddress;
      if ( BinAddress )
      {
        if ( v12 + i > *(_DWORD *)(BugCheckParameter2 + 1400) || (v12 & 0xFFF) != 0 )
        {
          if ( v37 )
          {
            HvpMapEntryReleaseBlockAddress(v14, CellMap);
            v37 = 0;
          }
          v5 = -1073741492;
          break;
        }
        if ( v37 )
        {
          HvpMapEntryReleaseBlockAddress(v14, CellMap);
          v37 = 0;
        }
      }
    }
    if ( i < *(_DWORD *)(BugCheckParameter2 + 1400) )
      return v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v17 = *(_OWORD **)(BugCheckParameter2 + 64);
    v18 = 32LL;
    do
    {
      *PoolWithTag = *v17;
      PoolWithTag[1] = v17[1];
      PoolWithTag[2] = v17[2];
      PoolWithTag[3] = v17[3];
      PoolWithTag[4] = v17[4];
      PoolWithTag[5] = v17[5];
      PoolWithTag[6] = v17[6];
      PoolWithTag += 8;
      v19 = v17[7];
      v17 += 8;
      *(PoolWithTag - 1) = v19;
      --v18;
    }
    while ( v18 );
    v16[10] = v4;
    v16[11] = 1;
    v16[127] = HvpHeaderCheckSum(v16);
    v38 = 0;
    v34 = 0;
    v35 = v16;
    v36 = 4096;
    v20 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40))(
            BugCheckParameter2,
            2LL,
            &v34);
    ExFreePoolWithTag(v16, 0);
    if ( !v20 )
      return 3221225805LL;
    v21 = 0;
    v38 = (v38 + 4095) & 0xFFFFF000;
    if ( !v4 )
      return CmpFileFlush(BugCheckParameter2, 2u) != 0 ? 0 : 0xC000014D;
    while ( 1 )
    {
      v22 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v21);
      if ( !v22 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0xBCFuLL);
      v23 = HvpMapEntryGetFreeBin();
      v25 = v23;
      if ( !v23 )
        break;
      v26 = *(unsigned int *)(v23 + 24);
      v27 = *(unsigned int *)(v23 + 16);
      if ( (v26 & 1) != 0 )
      {
        v28 = HvpMapEntryGetBinAddress(v26, v22, &v37, &v39);
LABEL_34:
        v29 = v37;
        v32 = (_DWORD *)v28;
        goto LABEL_35;
      }
      v29 = 0;
      v30 = *(unsigned int *)(v23 + 16);
      v37 = 0;
      v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x62484D43u);
      v6 = v31;
      if ( !v31 )
        return 3221225626LL;
      memset(v31, 0, v27);
      *v6 = 1852400232;
      v6[1] = v21;
      v32 = v6;
      v6[2] = v27;
      v6[8] = v27 - 32;
LABEL_35:
      v34 = v38;
      v35 = v32;
      v36 = v27;
      if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40))(
              BugCheckParameter2,
              2LL,
              &v34) )
      {
        if ( v29 )
          HvpMapEntryReleaseBlockAddress(v33, v22);
        return 3221225805LL;
      }
      if ( v25 && (*(_DWORD *)(v25 + 24) & 1) == 0 )
        ExFreePoolWithTag(v6, 0);
      if ( v29 )
      {
        HvpMapEntryReleaseBlockAddress(v33, v22);
        v37 = 0;
      }
      v21 += v27;
      if ( v21 >= v40 )
        return CmpFileFlush(BugCheckParameter2, 2u) != 0 ? 0 : 0xC000014D;
    }
    v28 = HvpMapEntryGetBinAddress(v24, v22, &v37, &v39);
    v6 = (_DWORD *)v28;
    LODWORD(v27) = *(_DWORD *)(v28 + 8);
    goto LABEL_34;
  }
  return result;
}
