/*
 * XREFs of KiComputeNumaCosts @ 0x1407DBBB8
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140076D90 (MmAllocateNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1401E5958 (HvlQueryNumaDistance.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void KiComputeNumaCosts()
{
  PVOID PoolWithTag; // rax
  int v1; // r8d
  int v2; // r13d
  unsigned int v3; // edx
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int16 v6; // di
  unsigned int v7; // r12d
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  char *v11; // rdi
  unsigned int i; // r14d
  int v13; // edx
  unsigned int j; // r9d
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  unsigned int v17; // r10d
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  int v21; // r11d
  __int64 v22; // rax
  unsigned int v23; // edi
  unsigned int k; // esi
  unsigned int v25; // r10d
  int v26; // r15d
  _QWORD *v27; // r9
  __int64 *v28; // r11
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // edi
  int m; // ecx
  __int64 v33; // rdx
  __int16 v34; // cx
  struct _MDL *NodePagesForMdl; // rax
  struct _MDL *v36; // r15
  unsigned __int8 CurrentIrql; // r8
  char *v38; // rdx
  unsigned __int64 v39; // r9
  unsigned int v40; // edi
  int v41; // ecx
  __int64 *v42; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Base; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v48[127]; // [rsp+80h] [rbp-88h] BYREF

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
      v44 = -1LL;
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
            v40 = 0;
            if ( v3 )
            {
              do
              {
                HvlQueryNumaDistance(v4, v40, &v45);
                v41 = v4 * (unsigned __int16)KeNumberNodes;
                if ( v45 == -1 )
                  *((_QWORD *)KiActualNodeCost + v40 + v41) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v40 + v41) = (unsigned __int64)(v45 << 9) >> 10;
                LOWORD(v1) = KeNumberNodes;
                ++v40;
              }
              while ( v40 < (unsigned __int16)KeNumberNodes );
            }
            goto LABEL_17;
          }
          v6 = *(_WORD *)(v5 + 146);
          if ( v6 == *(_WORD *)(v5 + 148) )
          {
            if ( *(_QWORD *)(v5 + 136) )
            {
              v7 = v4;
            }
            else
            {
              v7 = 0;
              if ( v3 )
              {
                v42 = KeNodeBlock;
                do
                {
                  v5 = *v42;
                  if ( *(_WORD *)(*v42 + 148) == v6 && *(_QWORD *)(v5 + 136) )
                    break;
                  ++v7;
                  ++v42;
                }
                while ( v7 < v3 );
              }
              if ( v7 == v3 )
                goto LABEL_17;
            }
            v8 = *(_WORD *)(v5 + 144);
            v9 = *(_QWORD *)(v5 + 136);
            Affinity.Group = v8;
            Affinity.Mask = (v9 ^ (v9 - 1)) & v9;
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
              NodePagesForMdl = (struct _MDL *)MmAllocateNodePagesForMdlEx(0, v44, 0LL, 0x1000uLL, 0, i, 7);
              v36 = NodePagesForMdl;
              if ( NodePagesForMdl )
              {
                v11 = (char *)MmMapLockedPagesSpecifyCache(NodePagesForMdl, 0, MmNonCached, 0LL, 0, 0x40000020u);
                if ( v11 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v38 = v11 + 4096;
                  v39 = __rdtsc();
                  while ( v11 < v38 )
                    v11 += 8;
                  __writecr8(CurrentIrql);
                  *((_QWORD *)KiActualNodeCost + i + v7 * (unsigned __int16)KeNumberNodes) = __rdtsc() - v39;
                }
                MmFreePagesFromMdl(v36);
                ExFreePoolWithTag(v36, 0);
              }
              LOWORD(v1) = KeNumberNodes;
            }
          }
LABEL_17:
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
      v13 = (unsigned __int16)v1;
      for ( j = 0; j < (unsigned __int16)v1; v13 = (unsigned __int16)v1 )
      {
        v15 = KeNodeBlock[j];
        v16 = *(_WORD *)(v15 + 146);
        if ( v16 == *(_WORD *)(v15 + 148) )
        {
          v17 = 0;
          v18 = v13 * v16;
          if ( v13 )
          {
            do
            {
              v19 = KeNodeBlock[v17];
              v20 = *(_WORD *)(v19 + 146);
              if ( v20 == *(_WORD *)(v19 + 148) )
              {
                v21 = v20;
                v22 = (unsigned int)v20 + v18;
                if ( *((_QWORD *)KiActualNodeCost + v22) == -1LL )
                {
                  *((_QWORD *)KiActualNodeCost + (unsigned int)v22) = *((_QWORD *)KiActualNodeCost
                                                                      + (unsigned int)*(unsigned __int16 *)(KeNodeBlock[j] + 146)
                                                                      + v13 * v21);
                  LOWORD(v1) = KeNumberNodes;
                }
              }
              ++v17;
              v13 = (unsigned __int16)v1;
            }
            while ( v17 < (unsigned __int16)v1 );
          }
        }
        ++j;
      }
      v23 = (unsigned __int16)v1;
      for ( k = 0; k < (unsigned __int16)v1; v23 = (unsigned __int16)v1 )
      {
        v25 = 0;
        v26 = v23 * *(unsigned __int16 *)(KeNodeBlock[k] + 148);
        if ( v23 )
        {
          v27 = v48;
          v28 = KeNodeBlock;
          do
          {
            v29 = *v28;
            *((_DWORD *)v27 - 2) = v25;
            if ( v29 )
            {
              v30 = *((_QWORD *)KiActualNodeCost + v26 + (unsigned int)*(unsigned __int16 *)(v29 + 146));
              *v27 = v30;
              if ( !v30 )
                *v27 = 1LL;
            }
            else
            {
              *v27 = -1LL;
            }
            ++v25;
            ++v28;
            v27 += 2;
          }
          while ( v25 < v23 );
        }
        v48[2 * k] = 0LL;
        qsort(&Base, (unsigned __int16)v1, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiNodeCostSort);
        LOWORD(v1) = KeNumberNodes;
        v31 = 0;
        for ( m = (unsigned __int16)KeNumberNodes;
              v31 < (unsigned __int16)KeNumberNodes;
              m = (unsigned __int16)KeNumberNodes )
        {
          v33 = v31 + k * m;
          v34 = v48[2 * v31++ - 1];
          *((_WORD *)KiNodeGraph + v33) = v34;
          LOWORD(v1) = KeNumberNodes;
        }
        ++k;
      }
    }
  }
}
