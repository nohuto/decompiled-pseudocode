/*
 * XREFs of HvpDropPagedBins @ 0x1405987EC
 * Callers:
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     RtlAreBitsClear @ 0x14011717C (RtlAreBitsClear.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0820 (HvViewMapCopyToFileOffset.c)
 *     HvpPointMapEntriesToBuffer @ 0x14049F18C (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpAllocateBin @ 0x1404A022C (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1404AF958 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x140663100 (HvViewMapStart.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  bool v1; // zf
  size_t v3; // r13
  int v4; // r15d
  int v5; // edi
  unsigned int v6; // r8d
  __int64 CellMap; // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int Bin; // eax
  unsigned __int64 v15; // r12
  int v16; // esi
  __int64 v17; // r14
  void *v18; // rsi
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-30h]
  void *Src; // [rsp+50h] [rbp-28h]
  void *v23; // [rsp+58h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-18h]
  BOOLEAN v25; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+50h]
  int v27; // [rsp+D0h] [rbp+58h] BYREF
  void *Length; // [rsp+D8h] [rbp+60h] BYREF

  v27 = -1;
  v1 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
  v25 = 0;
  LODWORD(v3) = 0;
  Length = 0LL;
  *(_QWORD *)StartingIndex = 0LL;
  if ( v1 )
    v4 = ((unsigned __int8)~*(_BYTE *)(BugCheckParameter2 + 144) >> 4) & 1;
  else
    v4 = 2;
  v5 = HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) + 1;
  if ( v4 != v5 )
  {
    if ( v5 == 2 )
    {
      v16 = HvViewMapStart(
              BugCheckParameter2 + 200,
              BugCheckParameter2,
              *(_QWORD *)(BugCheckParameter2 + 2664),
              *(unsigned int *)(BugCheckParameter2 + 2968),
              1);
      if ( v16 < 0 )
        return (unsigned int)v16;
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
    }
    v6 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( v6 )
    {
      if ( v4 )
      {
        v8 = 0;
      }
      else
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, 0);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x1627uLL);
        v8 = *(_DWORD *)(CellMap + 32);
      }
      v1 = v5 == 1;
      v26 = v8;
      v9 = 0;
      if ( v1 )
        v6 = v8;
      v21 = v6;
      if ( v6 )
      {
        do
        {
          if ( !HvpGetCellMap(BugCheckParameter2, v9) )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0x163FuLL);
          FreeBin = HvpMapEntryGetFreeBin();
          v24 = FreeBin;
          if ( !FreeBin || (v12 = *(unsigned int *)(FreeBin + 24), (v12 & 1) != 0) )
          {
            Src = (void *)HvpMapEntryGetBinAddress(v12, v11, &v25, &v27);
            v3 = *((unsigned int *)Src + 2);
            Bin = HvpAllocateBin(
                    BugCheckParameter2,
                    (unsigned int)v3,
                    0,
                    v9,
                    0x35324D43u,
                    (__int64 *)StartingIndex,
                    (__int64 *)&Length);
            v15 = *(_QWORD *)StartingIndex;
            v16 = Bin;
            v17 = (__int64)Length;
            if ( Bin < 0 )
              goto LABEL_29;
            v18 = *(void **)StartingIndex;
            if ( Length )
              v18 = Length;
            v1 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
            v23 = v18;
            if ( !v1 )
            {
              LODWORD(Length) = (unsigned int)v3 >> 9;
              StartingIndex[0] = v9 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v9 >> 9, (unsigned int)v3 >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), StartingIndex[0], (ULONG)Length) )
              {
                v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v9 + 4096, (unsigned int)v3);
                if ( v16 < 0 )
                  goto LABEL_29;
                v18 = v23;
              }
            }
            if ( v18 != (void *)v17 && (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            {
              LODWORD(Length) = v9 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v9 >> 9, (unsigned int)v3 >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), (ULONG)Length, (unsigned int)v3 >> 9) )
              {
                v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v9 + 4096, (char *)Src, v3);
                if ( v16 < 0 )
                  goto LABEL_29;
              }
            }
            else
            {
              memmove(v18, Src, v3);
            }
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v15, v17, v3, v9, v24);
            *(_QWORD *)StartingIndex = 0LL;
            Length = 0LL;
            if ( v9 >= v26 )
              (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(Src, (unsigned int)v3);
            v13 = v21;
            v9 += v3;
          }
          else
          {
            v9 += *(_DWORD *)(FreeBin + 16);
          }
        }
        while ( v9 < v13 );
      }
    }
  }
  v16 = 0;
  if ( !v4 )
  {
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x10u;
    v17 = (__int64)Length;
    v15 = *(_QWORD *)StartingIndex;
LABEL_29:
    if ( v15 || v17 )
      HvpFreeBin(BugCheckParameter2, v3, 0, v15, v17);
  }
  return (unsigned int)v16;
}
