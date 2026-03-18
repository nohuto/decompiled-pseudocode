/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0083F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C007B6DC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C007C3C0 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ValidateApertureUnmapToDummyPage(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_SEGMENT *a2,
        union _LARGE_INTEGER a3)
{
  struct _VIDMM_POOL_BLOCK *v4; // rbx
  void *v5; // rdi
  PHYSICAL_ADDRESS v6; // rdx
  int v7; // r12d
  void *v8; // r13
  struct _MDL *PagesForMdl; // r15
  struct _MDL *v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  void *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  UINT v23; // r9d
  union _LARGE_INTEGER v24; // rbx
  SIZE_T v25; // r13
  UINT v26; // r9d
  VIDMM_GLOBAL *v27; // rcx
  _DWORD *v28; // rax
  unsigned int v29; // ecx
  UINT v30; // r9d
  UINT v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v35; // [rsp+38h] [rbp-51h]
  unsigned int v36; // [rsp+38h] [rbp-51h]
  unsigned int v37; // [rsp+58h] [rbp-31h]
  unsigned int v38; // [rsp+58h] [rbp-31h]
  union _LARGE_INTEGER v39; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v40; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v41; // [rsp+80h] [rbp-9h] BYREF
  union _LARGE_INTEGER v42; // [rsp+88h] [rbp-1h]
  _DWORD *v43; // [rsp+90h] [rbp+7h]
  __int64 v44; // [rsp+98h] [rbp+Fh]
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v48; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v42.QuadPart = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 112);
  v7 = 0;
  v41 = 0LL;
  v8 = 0LL;
  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, v6, gs_PhysicalAddressZero, 0x1000uLL);
  v10 = MmAllocatePagesForMdl(
          gs_PhysicalAddressZero,
          *(PHYSICAL_ADDRESS *)((char *)this + 112),
          gs_PhysicalAddressZero,
          0x1000uLL);
  v11 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                  4096LL,
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  *((_QWORD *)this + 14),
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  516,
                  0x80000000);
  v48 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v33 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v33);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 18), v4, v21, v22);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v14 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v43 = v14;
  v8 = v14;
  if ( BaseAddress && v14 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v16 = v48;
    memset(v48, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 184LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v17);
      WdLogEvent5_WdWarning(v18);
      v5 = BaseAddress;
      goto LABEL_34;
    }
    v7 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 18),
           4096LL,
           0,
           1,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v40,
           (void **)&v41);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v23 = 0;
      else
        v23 = *((_DWORD *)this + 4) + 1;
      v24 = v40;
      v25 = (unsigned __int64)v40.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v23,
        1uLL,
        (unsigned __int64)v40.QuadPart >> 12,
        PagesForMdl,
        v35,
        0,
        0);
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v26 = 0;
      else
        v26 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v26,
        1uLL,
        v25,
        PhysicalAddress,
        0);
      v40 = v24;
      v27 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v39 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v27, 0, 0LL, 0x1000uLL, 0LL, this, &v40, 0LL, a2, &v39, 0LL, v37, 0);
      v39 = v42;
      v40 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v40,
        0LL,
        this,
        &v39,
        0LL,
        v38,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v28 = v43;
      v29 = 0;
      while ( *v28 == -1414812757 )
      {
        ++v29;
        ++v28;
        if ( v29 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v30 = 0;
      else
        v30 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v30,
        1uLL,
        v25,
        PagesForMdl,
        v36,
        0,
        0);
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v31 = 0;
      else
        v31 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v31,
        1uLL,
        v25,
        *(union _LARGE_INTEGER *)((char *)this + 456),
        0);
      v8 = v43;
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v19);
      WdLogEvent5_WdWarning(v20);
    }
    v4 = v41;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v32 = WdLogNewEntry5_WdWarning(v15);
  WdLogEvent5_WdWarning(v32);
  v5 = BaseAddress;
LABEL_33:
  v16 = v48;
LABEL_34:
  if ( v44 )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 192LL))(this, 1LL, v10);
  if ( v5 )
    MmUnmapLockedPages(v5, PagesForMdl);
  if ( v8 )
    MmUnmapLockedPages(v8, v10);
  if ( v10 )
  {
    MmFreePagesFromMdl(v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( PagesForMdl )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
  }
  if ( v16 )
    MmFreeContiguousMemory(v16);
  return (unsigned int)v7;
}
