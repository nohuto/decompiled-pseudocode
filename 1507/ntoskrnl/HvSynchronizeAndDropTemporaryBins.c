/*
 * XREFs of HvSynchronizeAndDropTemporaryBins @ 0x140130874
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     RtlCopyBitMap @ 0x1400EF940 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x140117218 (RtlMergeBitMaps.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0820 (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     HvViewMapUnpinForFileOffset @ 0x1406632CC (HvViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvSynchronizeAndDropTemporaryBins(
        ULONG_PTR BugCheckParameter2,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r12
  int v12; // esi
  unsigned int v13; // ebx
  __int64 FreeBin; // rax
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // r10d
  unsigned int v18; // ebx
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
  __int64 v32; // rax
  ULONG_PTR v33; // r10
  __int64 v34; // rbp
  volatile signed __int64 *v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+30h] [rbp-58h]
  unsigned __int64 v38; // [rsp+38h] [rbp-50h]
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-48h] BYREF
  int v40; // [rsp+90h] [rbp+8h]

  v5 = a4;
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
    v40 = 0;
    if ( !v5 )
      goto LABEL_47;
    while ( 1 )
    {
      v13 = (*a3 & 0xFFFFF000) - 4096;
      if ( !HvpGetCellMap(BugCheckParameter2, v13) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x891uLL);
      FreeBin = HvpMapEntryGetFreeBin();
      if ( FreeBin )
        v18 = *(_DWORD *)(FreeBin + 20);
      else
        v18 = v13 - *v15;
      if ( v18 >= v16 + a3[4] - 4096 )
        goto LABEL_46;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v18);
        v20 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v18, 0x8A8uLL);
        v21 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v22 = *(_DWORD *)(v20 + 32);
        v23 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        v37 = v23;
        v38 = v21;
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
            v23 = v37;
            v24 += 4096;
            if ( v24 >= *(_DWORD *)(v20 + 32) )
            {
              v21 = v38;
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
            goto LABEL_48;
          goto LABEL_34;
        }
LABEL_36:
        if ( v21 )
        {
          v31 = v18 + v22;
          while ( v18 < v31 )
          {
            v32 = HvpGetCellMap(BugCheckParameter2, v18);
            v34 = v32;
            if ( !v32 )
              KeBugCheckEx(0x51u, v33, BugCheckParameter2, v18, 0x8FEuLL);
            v35 = (volatile signed __int64 *)(v32 + 24);
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 24), v33, 0LL);
            if ( v36 >= 2 )
            {
              ExfWaitForRundownProtectionRelease(v35, v36);
              v33 = 1LL;
            }
            *(_QWORD *)(v34 + 16) = 0LL;
            v18 += 4096;
            _InterlockedExchange64(v35, v33);
          }
          HvpFreeBin(BugCheckParameter2, v22, 0, 0, v37);
        }
        else
        {
          v18 += *(_DWORD *)(v20 + 32);
        }
      }
      while ( v18 < *a3 + a3[4] - 4096 );
      v17 = v40;
      v5 = a4;
LABEL_46:
      a3 += 6;
      v40 = v17 + 1;
      if ( v17 + 1 >= v5 )
      {
LABEL_47:
        v12 = 0;
LABEL_48:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)v12;
      }
    }
  }
  return (unsigned int)-1073741670;
}
