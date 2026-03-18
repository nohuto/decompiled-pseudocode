/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C0097690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0089CC0 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C008B290 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
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
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  UINT v24; // r9d
  union _LARGE_INTEGER v25; // rbx
  SIZE_T v26; // r13
  UINT v27; // r9d
  VIDMM_GLOBAL *v28; // rcx
  _DWORD *v29; // rax
  unsigned int v30; // ecx
  UINT v31; // r9d
  UINT v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v36; // [rsp+38h] [rbp-61h]
  unsigned int v37; // [rsp+38h] [rbp-61h]
  unsigned int v38; // [rsp+58h] [rbp-41h]
  unsigned int v39; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER v40; // [rsp+70h] [rbp-29h] BYREF
  union _LARGE_INTEGER v41; // [rsp+78h] [rbp-21h] BYREF
  struct _VIDMM_POOL_BLOCK *v42; // [rsp+80h] [rbp-19h] BYREF
  union _LARGE_INTEGER v43; // [rsp+88h] [rbp-11h]
  _DWORD *v44; // [rsp+90h] [rbp-9h]
  __int64 v45; // [rsp+98h] [rbp-1h]
  union _LARGE_INTEGER v46; // [rsp+A0h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+100h] [rbp+67h]
  PVOID v50; // [rsp+118h] [rbp+7Fh]

  v4 = 0LL;
  v43.QuadPart = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v6 = *(PHYSICAL_ADDRESS *)((char *)this + 112);
  v7 = 0;
  v42 = 0LL;
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
  v50 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v7 = -1073741801;
    v34 = WdLogNewEntry5_WdWarning(v12);
    WdLogEvent5_WdWarning(v34);
LABEL_31:
    if ( v4 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 18), v4, v22, v23);
    goto LABEL_33;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v14 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v44 = v14;
  v8 = v14;
  if ( BaseAddress && v14 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v16 = v50;
    memset(v50, 171, 0x1000uLL);
    memset(v8, 205, 0x1000uLL);
    v7 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 184LL))(
           this,
           1LL,
           v10);
    if ( v7 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v17);
      WdLogEvent5_WdWarning(v19);
      v5 = BaseAddress;
      goto LABEL_34;
    }
    LOBYTE(v18) = 1;
    v7 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 18),
           0x1000uLL,
           0LL,
           v18,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v46,
           (void **)&v42);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v24 = 0;
      else
        v24 = *((_DWORD *)this + 4) + 1;
      v25 = v46;
      v26 = (unsigned __int64)v46.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v24,
        1uLL,
        (unsigned __int64)v46.QuadPart >> 12,
        PagesForMdl,
        v36,
        0,
        0);
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v27 = 0;
      else
        v27 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v27,
        1uLL,
        v26,
        PhysicalAddress,
        0);
      v41 = v25;
      v28 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v40 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v28, 0LL, 0LL, 0x1000uLL, 0LL, this, &v41, 0LL, a2, &v40, 0LL, v38, 0);
      v40 = v43;
      v41 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0LL,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v41,
        0LL,
        this,
        &v40,
        0LL,
        v39,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v29 = v44;
      v30 = 0;
      while ( *v29 == -1414812757 )
      {
        ++v30;
        ++v29;
        if ( v30 >= 0x400 )
          goto LABEL_21;
      }
      v7 = -1073741823;
LABEL_21:
      if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
        v31 = 0;
      else
        v31 = *((_DWORD *)this + 4) + 1;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((ADAPTER_RENDER ***)this + 1),
        0,
        0LL,
        v31,
        1uLL,
        v26,
        PagesForMdl,
        v37,
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
        v26,
        *(union _LARGE_INTEGER *)((char *)this + 488),
        0);
      v8 = v44;
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v20);
      WdLogEvent5_WdWarning(v21);
    }
    v4 = v42;
    v5 = BaseAddress;
    goto LABEL_31;
  }
  v33 = WdLogNewEntry5_WdWarning(v15);
  WdLogEvent5_WdWarning(v33);
  v5 = BaseAddress;
LABEL_33:
  v16 = v50;
LABEL_34:
  if ( v45 )
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
