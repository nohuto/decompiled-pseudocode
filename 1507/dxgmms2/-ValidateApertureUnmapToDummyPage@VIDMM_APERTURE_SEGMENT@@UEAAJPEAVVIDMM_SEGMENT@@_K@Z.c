/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C006D010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C004F634 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F940 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0053FC0 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0075C98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  UINT v29; // r9d
  union _LARGE_INTEGER v30; // rbx
  SIZE_T v31; // r13
  UINT v32; // r9d
  VIDMM_GLOBAL *v33; // rcx
  _DWORD *v34; // rax
  unsigned int v35; // ecx
  UINT v36; // r9d
  UINT v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v41; // [rsp+38h] [rbp-51h]
  unsigned int v42; // [rsp+38h] [rbp-51h]
  unsigned int v43; // [rsp+58h] [rbp-31h]
  unsigned int v44; // [rsp+58h] [rbp-31h]
  union _LARGE_INTEGER v45; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v46; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v47; // [rsp+80h] [rbp-9h] BYREF
  union _LARGE_INTEGER v48; // [rsp+88h] [rbp-1h]
  _DWORD *v49; // [rsp+90h] [rbp+7h]
  __int64 v50; // [rsp+98h] [rbp+Fh]
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h]
  PVOID v54; // [rsp+108h] [rbp+7Fh]

  v4 = 0LL;
  v48.QuadPart = 0LL;
  v5 = 0LL;
  v50 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 112);
  v7 = 0;
  v47 = 0LL;
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
  v54 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v39 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    WdLogEvent5_WdWarning(v39);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 18), v4);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v16 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v49 = v16;
  v8 = v16;
  if ( BaseAddress && v16 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v20 = v54;
    memset(v54, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 184LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      WdLogEvent5_WdWarning(v24);
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
           &v46,
           (void **)&v47);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v29 = 0;
      else
        v29 = *((_DWORD *)this + 4) + 1;
      v30 = v46;
      v31 = (unsigned __int64)v46.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v29,
        1uLL,
        (unsigned __int64)v46.QuadPart >> 12,
        PagesForMdl,
        v41,
        0,
        0);
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v32 = 0;
      else
        v32 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v32,
        1uLL,
        v31,
        PhysicalAddress,
        0);
      v46 = v30;
      v33 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v45 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v33, 0, 0LL, 0x1000uLL, 0LL, this, &v46, 0LL, a2, &v45, 0LL, v43, 0);
      v45 = v48;
      v46 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v46,
        0LL,
        this,
        &v45,
        0LL,
        v44,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v34 = v49;
      v35 = 0;
      while ( *v34 == -1414812757 )
      {
        ++v35;
        ++v34;
        if ( v35 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v36 = 0;
      else
        v36 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v36,
        1uLL,
        v31,
        PagesForMdl,
        v42,
        0,
        0);
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v37 = 0;
      else
        v37 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v37,
        1uLL,
        v31,
        *(union _LARGE_INTEGER *)((char *)this + 456),
        0);
      v8 = v49;
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      WdLogEvent5_WdWarning(v28);
    }
    v4 = v47;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v38 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  WdLogEvent5_WdWarning(v38);
  v5 = BaseAddress;
LABEL_33:
  v20 = v54;
LABEL_34:
  if ( v50 )
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
  if ( v20 )
    MmFreeContiguousMemory(v20);
  return (unsigned int)v7;
}
