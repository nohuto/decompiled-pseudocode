/*
 * XREFs of MiAllocateFileExtents @ 0x14065A430
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x1401EAAB4 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14065ACA8 (MiInitializeImageExtents.c)
 * Callees:
 *     MiEndingOffset @ 0x140023170 (MiEndingOffset.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiSetSubsectionBase @ 0x1400B29F0 (MiSetSubsectionBase.c)
 *     FsRtlGetFileExtents @ 0x1401B8094 (FsRtlGetFileExtents.c)
 *     MiBuildFileOnlyProtos @ 0x1401ECFD8 (MiBuildFileOnlyProtos.c)
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     MiConvertRunsToPages @ 0x1401ED338 (MiConvertRunsToPages.c)
 *     MiEliminateStaleExtents @ 0x1401ED424 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x1401EDAE0 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1401EDB84 (MiUnlinkSubsectionWaitBlock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MiAddFileOnlyPfns @ 0x14065A3C0 (MiAddFileOnlyPfns.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        __int64 BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        int a5)
{
  unsigned int *v5; // rbp
  unsigned __int64 v7; // rax
  _DWORD *v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  ULONG_PTR v15; // r12
  int v16; // r14d
  unsigned int v17; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rsi
  __int64 v21; // rdx
  int v22; // r12d
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int FileExtents; // r13d
  _DWORD *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r8d
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r10
  int v32; // eax
  unsigned __int64 v33; // r15
  _QWORD *v34; // rbx
  int v35; // r14d
  bool v36; // zf
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  int v39; // r12d
  __int64 v40; // r13
  __int64 v41; // rsi
  int v42; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v43; // [rsp+F8h] [rbp+A8h]

  v43 = a2;
  v5 = (unsigned int *)((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v5 + 3) = 0LL;
  v7 = (unsigned int)(a4 << 12);
  *((_QWORD *)v5 + 5) = v7;
  while ( 1 )
  {
    v8 = *(_DWORD **)BugCheckParameter2;
    v9 = v7;
    *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *(_QWORD *)BugCheckParameter2;
    if ( (v8[14] & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 8);
      *v5 = 1;
      v11 = MiStartingOffset((__int64 *)BugCheckParameter2, v10, 0);
      v12 = MiEndingOffset(BugCheckParameter2);
      *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v12;
      if ( v11 == v12 && !v11 )
        return 0LL;
      if ( v11 + v9 > v12 )
        v9 = ((unsigned int)(v12 - v11) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v13 = *(unsigned int *)(BugCheckParameter2 + 36);
      v14 = *(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0;
      *v5 = 2;
      v11 = (a2 + (v13 | (v14 << 26))) << 12;
    }
    v15 = MiReferenceControlAreaFile((__int64)v8);
    *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v15;
    v16 = (__rdtsc() >> 4) & 7;
    if ( !v16 )
      v16 = 1;
    v17 = v16 + 8;
    if ( !v17 )
    {
LABEL_13:
      MiDereferenceControlAreaFile((__int64)v8, v15);
      return 3221225626LL;
    }
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v17 - 1) + 24, 0x6546694Du);
      v19 = PoolWithTag;
      if ( PoolWithTag )
        break;
      v17 >>= 1;
      if ( !v17 )
        goto LABEL_13;
    }
    PoolWithTag[1] = 0;
    *PoolWithTag = v17;
    while ( 1 )
    {
      v21 = *v5;
      v22 = 0;
      if ( (_DWORD)v21 == 1 )
      {
        v23 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        if ( v11 + v9 > v23 )
          v9 = (unsigned int)(v23 - v11);
        v24 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v24 )
          v11 = (v24 - *(_QWORD *)(*(_QWORD *)v8 + 64LL)) >> 3;
        v11 <<= 12;
      }
      v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (_DWORD)v21 != 1 )
      {
        FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)(v5 + 12));
        if ( FileExtents < 0 )
          goto LABEL_95;
        v22 = 1;
      }
      FileExtents = FsRtlGetFileExtents(
                      *(struct _FILE_OBJECT **)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                      v21,
                      v11,
                      v9,
                      v19);
      if ( FileExtents < 0 )
      {
LABEL_95:
        MiDereferenceControlAreaFile(
          *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
          *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
        if ( v22 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)(v5 + 12), 0);
        return (unsigned int)FileExtents;
      }
      if ( v19[1] <= v17 )
        break;
      v17 = v19[1];
      ExFreePoolWithTag(v19, 0);
      v26 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (v17 - 1) + 24, 0x6546694Du);
      v19 = v26;
      if ( !v26 )
      {
        MiDereferenceControlAreaFile(
          *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
          *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
        v36 = v22 == 1;
LABEL_49:
        if ( v36 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)(v5 + 12), 0);
        return 3221225626LL;
      }
      v26[1] = 0;
      v8 = *(_DWORD **)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      *v26 = v17;
      if ( v22 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)(v5 + 12), 0);
    }
    MiDereferenceControlAreaFile(
      *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
      *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
    v27 = v19[1];
    v28 = 0;
    if ( !v27 )
      break;
    v29 = v19 + 4;
    do
    {
      v30 = *(v29 - 1);
      v31 = v30 + *v29;
      if ( v31 >= qword_1403273A0 && v30 < qword_1403273A0 + 2048 || v31 >= 0xFFFFFFFFALL )
      {
        ExFreePoolWithTag(v19, 0);
        if ( v22 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)(v5 + 12), 0);
        return 3221226535LL;
      }
      ++v28;
      v29 += 2;
    }
    while ( v28 < v27 );
    v34 = MiConvertRunsToPages((__int64)v19, (_QWORD *)v5 + 4);
    if ( !v34 )
    {
      ExFreePoolWithTag(v19, 0);
      v36 = v22 == 1;
      goto LABEL_49;
    }
    v33 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    v32 = *v5;
LABEL_41:
    if ( v32 == 1 )
      goto LABEL_61;
    v35 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)(v5 + 12));
    if ( v35 >= 0 )
    {
      if ( v34 && (a5 & 1) == 0 )
        MiEliminateStaleExtents(a3, (__int64)v34, v33);
LABEL_61:
      ExFreePoolWithTag(v19, 0);
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0;
      *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      v40 = -1LL;
      v41 = 0LL;
      while ( 2 )
      {
        if ( (unsigned int)v41 == v33 )
        {
          if ( !v38 )
            goto LABEL_80;
LABEL_64:
          if ( v40 >= 0 )
          {
            if ( v39 >= 0 )
            {
              v39 = MiAddFileOnlyPfns(v40, v38);
              if ( v39 < 0 )
              {
                v37 = (unsigned __int64)&v34[v41];
                v38 = 0LL;
                *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v37;
                LODWORD(v41) = -1;
                goto LABEL_79;
              }
            }
            else if ( (unsigned __int64)&v34[v41] <= v37 )
            {
              MiRemovePhysicalMemory(v40, v38, 18);
            }
          }
          else if ( v39 < 0 && (unsigned __int64)&v34[v41] <= v37 )
          {
            if ( (unsigned int)v41 == v33 )
              goto LABEL_80;
            v38 = 0LL;
            LODWORD(v41) = v41 - 1;
            goto LABEL_79;
          }
          if ( (unsigned int)v41 == v33 )
            goto LABEL_80;
          v38 = 0LL;
          LODWORD(v41) = v41 - 1;
        }
        else
        {
          if ( v38 )
          {
            v37 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            if ( v34[v41 - 1] + 1LL != v34[v41] )
              goto LABEL_64;
            ++v38;
LABEL_79:
            v41 = (unsigned int)(v41 + 1);
            if ( (unsigned int)v41 > v33 )
            {
LABEL_80:
              if ( v39 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 56LL) & 0x20) != 0 )
                  *(_WORD *)(BugCheckParameter2 + 34) |= 4u;
                if ( v34 )
                  MiBuildFileOnlyProtos((__int64)v34, v33, BugCheckParameter2, a3);
                if ( (a5 & 1) != 0 )
                  MiSetSubsectionBase(BugCheckParameter2, a3);
              }
              if ( *v5 == 2 )
                MiSubsectionProtosCreated((__int64 *)BugCheckParameter2, (__int64)(v5 + 12));
              if ( v34 )
                ExFreePoolWithTag(v34, 0);
              return (unsigned int)v39;
            }
            continue;
          }
          v40 = v34[v41];
          v38 = 1LL;
        }
        break;
      }
      v37 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      goto LABEL_79;
    }
    ExFreePoolWithTag(v19, 0);
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    if ( v35 != -1073740748 )
      return (unsigned int)v35;
    v7 = *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    a2 = v43;
  }
  v32 = *v5;
  if ( *v5 != 1 )
  {
    v33 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v42 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
    v34 = 0LL;
    goto LABEL_41;
  }
  ExFreePoolWithTag(v19, 0);
  if ( v22 == 1 )
    MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)(v5 + 12), 0);
  return 3221225473LL;
}
