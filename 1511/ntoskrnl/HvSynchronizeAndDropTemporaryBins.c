/*
 * XREFs of HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     RtlCopyBitMap @ 0x1400220C8 (RtlCopyBitMap.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     RtlMergeBitMaps @ 0x1400E1998 (RtlMergeBitMaps.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvViewMapCopyToFileOffset @ 0x1401AAB98 (HvViewMapCopyToFileOffset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvViewMapUnpinForFileOffset @ 0x1405EB3DC (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvSynchronizeAndDropTemporaryBins(
        ULONG_PTR BugCheckParameter2,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        char a5)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r12
  int v12; // ebx
  unsigned int v13; // edi
  __int64 FreeBin; // rax
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // r10d
  unsigned int v18; // edi
  __int64 CellMap; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  int v22; // r13d
  unsigned __int64 v23; // r11
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  unsigned int *v27; // r8
  unsigned int *v28; // r9
  unsigned int v29; // edx
  bool i; // zf
  unsigned int v31; // r14d
  struct _EX_RUNDOWN_REF *v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rbp
  __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+90h] [rbp+8h]

  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0 )
    return 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  PagedPool,
                                  *(unsigned int *)(BugCheckParameter2 + 92),
                                  0x30364D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    Destination.Buffer = PoolWithTag;
    Destination.SizeOfBitMap = *(_DWORD *)(BugCheckParameter2 + 72);
    if ( !a2 )
    {
      memset(PoolWithTag, 0, *(unsigned int *)(BugCheckParameter2 + 92));
      goto LABEL_13;
    }
    RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter2 + 72), &Destination, 0);
    RtlMergeBitMaps((__int64)&Destination, BugCheckParameter2 + 96);
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
    {
      if ( *(struct _KTHREAD **)(BugCheckParameter2 + 5440) == KeGetCurrentThread() && !a5 )
        goto LABEL_13;
      RtlMergeBitMaps((__int64)&Destination, BugCheckParameter2 + 2856);
    }
    if ( a5 )
      RtlMergeBitMaps((__int64)&Destination, BugCheckParameter2 + 2904);
LABEL_13:
    v37 = 0;
    if ( !a4 )
      goto LABEL_46;
    while ( 1 )
    {
      v13 = (*a3 & 0xFFFFF000) - 4096;
      if ( !HvpGetCellMap(BugCheckParameter2, v13) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x8A2uLL);
      FreeBin = HvpMapEntryGetFreeBin();
      if ( FreeBin )
        v18 = *(_DWORD *)(FreeBin + 20);
      else
        v18 = v13 - *v15;
      if ( v18 >= v16 + a3[4] - 4096 )
        goto LABEL_45;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v18);
        v20 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v18, 0x8B9uLL);
        v21 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v22 = *(_DWORD *)(v20 + 32);
        v23 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        v34 = v23;
        v35 = v21;
        if ( !v23 )
        {
          v18 += v22;
          continue;
        }
        v24 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v25 = (v24 + v18) >> 9;
            v26 = v25 + 7;
            if ( v25 + 7 >= Destination.SizeOfBitMap )
              goto LABEL_33;
            v27 = &v11[(unsigned __int64)v25 >> 5];
            v28 = &v11[(unsigned __int64)v26 >> 5];
            if ( v27 != v28 )
              break;
            v29 = 255 << v25;
LABEL_26:
            if ( (v29 & *v27) != 0 )
              goto LABEL_33;
            HvViewMapUnpinForFileOffset(BugCheckParameter2 + 200, v24 + v18 + 4096, 4096LL);
LABEL_34:
            v23 = v34;
            v24 += 4096;
            if ( v24 >= *(_DWORD *)(v20 + 32) )
            {
              v21 = v35;
              goto LABEL_36;
            }
          }
          for ( i = ((-1 << v25) & *v27) == 0; i; i = *v27 == 0 )
          {
            if ( ++v27 == v28 )
            {
              v29 = 0xFFFFFFFF >> (-1 - v26);
              goto LABEL_26;
            }
          }
LABEL_33:
          v12 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v24 + v18 + 4096, v23 + v24, 4096LL);
          if ( v12 < 0 )
            goto LABEL_47;
          goto LABEL_34;
        }
LABEL_36:
        if ( v21 )
        {
          v31 = v18 + v22;
          while ( v18 < v31 )
          {
            v32 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v18);
            v33 = v32;
            if ( !v32 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v18, 0x90FuLL);
            ExWaitForRundownProtectionRelease(v32 + 3);
            v33[2].Count = 0LL;
            _InterlockedExchange64((volatile __int64 *)&v33[3], 1LL);
            v18 += 4096;
          }
          HvpFreeBin(BugCheckParameter2, v22, 0, 0, v34);
        }
        else
        {
          v18 += *(_DWORD *)(v20 + 32);
        }
      }
      while ( v18 < a3[4] + *a3 - 4096 );
      v17 = v37;
LABEL_45:
      a3 += 6;
      v37 = v17 + 1;
      if ( v17 + 1 >= a4 )
      {
LABEL_46:
        v12 = 0;
LABEL_47:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)v12;
      }
    }
  }
  return (unsigned int)-1073741670;
}
