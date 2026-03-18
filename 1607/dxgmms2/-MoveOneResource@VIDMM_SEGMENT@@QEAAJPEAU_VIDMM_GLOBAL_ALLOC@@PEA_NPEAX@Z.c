/*
 * XREFs of ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099070
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00104B8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C005BF6C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  VIDMM_SEGMENT *v5; // r13
  _QWORD **v6; // rdi
  _QWORD *v7; // rsi
  _QWORD **v8; // r15
  _QWORD *v9; // r14
  int *v10; // rbp
  VIDMM_DEVICE *v11; // rcx
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  _QWORD **v17; // r15
  _QWORD *v18; // r14
  __int64 v19; // rcx
  VIDMM_SEGMENT *v20; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  int v30; // eax
  _QWORD *v31; // r12
  __int64 v32; // rcx
  _QWORD *v33; // r14
  unsigned int v34; // r8d
  struct _KTHREAD **VirtualAddressAllocator; // rax
  int v36; // r10d
  struct _KTHREAD **v37; // rbp
  _QWORD *v38; // rcx
  _QWORD *v39; // r14
  unsigned int v40; // esi
  unsigned __int64 v41; // r15
  struct VIDMM_ALLOC *v42; // r12
  unsigned __int64 v43; // rbp
  _QWORD *v44; // r13
  bool v45; // zf
  __int64 *v46; // r15
  CVirtualAddressAllocator *v47; // r14
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // ebp
  struct VIDMM_ALLOC *v52; // r14
  CVirtualAddressAllocator *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // [rsp+60h] [rbp-78h]
  int v58; // [rsp+64h] [rbp-74h]
  __int64 v59; // [rsp+68h] [rbp-70h]
  int v60; // [rsp+68h] [rbp-70h]
  struct VIDMM_ALLOC *v61; // [rsp+70h] [rbp-68h] BYREF
  CVirtualAddressAllocator *v62; // [rsp+78h] [rbp-60h]
  _QWORD *v63; // [rsp+80h] [rbp-58h]
  _QWORD *v64; // [rsp+88h] [rbp-50h]
  _QWORD *v65; // [rsp+90h] [rbp-48h]
  struct _KTHREAD **v66; // [rsp+98h] [rbp-40h]
  char v68; // [rsp+E8h] [rbp+10h]

  v5 = this;
  if ( a2 && *((_QWORD *)a2 + 26) && *((_QWORD *)a2 + 28) == *((_QWORD *)a2 + 17) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 496, 0LL);
    v6 = (_QWORD **)((char *)a2 + 296);
    v7 = (_QWORD *)*((_QWORD *)a2 + 37);
    while ( v7 != v6 )
    {
      v8 = (_QWORD **)(v7 - 2);
      v7 = (_QWORD *)*v7;
      v9 = *v8;
      while ( v9 != v8 )
      {
        v10 = (int *)(v9 - 5);
        v9 = (_QWORD *)*v9;
        v11 = (VIDMM_DEVICE *)*((_QWORD *)v10 + 1);
        if ( (*((_DWORD *)v11 + 13) & 7) == 0 )
          VIDMM_DEVICE::SuspendSchedulerDevice(v11, 1, *((_DWORD *)v5 + 4));
        if ( v10[26] > 0 )
          *((_DWORD *)a2 + 20) |= 0x400u;
      }
    }
    v12 = (_QWORD *)((char *)a2 + 144);
    VIDMM_GLOBAL::MemoryTransfer(
      *((VIDMM_GLOBAL **)v5 + 1),
      a2,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 18,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 17),
      (union _LARGE_INTEGER *)a2 + 27,
      0LL,
      0);
    if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = a2;
      WdLogEvent5_WdAssertion(v15);
      v16 = *v6;
      while ( v16 != v6 )
      {
        v17 = (_QWORD **)(v16 - 2);
        v16 = (_QWORD *)*v16;
        v18 = *v17;
        while ( v18 != v17 )
        {
          v19 = *(v18 - 4);
          v18 = (_QWORD *)*v18;
          VidSchiMarkDeviceAsError(*(_QWORD *)(v19 + 32), 24);
        }
      }
    }
    v20 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
    *v12 = *((_QWORD *)a2 + 27);
    *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = VIDMM_SEGMENT::DriverId(v20);
    *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *v12 + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    v23 = *((_QWORD *)v5 + 1);
    if ( *(_BYTE *)(*(_QWORD *)(v23 + 24) + 2091LL) )
    {
      ExReleasePushLockExclusiveEx((char *)a2 + 496, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v24, v25, v26);
      v28 = WdLogNewEntry5_WdWarning(v27);
      WdLogEvent5_WdWarning(v28);
      return 3221226166LL;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 63) + 2LL) & 1) != 0 )
    {
      LOBYTE(v21) = 1;
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v23, (D3DGPU_VIRTUAL_ADDRESS *)a2, v21, v22);
    }
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 1) + 40872LL) & 1) != 0 )
    {
      v30 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 17));
      v31 = *v6;
      v58 = v30;
      while ( v31 != v6 )
      {
        v32 = *((_QWORD *)v5 + 1);
        v33 = v31 - 7;
        v31 = (_QWORD *)*v31;
        v34 = *((_DWORD *)a2 + 19) & 0x3F;
        v65 = v31;
        VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                        (VIDMM_PROCESS *)v33[1],
                                                        *(_DWORD *)(*(_QWORD *)(v32 + 24) + 200LL),
                                                        v34);
        v62 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
        v68 = 0;
        v37 = VirtualAddressAllocator + 5;
        v66 = VirtualAddressAllocator + 5;
        if ( VirtualAddressAllocator[6] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 5));
          v36 = v58;
          v68 = 1;
        }
        v38 = v33 + 5;
        v57 = 0;
        v39 = (_QWORD *)v33[5];
        v40 = 0;
        v61 = 0LL;
        v41 = -1LL;
        v59 = -1LL;
        v64 = v38;
        if ( v39 != v38 )
        {
          v42 = v61;
          v43 = -1LL;
          do
          {
            v44 = v39 - 5;
            v39 = (_QWORD *)*v39;
            v45 = *((_BYTE *)v44 + 26) == 0;
            v63 = v39;
            if ( !v45 )
            {
              v46 = (__int64 *)v44[16];
              if ( v46 != v44 + 16 )
              {
                v47 = v62;
                do
                {
                  v48 = *((_DWORD *)a2 + 19);
                  v61 = 0LL;
                  v60 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                          v47,
                          (struct VIDMM_MAPPED_VA_RANGE *)(v46 - 3),
                          v48 & 0x3F,
                          v36,
                          *((_QWORD *)a2 + 27),
                          0LL,
                          0,
                          &v61);
                  if ( v60 >= 0 )
                  {
                    v57 = 1;
                    v40 |= 1 << ((*((_DWORD *)v46 + 10) >> 4) & 0x3F);
                    if ( v43 >= v46[9] )
                      v43 = v46[9];
                    if ( (unsigned __int64)v42 <= v46[10] )
                      v42 = (struct VIDMM_ALLOC *)v46[10];
                  }
                  else
                  {
                    v50 = WdLogNewEntry5_WdWarning(v49);
                    *(_QWORD *)(v50 + 32) = v60;
                    *(_QWORD *)(v50 + 24) = v44;
                    WdLogEvent5_WdWarning(v50);
                    VidSchiMarkDeviceAsError(*(_QWORD *)(v44[1] + 32LL), 23);
                  }
                  v46 = (__int64 *)*v46;
                  v36 = v58;
                }
                while ( v46 != v44 + 16 );
                v39 = v63;
                v38 = v64;
                v61 = v42;
                v59 = v43;
              }
            }
            v36 = v58;
          }
          while ( v39 != v38 );
          v31 = v65;
          v6 = (_QWORD **)((char *)a2 + 296);
          v37 = v66;
          v5 = this;
          v41 = v59;
        }
        if ( v68 )
        {
          v37[1] = 0LL;
          ExReleasePushLockExclusiveEx(v37, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v57 )
        {
          v51 = 0;
          if ( v40 )
          {
            v52 = v61;
            v53 = v62;
            do
            {
              if ( (v40 & 1) != 0 )
                CVirtualAddressAllocator::FlushGpuVaTlb(v53, v51, v41, (unsigned __int64)v52);
              ++v51;
              v40 >>= 1;
            }
            while ( v40 );
            v5 = this;
          }
        }
      }
    }
    ExReleasePushLockExclusiveEx((char *)a2 + 496, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v54, v55, v56);
  }
  return 0LL;
}
