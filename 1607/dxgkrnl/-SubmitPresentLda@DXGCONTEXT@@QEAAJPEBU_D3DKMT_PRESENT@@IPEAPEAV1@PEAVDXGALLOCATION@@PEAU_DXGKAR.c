/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01724F4
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00114E8 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        struct _EX_RUNDOWN_REF *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct _EX_RUNDOWN_REF *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct _EX_RUNDOWN_REF *v7; // r15
  struct _EX_RUNDOWN_REF *v8; // r13
  __int64 v9; // rcx
  UINT v10; // r12d
  _BYTE *PoolWithTag; // rdi
  struct _EX_RUNDOWN_REF *v12; // r14
  _BYTE *v13; // rax
  UINT v14; // r8d
  ULONG_PTR Count; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  int v18; // edi
  struct _EX_RUNDOWN_REF *v19; // r13
  struct _EX_RUNDOWN_REF *v20; // rdi
  unsigned int *v21; // rdx
  __int64 v22; // rdi
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  char *v26; // r15
  struct VIDMM_ALLOC **v27; // r8
  unsigned int v28; // edx
  char *v29; // r9
  ULONG_PTR v30; // rax
  int v31; // eax
  char *v32; // rdx
  char *v33; // rdx
  __int64 v34; // r15
  struct _DXGKARG_PRESENT *v35; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  signed __int64 v39; // r14
  __int64 v40; // rbx
  UINT v42; // [rsp+30h] [rbp-198h]
  unsigned int v43; // [rsp+34h] [rbp-194h]
  UINT v44; // [rsp+34h] [rbp-194h]
  struct _EX_RUNDOWN_REF *v46; // [rsp+40h] [rbp-188h] BYREF
  int v47; // [rsp+48h] [rbp-180h]
  unsigned int v48; // [rsp+4Ch] [rbp-17Ch]
  struct _EX_RUNDOWN_REF *v49; // [rsp+50h] [rbp-178h]
  struct VIDMM_ALLOC **v50; // [rsp+58h] [rbp-170h]
  _BYTE *v51; // [rsp+60h] [rbp-168h]
  __int64 v52; // [rsp+68h] [rbp-160h]
  unsigned int v53; // [rsp+70h] [rbp-158h]
  struct DXGALLOCATION *v54; // [rsp+78h] [rbp-150h]
  const struct _D3DKMT_PRESENT *v55; // [rsp+80h] [rbp-148h]
  __int64 v56; // [rsp+88h] [rbp-140h]
  struct _EX_RUNDOWN_REF *v57[4]; // [rsp+90h] [rbp-138h] BYREF
  struct _DXGKARG_PRESENT *v58; // [rsp+B0h] [rbp-118h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+B8h] [rbp-110h] BYREF
  _BYTE v60[32]; // [rsp+C0h] [rbp-108h] BYREF
  UINT v61; // [rsp+E0h] [rbp-E8h]
  _BYTE *v62; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v63[128]; // [rsp+F8h] [rbp-D0h] BYREF
  UINT v64; // [rsp+178h] [rbp-50h]

  v7 = a4;
  v49 = a4;
  v55 = a2;
  v8 = this;
  v57[2] = this;
  v57[3] = a4;
  v54 = a5;
  v58 = a6;
  v9 = *(_QWORD *)(this[2].Count + 40);
  v56 = v9;
  v52 = *(_QWORD *)(v9 + 72);
  v10 = a3 + 1;
  v48 = 0;
  PoolWithTag = 0LL;
  v51 = 0LL;
  v62 = 0LL;
  v64 = 0;
  if ( (unsigned int)(a3 + 1) <= 4 )
  {
    PoolWithTag = v63;
    v62 = v63;
  }
  else
  {
    v9 = v10;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x20 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v10, 0x4B677844u);
    v62 = PoolWithTag;
  }
  v51 = PoolWithTag;
  v64 = v10;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 32LL * v10);
    PoolWithTag = v62;
    v51 = v62;
  }
LABEL_7:
  v12 = 0LL;
  v59 = 0LL;
  v61 = 0;
  if ( v10 <= 4 )
  {
    v12 = (struct _EX_RUNDOWN_REF *)v60;
    v59 = (struct _EX_RUNDOWN_REF *)v60;
  }
  else
  {
    v9 = v10;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 8 )
      goto LABEL_13;
    v12 = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v10, 0x4B677844u);
    v59 = v12;
  }
  v61 = v10;
  if ( v12 )
  {
    memset(v12, 0, 8LL * v10);
    v12 = v59;
  }
LABEL_13:
  v57[1] = v12;
  if ( PoolWithTag && v12 )
  {
    if ( *(_QWORD *)(v8[2].Count + 2856) != *(_QWORD *)(*(_QWORD *)(v8[2].Count + 16) + 16LL)
      || (unsigned int)_guard_dispatch_icall_fptr() )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v10;
    v13 = (char *)a7 + 424;
    if ( !*((_BYTE *)a7 + 348) )
      v13 = (char *)a7 + 416;
    *v13 = 1;
    v14 = 0;
    while ( 1 )
    {
      v42 = v14;
      if ( v14 >= v10 )
        break;
      v52 = v14;
      Count = v7[v14].Count;
      v16 = *(_DWORD *)(Count + 328);
      v43 = v16;
      v46 = 0LL;
      if ( !*(_BYTE *)(Count + 350) )
      {
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = 6376LL;
LABEL_24:
        WdLogEvent5_WdError(v17);
        v18 = -1073741811;
        goto LABEL_25;
      }
      if ( v14 )
      {
        if ( v16 <= *(_DWORD *)(v7[v14 - 1].Count + 328) )
        {
          v17 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v17 + 24) = 6392LL;
          goto LABEL_24;
        }
        v21 = &v55->BroadcastSrcAllocation[v14 - 1];
        if ( v21 + 1 < v21 || (unsigned __int64)(v21 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v53 = *v21;
        v22 = v53;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      v56,
                                                      (DXGALLOCATIONREFERENCE *)v57,
                                                      v53);
        DXGALLOCATIONREFERENCE::MoveAssign(&v46, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v57);
        v19 = v46;
        if ( !v46 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v25[3] = v22;
          v18 = -1073741811;
          v25[4] = -1073741811LL;
          goto LABEL_35;
        }
        v9 = *(_QWORD *)(v46[1].Count + 16);
        v20 = this;
        if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v9);
          v25[3] = this[2].Count;
          v25[4] = v19;
          v18 = -1073741811;
          v25[5] = -1073741811LL;
LABEL_35:
          WdLogEvent5_WdError(v25);
LABEL_25:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
          v8 = this;
          goto LABEL_74;
        }
        v14 = v42;
        v16 = v43;
      }
      else
      {
        v19 = (struct _EX_RUNDOWN_REF *)v54;
        v20 = this;
      }
      if ( ((LODWORD(v19[9].Count) >> 12) & 0x3F) != v16 )
      {
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = v19;
        goto LABEL_24;
      }
      v26 = (char *)a7 + 424;
      if ( *((_BYTE *)a7 + 348) )
        v27 = (struct VIDMM_ALLOC **)&v26[48 * v14 * *((_DWORD *)a7 + 107)
                                        + 48
                                        + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)];
      else
        v27 = (struct VIDMM_ALLOC **)((char *)a7 + 424);
      v50 = v27;
      v18 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(v20[2].Count + 16) + 400LL),
              *(struct VIDMM_DEVICE **)(v20[2].Count + 560),
              (struct _VIDMM_MULTI_ALLOC *)v19[3].Count,
              v27);
      if ( v18 < 0 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
        v8 = this;
        goto LABEL_73;
      }
      v28 = v48;
      v12[v48].Count = (ULONG_PTR)*v50;
      v48 = v28 + 1;
      if ( *((_BYTE *)a7 + 348) )
        v29 = &v26[48 * v42 * *((_DWORD *)a7 + 107)
                 + 40
                 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)];
      else
        v29 = (char *)a7 + 440;
      v50 = (struct VIDMM_ALLOC **)v29;
      _guard_dispatch_icall_fptr();
      if ( *((_BYTE *)a7 + 348) )
        *(_WORD *)&v26[48 * v42 * *((_DWORD *)a7 + 107)
                     + 32
                     + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)] = v47;
      else
        *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v47 << 17)) & 0x3E0000;
      v30 = v19[5].Count;
      if ( v30 )
        v31 = (*(_DWORD *)(v30 + 4) >> 3) & 1;
      else
        v31 = 0;
      if ( *((_BYTE *)a7 + 348) )
        v26[48 * v42 * *((_DWORD *)a7 + 107)
          + 56
          + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)] = v31 != 0;
      else
        *((_DWORD *)a7 + 119) ^= (*((_DWORD *)a7 + 119) ^ (v31 << 23)) & 0x800000;
      if ( *((_BYTE *)a7 + 348) )
        v32 = &v26[48 * v42 * *((_DWORD *)a7 + 107)
                 + 24
                 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)];
      else
        v32 = (char *)a7 + 432;
      *(_QWORD *)v32 = *(_QWORD *)(v19[6].Count + 16);
      if ( *((_BYTE *)a7 + 348) )
        v33 = &v26[48 * v42 * *((_DWORD *)a7 + 107)
                 + 16
                 + *((_DWORD *)a7 + 107) * ((8 * *((_DWORD *)a7 + 108) + 167) & 0xFFFFFFF8)];
      else
        v33 = (char *)a7 + 480;
      *(_QWORD *)v33 = *(_QWORD *)(v49[v52].Count + 168);
      v34 = 32 * v52;
      PoolWithTag = v51;
      *(struct _EX_RUNDOWN_REF *)&v51[32 * v52] = v19[4];
      *(_QWORD *)&PoolWithTag[v34 + 8] = _guard_dispatch_icall_fptr();
      *(_QWORD *)&PoolWithTag[v34 + 16] = *v50;
      *(_WORD *)&PoolWithTag[v34 + 24] = v47;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
      v14 = v42 + 1;
      v7 = v49;
    }
    v35 = v58;
    v58->NumSrcAllocations = v10;
    v35->pAllocationList = (DXGK_ALLOCATIONLIST *)PoolWithTag;
    v8 = this;
    v18 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(this[2].Count + 16), this[21].Ptr, v35);
    if ( v18 >= 0 )
    {
      v44 = 0;
      if ( v10 )
      {
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *(struct _KTHREAD **)(v7->Count + 368) != CurrentThread )
          {
            v37 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v37 + 24) = 6526LL;
            WdLogEvent5_WdAssertion(v37);
          }
          v18 = _guard_dispatch_icall_fptr();
          if ( v18 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x800u;
          ++v44;
          ++v7;
        }
        while ( v44 < v10 );
LABEL_73:
        v7 = v49;
      }
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v38 + 24) = 6336LL;
    WdLogEvent5_WdLowResource(v38);
    v18 = -1073741801;
  }
LABEL_74:
  if ( v18 < 0 && v48 )
  {
    v39 = (char *)v12 - (char *)v7;
    v40 = v48;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(v8[2].Count + 16) + 400LL),
        *(struct VIDMM_DEVICE **)(v8[2].Count + 560),
        1 << *(_DWORD *)(v7->Count + 328),
        *(struct VIDMM_ALLOC **)((char *)&v7->Count + v39));
      ++v7;
      --v40;
    }
    while ( v40 );
  }
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v59);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v62);
  return (unsigned int)v18;
}
