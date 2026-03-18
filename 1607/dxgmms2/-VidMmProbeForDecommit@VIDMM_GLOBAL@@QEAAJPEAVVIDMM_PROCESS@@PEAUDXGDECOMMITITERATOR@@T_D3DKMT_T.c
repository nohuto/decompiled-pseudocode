/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C008C800
 * Callers:
 *     ?VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C001D340 (-VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0089588 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  unsigned int v7; // edi
  __int64 v8; // r14
  char v9; // al
  _QWORD *v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+78h] [rbp+20h]

  v16 = (char)a4.0;
  v7 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, (VIDMM_GLOBAL *)((char *)this + 40968));
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
  if ( v8 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39912));
    v9 = v16;
    v10 = (_QWORD *)(v8 + 384);
    v11 = (_QWORD *)*v10;
    *((_QWORD *)a3 + 2) = *v10;
    if ( (v16 & 2) == 0 )
    {
      if ( v11 == v10 )
      {
LABEL_8:
        *((_QWORD *)this + 4990) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_9;
      }
      while ( !VIDMM_GLOBAL::IsAllocationDecommitCandidate(
                 this,
                 (struct _VIDMM_GLOBAL_ALLOC *)(*((_QWORD *)a3 + 2) - 432LL),
                 (v9 & 2) != 0) )
      {
        v12 = (_QWORD *)*((_QWORD *)a3 + 2);
        v13 = (_QWORD *)*v12;
        *((_QWORD *)a3 + 2) = *v12;
        if ( v13 == v10 )
          goto LABEL_8;
        v9 = v16;
      }
    }
    v7 = -1071775484;
    goto LABEL_8;
  }
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v7;
}
