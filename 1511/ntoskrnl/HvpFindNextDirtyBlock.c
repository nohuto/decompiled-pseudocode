/*
 * XREFs of HvpFindNextDirtyBlock @ 0x1403ED550
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x140022334 (HvpFindNextDirtyRun.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryGetBlockAddress @ 0x140040CA0 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400A04B8 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        unsigned int *a6,
        char a7)
{
  char *PoolWithTag; // r15
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  struct _EX_RUNDOWN_REF *CellMap; // r14
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 BlockAddress; // rcx
  unsigned int v16; // edi
  unsigned int v17; // edx
  unsigned int v18; // r13d
  unsigned int v19; // esi
  bool v20; // zf
  unsigned int v22; // edi
  unsigned int v23; // ebx
  __int64 v24; // rax
  ULONG_PTR v25; // r8
  struct _EX_RUNDOWN_REF *v26; // r13
  __int64 v27; // rcx
  _OWORD *v28; // rdx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  unsigned __int64 BinAddress; // rax
  BOOLEAN v32; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN v33[3]; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned int v34; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v35; // [rsp+38h] [rbp-18h] BYREF
  int v36; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+48h] [rbp-8h]

  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(a2, a3, &v34, &v35, 0LL) )
    return 0;
  v10 = v34 << 9;
  v11 = (v35 << 9) - (v34 << 9);
  v37 = v35 << 9;
  if ( !a7 || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x33354D43u)) != 0LL )
  {
    CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v10);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x12FDuLL);
    FreeBin = HvpMapEntryGetFreeBin();
    if ( FreeBin )
      BlockAddress = v10 - *(_DWORD *)(FreeBin + 20) + HvpMapEntryGetBinAddress((__int64)v14, v14, &v32, &v36);
    else
      BlockAddress = HvpMapEntryGetBlockAddress((__int64)v14, v14, &v32, &v36);
    if ( a7 )
      *a4 = PoolWithTag;
    else
      *a4 = BlockAddress + (v10 & 0xFFF);
    v16 = v10 + 4096;
    v17 = v34 & 7;
    v18 = v35 - v34;
    v19 = 8 - v17;
    if ( v35 - v34 < 8 - v17 )
      v19 = v35 - v34;
    *a6 = v16;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(BlockAddress + (v17 << 9)), v19 << 9);
      PoolWithTag += 512 * v19;
    }
    if ( v18 > v19 )
    {
      v22 = v16 & 0xFFFFF000;
      v23 = v19 << 9;
      while ( 1 )
      {
        if ( v23 >= v11 )
          goto LABEL_23;
        v24 = HvpGetCellMap(BugCheckParameter2, v22);
        v26 = (struct _EX_RUNDOWN_REF *)v24;
        if ( !v24 )
          KeBugCheckEx(0x51u, 1uLL, v25, v22, 0x136BuLL);
        if ( !a7 && (unsigned __int8)HvpMapEntryIsNewAlloc(v24) )
        {
LABEL_23:
          *a5 = v23;
          if ( v19 + v34 != v35 )
          {
            BlockAddress = (unsigned __int64)a3;
            *a3 = v19 + v34;
          }
          goto LABEL_14;
        }
        v38 = HvpMapEntryGetFreeBin();
        if ( v38 )
        {
          BinAddress = HvpMapEntryGetBinAddress(v27, v26, v33, &v36);
          v28 = (_OWORD *)(v22 - *(_DWORD *)(v38 + 20) + BinAddress);
        }
        else
        {
          v28 = (_OWORD *)HvpMapEntryGetBlockAddress(v27, v26, v33, &v36);
        }
        BlockAddress = v37;
        if ( v37 - v22 <= 0x1000 )
          break;
        if ( a7 )
        {
          BlockAddress = 32LL;
          v29 = PoolWithTag;
          do
          {
            *v29 = *v28;
            v29[1] = v28[1];
            v29[2] = v28[2];
            v29[3] = v28[3];
            v29[4] = v28[4];
            v29[5] = v28[5];
            v29[6] = v28[6];
            v29 += 8;
            v30 = v28[7];
            v28 += 8;
            *(v29 - 1) = v30;
            --BlockAddress;
          }
          while ( BlockAddress );
          PoolWithTag += 4096;
        }
        v23 += 4096;
        v19 += 8;
        v22 += 4096;
        if ( v33[0] )
          HvpMapEntryReleaseBlockAddress(BlockAddress, v26);
      }
      if ( a7 )
        memmove(PoolWithTag, v28, v37 - v22);
      *a5 = v11;
      if ( v33[0] )
        HvpMapEntryReleaseBlockAddress(BlockAddress, v26);
      v20 = v32 == 0;
    }
    else
    {
      *a5 = v11;
LABEL_14:
      v20 = v32 == 0;
    }
    if ( !v20 )
      HvpMapEntryReleaseBlockAddress(BlockAddress, CellMap);
  }
  else
  {
    *a4 = 0LL;
  }
  return 1;
}
