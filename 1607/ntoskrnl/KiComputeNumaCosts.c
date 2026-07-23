/*
 * XREFs of KiComputeNumaCosts @ 0x1407927E0
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1400A89F4 (MmAllocateNodePagesForMdlEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1401BAE2C (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void KiComputeNumaCosts()
{
  PVOID PoolWithTag; // rax
  int v1; // r8d
  int v2; // r13d
  unsigned int v3; // edx
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // ecx
  __int16 v8; // di
  unsigned int v9; // r15d
  __int64 *v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int i; // r14d
  struct _MDL *NodePagesForMdl; // rax
  struct _MDL *v16; // r12
  char *v17; // rdi
  unsigned __int8 CurrentIrql; // r8
  char *v19; // rdx
  unsigned __int64 v20; // r9
  int v21; // edx
  unsigned int j; // r9d
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  unsigned int v25; // r10d
  int v26; // esi
  __int64 v27; // rcx
  unsigned __int16 v28; // ax
  int v29; // r11d
  __int64 v30; // rax
  unsigned int v31; // edi
  unsigned int k; // esi
  unsigned int v33; // r10d
  int v34; // r15d
  _QWORD *v35; // r9
  __int64 *v36; // r11
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // edi
  int m; // ecx
  __int64 v41; // rdx
  __int16 v42; // cx
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Base; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v47[127]; // [rsp+80h] [rbp-88h] BYREF

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    ((2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL)
                  + 8LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes,
                    0x634E654Bu);
    KiNodeGraph = PoolWithTag;
    if ( PoolWithTag )
    {
      v1 = (unsigned __int16)KeNumberNodes;
      v2 = 0;
      v3 = (unsigned __int16)KeNumberNodes;
      KiActualNodeCost = (void *)(((unsigned __int64)PoolWithTag + 2 * v1 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v1 * v1 )
        memset(
          (void *)(((unsigned __int64)PoolWithTag
                  + 2 * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes
                  + 7) & 0xFFFFFFFFFFFFFFF8uLL),
          0xFFu,
          8LL * (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes);
      Affinity.Mask = 0LL;
      v4 = 0;
      *(_QWORD *)&Affinity.Group = 0LL;
      if ( v3 )
      {
        while ( 1 )
        {
          v5 = KeNodeBlock[v4];
          if ( (HvlEnlightenments & 0x800) != 0 )
          {
            v6 = 0;
            if ( v3 )
            {
              do
              {
                HvlQueryNumaDistance(v4, v6, &v44);
                v7 = v4 * (unsigned __int16)KeNumberNodes;
                if ( v44 == -1 )
                  *((_QWORD *)KiActualNodeCost + v6 + v7) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v6 + v7) = (unsigned __int64)(v44 << 9) >> 10;
                LOWORD(v1) = KeNumberNodes;
                ++v6;
              }
              while ( v6 < (unsigned __int16)KeNumberNodes );
            }
          }
          else
          {
            v8 = *(_WORD *)(v5 + 146);
            if ( v8 == *(_WORD *)(v5 + 148) )
            {
              if ( *(_QWORD *)(v5 + 136) )
              {
                v9 = v4;
              }
              else
              {
                v9 = 0;
                if ( v3 )
                {
                  v10 = KeNodeBlock;
                  do
                  {
                    v5 = *v10;
                    if ( *(_WORD *)(*v10 + 148) == v8 && *(_QWORD *)(v5 + 136) )
                      break;
                    ++v9;
                    ++v10;
                  }
                  while ( v9 < v3 );
                }
                if ( v9 == v3 )
                  goto LABEL_36;
              }
              v11 = *(_WORD *)(v5 + 144);
              v12 = *(_QWORD *)(v5 + 136);
              Affinity.Group = v11;
              Affinity.Mask = (v12 ^ (v12 - 1)) & v12;
              if ( v2 )
              {
                p_PreviousAffinity = 0LL;
              }
              else
              {
                v2 = 1;
                p_PreviousAffinity = &PreviousAffinity;
              }
              KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
              LOWORD(v1) = KeNumberNodes;
              for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
              {
                NodePagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(0, -1, 0, 4096, 0, i, 7);
                v16 = NodePagesForMdl;
                if ( NodePagesForMdl )
                {
                  v17 = (char *)MmMapLockedPagesSpecifyCache(NodePagesForMdl, 0, MmNonCached, 0LL, 0, 0x40000020u);
                  if ( v17 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v19 = v17 + 4096;
                    v20 = __rdtsc();
                    while ( v17 < v19 )
                      v17 += 8;
                    __writecr8(CurrentIrql);
                    *((_QWORD *)KiActualNodeCost + i + v9 * (unsigned __int16)KeNumberNodes) = __rdtsc() - v20;
                  }
                  MiFreePagesFromMdl((ULONG_PTR)v16, 0);
                  ExFreePoolWithTag(v16, 0);
                }
                LOWORD(v1) = KeNumberNodes;
              }
            }
          }
LABEL_36:
          ++v4;
          v3 = (unsigned __int16)v1;
          if ( v4 >= (unsigned __int16)v1 )
          {
            if ( v2 == 1 )
            {
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
              LOWORD(v1) = KeNumberNodes;
            }
            break;
          }
        }
      }
      v21 = (unsigned __int16)v1;
      for ( j = 0; j < (unsigned __int16)v1; v21 = (unsigned __int16)v1 )
      {
        v23 = KeNodeBlock[j];
        v24 = *(_WORD *)(v23 + 146);
        if ( v24 == *(_WORD *)(v23 + 148) )
        {
          v25 = 0;
          v26 = v21 * v24;
          if ( v21 )
          {
            do
            {
              v27 = KeNodeBlock[v25];
              v28 = *(_WORD *)(v27 + 146);
              if ( v28 == *(_WORD *)(v27 + 148) )
              {
                v29 = v28;
                v30 = (unsigned int)v28 + v26;
                if ( *((_QWORD *)KiActualNodeCost + v30) == -1LL )
                {
                  *((_QWORD *)KiActualNodeCost + (unsigned int)v30) = *((_QWORD *)KiActualNodeCost
                                                                      + (unsigned int)*(unsigned __int16 *)(KeNodeBlock[j] + 146)
                                                                      + v21 * v29);
                  LOWORD(v1) = KeNumberNodes;
                }
              }
              ++v25;
              v21 = (unsigned __int16)v1;
            }
            while ( v25 < (unsigned __int16)v1 );
          }
        }
        ++j;
      }
      v31 = (unsigned __int16)v1;
      for ( k = 0; k < (unsigned __int16)v1; v31 = (unsigned __int16)v1 )
      {
        v33 = 0;
        v34 = v31 * *(unsigned __int16 *)(KeNodeBlock[k] + 148);
        if ( v31 )
        {
          v35 = v47;
          v36 = KeNodeBlock;
          do
          {
            v37 = *v36;
            *((_DWORD *)v35 - 2) = v33;
            if ( v37 )
            {
              v38 = *((_QWORD *)KiActualNodeCost + v34 + (unsigned int)*(unsigned __int16 *)(v37 + 146));
              *v35 = v38;
              if ( !v38 )
                *v35 = 1LL;
            }
            else
            {
              *v35 = -1LL;
            }
            ++v33;
            ++v36;
            v35 += 2;
          }
          while ( v33 < v31 );
        }
        v47[2 * k] = 0LL;
        qsort(&Base, (unsigned __int16)v1, 0x10uLL, MiNodeCostSort);
        LOWORD(v1) = KeNumberNodes;
        v39 = 0;
        for ( m = (unsigned __int16)KeNumberNodes;
              v39 < (unsigned __int16)KeNumberNodes;
              m = (unsigned __int16)KeNumberNodes )
        {
          v41 = v39 + k * m;
          v42 = v47[2 * v39++ - 1];
          *((_WORD *)KiNodeGraph + v41) = v42;
          LOWORD(v1) = KeNumberNodes;
        }
        ++k;
      }
    }
  }
}
