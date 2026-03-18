/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C008B06C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088778 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0089588 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _BYTE v26[32]; // [rsp+20h] [rbp-48h] BYREF
  char v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v7 = a5;
  v10 = 0LL;
  v11 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = v27 & 1;
  WdLogEvent5_WdEvent(v11);
  if ( (v27 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C0035410 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v26, (VIDMM_GLOBAL *)((char *)this + 40968));
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
  if ( v12 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39912));
    v17 = v12 + 384;
    while ( *((_QWORD *)a3 + 2) != v17 )
    {
      v18 = (_QWORD *)*((_QWORD *)a3 + 2);
      v19 = v18 - 54;
      *((_QWORD *)a3 + 2) = *v18;
      if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(this, (struct _VIDMM_GLOBAL_ALLOC *)(v18 - 54), (v27 & 2) != 0) )
      {
        v20 = v19 + 54;
        v21 = v19[54];
        v22 = (_QWORD *)v19[55];
        if ( *(_QWORD **)(v21 + 8) != v19 + 54 || (_QWORD *)*v22 != v20 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *v20 = 0LL;
        *((_QWORD *)this + 4990) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
        KeLeaveCriticalRegion();
        if ( VIDMM_GLOBAL::DecommitGlobalAllocation(this, (DXGFASTMUTEX **)v19, v23, v24) )
        {
          v10 += v19[1];
          if ( v10 >= v7 )
            break;
        }
        DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39912));
      }
    }
    if ( *((struct _KTHREAD **)this + 4990) == KeGetCurrentThread() )
    {
      *((_QWORD *)this + 4990) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
      KeLeaveCriticalRegion();
    }
    *a6 = v10;
    v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    v25[3] = a5;
    v25[4] = v10;
    v25[5] = v27 & 1;
    WdLogEvent5_WdEvent(v25);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
}
