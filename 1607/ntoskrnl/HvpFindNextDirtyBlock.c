/*
 * XREFs of HvpFindNextDirtyBlock @ 0x14048031C
 * Callers:
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpMapEntryIsNewAlloc @ 0x14000AEB0 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryGetBlockAddress @ 0x14002CF00 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     HvpFindNextDirtyRun @ 0x1400827F8 (HvpFindNextDirtyRun.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // r14
  unsigned int *v10; // r10
  unsigned int *v11; // r11
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  __int64 CellMap; // rax
  struct _EX_RUNDOWN_REF *v16; // r15
  struct _EX_RUNDOWN_REF *v17; // rcx
  struct _EX_RUNDOWN_REF *BlockAddress; // rcx
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v23; // edi
  unsigned int v24; // ebx
  ULONG_PTR v25; // r8
  struct _EX_RUNDOWN_REF *v26; // rcx
  _OWORD *v27; // rdx
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  struct _EX_RUNDOWN_REF *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 BinAddress; // rax
  _WORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v35[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v36; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-14h] BYREF
  struct _EX_RUNDOWN_REF *FreeBin; // [rsp+40h] [rbp-10h]
  __int64 v39; // [rsp+48h] [rbp-8h]

  HvpGetBinContextInitialize(v35);
  HvpGetBinContextInitialize(v34);
  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(v10, v11, &v36, &v37, 0LL) )
    return 0;
  v12 = v37 << 9;
  v13 = v36 << 9;
  v14 = (v37 << 9) - (v36 << 9);
  if ( !a7 || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x33354D43u)) != 0LL )
  {
    CellMap = HvpGetCellMap(a1, v13);
    v16 = (struct _EX_RUNDOWN_REF *)CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, a1, v13, 0x12D7uLL);
    FreeBin = (struct _EX_RUNDOWN_REF *)HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
    {
      BinAddress = HvpMapEntryGetBinAddress((__int64)v17, v17, v34);
      BlockAddress = (struct _EX_RUNDOWN_REF *)(v13 - HIDWORD(FreeBin[2].Ptr) + BinAddress);
    }
    else
    {
      BlockAddress = (struct _EX_RUNDOWN_REF *)HvpMapEntryGetBlockAddress((__int64)v17, v17, v34);
    }
    if ( a7 )
      *a4 = PoolWithTag;
    else
      *a4 = (char *)BlockAddress + (v13 & 0xFFF);
    v19 = v36 & 7;
    v20 = 8 - v19;
    *a6 = v13 + 4096;
    v21 = v37 - v36;
    LODWORD(FreeBin) = v37 - v36;
    if ( v37 - v36 < 8 - v19 )
      v20 = v37 - v36;
    if ( a7 )
    {
      memmove(PoolWithTag, &BlockAddress[64 * v19], v20 << 9);
      v21 = (unsigned int)FreeBin;
      PoolWithTag += 512 * v20;
    }
    if ( v21 > v20 )
    {
      v23 = (v13 + 4096) & 0xFFFFF000;
      v24 = v20 << 9;
      while ( 1 )
      {
        if ( v24 >= v14 )
          goto LABEL_21;
        FreeBin = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v23);
        BlockAddress = FreeBin;
        if ( !FreeBin )
          KeBugCheckEx(0x51u, 1uLL, v25, v23, 0x1341uLL);
        if ( !a7 && (unsigned __int8)HvpMapEntryIsNewAlloc((__int64)FreeBin) )
        {
LABEL_21:
          *a5 = v24;
          if ( v20 + v36 != v37 )
          {
            BlockAddress = a3;
            LODWORD(a3->Count) = v20 + v36;
          }
          goto LABEL_14;
        }
        v39 = HvpMapEntryGetFreeBin((__int64)BlockAddress);
        if ( v39 )
        {
          v32 = HvpMapEntryGetBinAddress((__int64)v26, v26, v35);
          v28 = v23 - *(_DWORD *)(v39 + 20);
          v27 = (_OWORD *)(v28 + v32);
        }
        else
        {
          v27 = (_OWORD *)HvpMapEntryGetBlockAddress((__int64)v26, v26, v35);
        }
        if ( v12 - v23 <= 0x1000 )
          break;
        if ( a7 )
        {
          v28 = 32LL;
          v29 = PoolWithTag;
          do
          {
            *v29 = *v27;
            v29[1] = v27[1];
            v29[2] = v27[2];
            v29[3] = v27[3];
            v29[4] = v27[4];
            v29[5] = v27[5];
            v29[6] = v27[6];
            v29 += 8;
            v30 = v27[7];
            v27 += 8;
            *(v29 - 1) = v30;
            --v28;
          }
          while ( v28 );
          PoolWithTag += 4096;
        }
        v24 += 4096;
        v23 += 4096;
        v20 += 8;
        HvpMapEntryReleaseBinAddress(v28, FreeBin, v35);
      }
      if ( a7 )
        memmove(PoolWithTag, v27, v12 - v23);
      v31 = FreeBin;
      *a5 = v14;
      HvpMapEntryReleaseBinAddress(v28, v31, v35);
    }
    else
    {
      *a5 = v14;
    }
LABEL_14:
    HvpMapEntryReleaseBinAddress((__int64)BlockAddress, v16, v34);
  }
  else
  {
    *a4 = 0LL;
  }
  return 1;
}
