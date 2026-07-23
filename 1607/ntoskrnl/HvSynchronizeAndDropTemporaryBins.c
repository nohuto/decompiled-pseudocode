/*
 * XREFs of HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14009C590 (RtlMergeBitMaps.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 *     HvViewMapUnpinForFileOffset @ 0x14060FF34 (HvViewMapUnpinForFileOffset.c)
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
  __int64 CellMap; // rcx
  __int64 FreeBin; // rax
  _DWORD *v16; // rcx
  int v17; // r8d
  int v18; // r10d
  unsigned int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  int v23; // r13d
  unsigned __int64 v24; // r11
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  unsigned int v27; // r10d
  unsigned int *v28; // r8
  unsigned int *v29; // r9
  unsigned int v30; // edx
  bool i; // zf
  unsigned int v32; // r14d
  struct _EX_RUNDOWN_REF *v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rbp
  __int64 v35; // [rsp+30h] [rbp-58h]
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-48h] BYREF
  int v38; // [rsp+90h] [rbp+8h]

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
    v38 = 0;
    if ( !a4 )
      goto LABEL_46;
    while ( 1 )
    {
      v13 = (*a3 & 0xFFFFF000) - 4096;
      CellMap = HvpGetCellMap(BugCheckParameter2, v13);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x899uLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
        v19 = *(_DWORD *)(FreeBin + 20);
      else
        v19 = v13 - *v16;
      if ( v19 >= v17 + a3[4] - 4096 )
        goto LABEL_45;
      do
      {
        v20 = HvpGetCellMap(BugCheckParameter2, v19);
        v21 = v20;
        if ( !v20 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x8B0uLL);
        v22 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v23 = *(_DWORD *)(v21 + 32);
        v24 = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        v35 = v24;
        v36 = v22;
        if ( !v24 )
        {
          v19 += v23;
          continue;
        }
        v25 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v26 = (v25 + v19) >> 9;
            v27 = v26 + 7;
            if ( v26 + 7 >= Destination.SizeOfBitMap )
              goto LABEL_33;
            v28 = &v11[(unsigned __int64)v26 >> 5];
            v29 = &v11[(unsigned __int64)v27 >> 5];
            if ( v28 != v29 )
              break;
            v30 = 255 << v26;
LABEL_26:
            if ( (v30 & *v28) != 0 )
              goto LABEL_33;
            HvViewMapUnpinForFileOffset(BugCheckParameter2 + 200, v25 + v19 + 4096, 4096LL);
LABEL_34:
            v24 = v35;
            v25 += 4096;
            if ( v25 >= *(_DWORD *)(v21 + 32) )
            {
              v22 = v36;
              goto LABEL_36;
            }
          }
          for ( i = ((-1 << v26) & *v28) == 0; i; i = *v28 == 0 )
          {
            if ( ++v28 == v29 )
            {
              v30 = 0xFFFFFFFF >> (-1 - v27);
              goto LABEL_26;
            }
          }
LABEL_33:
          v12 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v25 + v19 + 4096, v24 + v25, 4096LL);
          if ( v12 < 0 )
            goto LABEL_47;
          goto LABEL_34;
        }
LABEL_36:
        if ( v22 )
        {
          v32 = v19 + v23;
          while ( v19 < v32 )
          {
            v33 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v19);
            v34 = v33;
            if ( !v33 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x906uLL);
            ExWaitForRundownProtectionRelease(v33 + 3);
            v34[2].Count = 0LL;
            _InterlockedExchange64((volatile __int64 *)&v34[3], 1LL);
            v19 += 4096;
          }
          HvpFreeBin(BugCheckParameter2, v23, 0, 0, v35);
        }
        else
        {
          v19 += *(_DWORD *)(v21 + 32);
        }
      }
      while ( v19 < a3[4] + *a3 - 4096 );
      v18 = v38;
LABEL_45:
      a3 += 6;
      v38 = v18 + 1;
      if ( v18 + 1 >= a4 )
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
