/*
 * XREFs of HvpDropPagedBins @ 0x14054E0E8
 * Callers:
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     RtlAreBitsClear @ 0x14008275C (RtlAreBitsClear.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14047DEC0 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x14060FD68 (HvViewMapStart.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  bool v2; // zf
  struct _EX_RUNDOWN_REF *v3; // r13
  int v4; // r15d
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // r8d
  __int64 CellMap; // rax
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 FreeBin; // rax
  unsigned int v13; // r8d
  int Bin; // eax
  unsigned __int64 v15; // r12
  int v16; // esi
  void *v17; // r14
  unsigned int v18; // esi
  void *v19; // rax
  __int64 v20; // rcx
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-30h]
  void *Src; // [rsp+50h] [rbp-28h]
  void *v25; // [rsp+58h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-18h]
  __int16 v27; // [rsp+C0h] [rbp+48h] BYREF
  size_t Size; // [rsp+C8h] [rbp+50h]
  unsigned int v29; // [rsp+D0h] [rbp+58h]
  void *Length; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  HvpGetBinContextInitialize(&v27);
  v2 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
  v3 = 0LL;
  Length = 0LL;
  *(_QWORD *)StartingIndex = 0LL;
  LODWORD(Size) = 0;
  if ( v2 )
    v4 = ((unsigned __int8)~*(_BYTE *)(BugCheckParameter2 + 144) >> 4) & 1;
  else
    v4 = 2;
  v6 = HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) + 1;
  if ( v4 != v6 )
  {
    if ( v6 == 2 )
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
    v7 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( v7 )
    {
      if ( v4 )
      {
        v9 = 0;
      }
      else
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, 0);
        v3 = (struct _EX_RUNDOWN_REF *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x1602uLL);
        v9 = *(_DWORD *)(CellMap + 32);
      }
      v2 = v6 == 1;
      v29 = v9;
      v10 = 0;
      if ( v2 )
        v7 = v9;
      v23 = v7;
      if ( v7 )
      {
        do
        {
          v11 = HvpGetCellMap(BugCheckParameter2, v10);
          v3 = (struct _EX_RUNDOWN_REF *)v11;
          if ( !v11 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x161AuLL);
          FreeBin = HvpMapEntryGetFreeBin(v11);
          v26 = FreeBin;
          v5 = FreeBin;
          if ( !FreeBin || (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
          {
            Src = (void *)HvpMapEntryGetBinAddress(FreeBin, v3, &v27);
            LODWORD(Size) = *((_DWORD *)Src + 2);
            Bin = HvpAllocateBin(
                    BugCheckParameter2,
                    (unsigned int)Size,
                    0,
                    v10,
                    0x35324D43u,
                    (__int64 *)StartingIndex,
                    (__int64 *)&Length);
            v15 = *(_QWORD *)StartingIndex;
            v16 = Bin;
            v17 = Length;
            if ( Bin < 0 )
              goto LABEL_29;
            v18 = Size;
            v19 = *(void **)StartingIndex;
            if ( Length )
              v19 = Length;
            v2 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
            v25 = v19;
            if ( !v2 )
            {
              LODWORD(Length) = (unsigned int)Size >> 9;
              StartingIndex[0] = v10 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v10 >> 9, (unsigned int)Size >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), StartingIndex[0], (ULONG)Length) )
              {
                v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v10 + 4096, v18);
                if ( v16 < 0 )
                  goto LABEL_29;
                v18 = Size;
              }
            }
            if ( v25 != v17 && (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            {
              LODWORD(Length) = v18 >> 9;
              StartingIndex[0] = v10 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v10 >> 9, v18 >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), StartingIndex[0], (ULONG)Length) )
              {
                v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v10 + 4096, (char *)Src, v18);
                if ( v16 < 0 )
                  goto LABEL_29;
                v18 = Size;
              }
            }
            else
            {
              memmove(v25, Src, v18);
            }
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v15, (__int64)v17, v18, v10, v26);
            *(_QWORD *)StartingIndex = 0LL;
            Length = 0LL;
            if ( v10 >= v29 )
              (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(Src, v18);
            HvpMapEntryReleaseBinAddress(v20, v3, &v27);
            v13 = v23;
            v10 += v18;
            Src = 0LL;
          }
          else
          {
            v10 += *(_DWORD *)(FreeBin + 16);
          }
        }
        while ( v10 < v13 );
      }
    }
  }
  v16 = 0;
  if ( !v4 )
  {
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x10u;
    v17 = Length;
    v15 = *(_QWORD *)StartingIndex;
LABEL_29:
    if ( v15 || v17 )
      HvpFreeBin(BugCheckParameter2, Size, 0, v15, (unsigned __int64)v17);
    if ( Src )
      HvpMapEntryReleaseBinAddress(v5, v3, &v27);
  }
  return (unsigned int)v16;
}
