/*
 * XREFs of HvWriteExternal @ 0x1406065A8
 * Callers:
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     CmpFileFlush @ 0x1406042B8 (CmpFileFlush.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  _DWORD *v2; // rdi
  char v3; // r13
  struct _EX_RUNDOWN_REF *v4; // r14
  __int64 result; // rax
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  __int64 v11; // rcx
  int v12; // r15d
  unsigned __int64 BinAddress; // rax
  unsigned int v14; // ebx
  _OWORD *PoolWithTag; // rax
  _DWORD *v16; // r15
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  unsigned int v20; // r12d
  unsigned int v21; // r9d
  char v22; // bl
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rcx
  SIZE_T v27; // r15
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  unsigned int v30; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v31; // [rsp+38h] [rbp-18h]
  int v32; // [rsp+40h] [rbp-10h]
  __int16 v33; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+48h]
  unsigned int v35; // [rsp+A0h] [rbp+50h]

  v2 = 0LL;
  v3 = 0;
  HvpGetBinContextInitialize(&v33);
  v4 = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2680) )
    return 3221225485LL;
  v6 = *(_DWORD *)(BugCheckParameter2 + 1400);
  v35 = v6;
  result = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v6 + 4096, 0);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v8);
        v4 = (struct _EX_RUNDOWN_REF *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0xB5DuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v12 = *(_DWORD *)(FreeBin + 16);
        if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
        {
          BinAddress = HvpMapEntryGetBinAddress(v11, (struct _EX_RUNDOWN_REF *)v11, &v33);
LABEL_10:
          v2 = (_DWORD *)BinAddress;
        }
        if ( v2 )
        {
          if ( v12 + v8 > *(_DWORD *)(BugCheckParameter2 + 1400) || (v12 & 0xFFF) != 0 )
          {
            v14 = -1073741492;
            goto LABEL_41;
          }
          HvpMapEntryReleaseBinAddress(v11, v4, &v33);
          v2 = 0LL;
        }
        v8 += v12;
        if ( v8 >= v35 )
          goto LABEL_16;
      }
      BinAddress = HvpMapEntryGetBinAddress(v11, v4, &v33);
      v12 = *(_DWORD *)(BinAddress + 8);
      goto LABEL_10;
    }
LABEL_16:
    if ( v8 < *(_DWORD *)(BugCheckParameter2 + 1400) )
      return v7;
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
    v20 = v35;
    v16[10] = v35;
    v16[11] = 1;
    v16[127] = HvpHeaderCheckSum(v16);
    v34 = v21;
    v30 = v21;
    v31 = v16;
    v32 = 4096;
    v22 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40))(
            BugCheckParameter2,
            2LL,
            &v30);
    ExFreePoolWithTag(v16, 0);
    if ( !v22 )
      return 3221225805LL;
    v23 = 0;
    v34 = (v34 + 4095) & 0xFFFFF000;
    if ( !v20 )
    {
LABEL_40:
      v11 = (unsigned int)-(CmpFileFlush(BugCheckParameter2, 2u) == 0);
      v14 = v11 & 0xC000014D;
      goto LABEL_41;
    }
    while ( 1 )
    {
      v24 = HvpGetCellMap(BugCheckParameter2, v23);
      v4 = (struct _EX_RUNDOWN_REF *)v24;
      if ( !v24 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v23, 0xBC6uLL);
      v25 = HvpMapEntryGetFreeBin(v24);
      if ( !v25 )
        break;
      v27 = *(unsigned int *)(v25 + 16);
      if ( (*(_DWORD *)(v25 + 24) & 1) != 0 )
      {
        v28 = HvpMapEntryGetBinAddress((__int64)v26, v26, &v33);
LABEL_34:
        v3 = 0;
        v2 = (_DWORD *)v28;
        goto LABEL_35;
      }
      v29 = ExAllocatePoolWithTag(PagedPool, v27, 0x62484D43u);
      v2 = v29;
      if ( !v29 )
        return (unsigned int)-1073741670;
      v3 = 1;
      memset(v29, 0, v27);
      *v2 = 1852400232;
      v2[1] = v23;
      v2[2] = v27;
      v2[8] = v27 - 32;
LABEL_35:
      v30 = v34;
      v31 = v2;
      v32 = v27;
      if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40))(
              BugCheckParameter2,
              2LL,
              &v30) )
      {
        v14 = -1073741491;
LABEL_41:
        if ( v2 )
        {
          if ( v3 )
            ExFreePoolWithTag(v2, 0);
          else
            HvpMapEntryReleaseBinAddress(v11, v4, &v33);
        }
        return v14;
      }
      if ( v3 )
        ExFreePoolWithTag(v2, 0);
      else
        HvpMapEntryReleaseBinAddress(v11, v4, &v33);
      v2 = 0LL;
      v23 += v27;
      if ( v23 >= v20 )
        goto LABEL_40;
    }
    v28 = HvpMapEntryGetBinAddress((__int64)v26, v4, &v33);
    LODWORD(v27) = *(_DWORD *)(v28 + 8);
    goto LABEL_34;
  }
  return result;
}
