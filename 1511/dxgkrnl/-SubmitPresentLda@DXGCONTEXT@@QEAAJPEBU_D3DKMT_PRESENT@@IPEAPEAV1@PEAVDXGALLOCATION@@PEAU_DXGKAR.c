/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C014C6BC
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0011054 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        DXGCONTEXT *this,
        unsigned __int64 a2,
        __int64 a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  DXGCONTEXT *v7; // r13
  __int64 v8; // rcx
  UINT v9; // r12d
  _BYTE *PoolWithTag; // rdi
  _BYTE *v11; // r14
  _BYTE *v12; // rax
  UINT i; // edx
  char v14; // r8
  char *v15; // r13
  struct DXGCONTEXT **v16; // rcx
  struct DXGCONTEXT *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  int v20; // edi
  struct _EX_RUNDOWN_REF *v21; // rdi
  __int64 v22; // rax
  unsigned int *v23; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // r9
  ULONG_PTR Count; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r8
  struct _DXGKARG_PRESENT *v33; // r8
  struct _DXGKARG_PRESENT *j; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // esi
  struct DXGCONTEXT **v39; // rbx
  unsigned int v40; // r12d
  bool v41; // si
  __int64 v42; // rcx
  const char *ProcessImageFileName; // rax
  UINT v45; // [rsp+30h] [rbp-1F8h]
  int v46; // [rsp+30h] [rbp-1F8h]
  struct _EX_RUNDOWN_REF *v47; // [rsp+38h] [rbp-1F0h] BYREF
  DXGCONTEXT *v48; // [rsp+40h] [rbp-1E8h]
  unsigned int v49; // [rsp+48h] [rbp-1E0h]
  struct DXGCONTEXT **v50; // [rsp+50h] [rbp-1D8h]
  unsigned int v51; // [rsp+58h] [rbp-1D0h]
  int v52; // [rsp+5Ch] [rbp-1CCh]
  __int64 v53; // [rsp+60h] [rbp-1C8h]
  struct VIDMM_ALLOC **v54; // [rsp+68h] [rbp-1C0h]
  _BYTE *v55; // [rsp+70h] [rbp-1B8h]
  __int64 v56; // [rsp+78h] [rbp-1B0h]
  unsigned int v57; // [rsp+80h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+88h] [rbp-1A0h]
  struct _DXGKARG_PRESENT *v59; // [rsp+90h] [rbp-198h]
  struct _UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-190h] BYREF
  _BYTE *v61; // [rsp+A8h] [rbp-180h]
  struct DXGALLOCATION *v62; // [rsp+B0h] [rbp-178h]
  struct _EX_RUNDOWN_REF *v63; // [rsp+B8h] [rbp-170h] BYREF
  const struct _D3DKMT_PRESENT *v64; // [rsp+C0h] [rbp-168h]
  unsigned int v65; // [rsp+C8h] [rbp-160h]
  __int64 v66; // [rsp+D0h] [rbp-158h]
  DXGCONTEXT *v67; // [rsp+D8h] [rbp-150h]
  struct DXGCONTEXT **v68; // [rsp+E0h] [rbp-148h]
  _BYTE *v69; // [rsp+E8h] [rbp-140h] BYREF
  _BYTE v70[32]; // [rsp+F0h] [rbp-138h] BYREF
  UINT v71; // [rsp+110h] [rbp-118h]
  struct _STRING DestinationString; // [rsp+118h] [rbp-110h] BYREF
  _BYTE v73[16]; // [rsp+128h] [rbp-100h] BYREF
  int v74[6]; // [rsp+138h] [rbp-F0h] BYREF
  _BYTE *v75; // [rsp+150h] [rbp-D8h] BYREF
  _BYTE v76[128]; // [rsp+158h] [rbp-D0h] BYREF
  UINT v77; // [rsp+1D8h] [rbp-50h]

  v50 = a4;
  v64 = (const struct _D3DKMT_PRESENT *)a2;
  v7 = this;
  v48 = this;
  v67 = this;
  v68 = a4;
  v62 = a5;
  v59 = a6;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v56 = v8;
  v66 = v8;
  v53 = *(_QWORD *)(v8 + 80);
  v9 = a3 + 1;
  v49 = 0;
  PoolWithTag = 0LL;
  v55 = 0LL;
  v75 = 0LL;
  v77 = 0;
  if ( (unsigned int)(a3 + 1) <= 4 )
  {
    PoolWithTag = v76;
    v75 = v76;
  }
  else
  {
    v8 = v9;
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x20 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v9, 0x4B677844u);
    v75 = PoolWithTag;
  }
  v55 = PoolWithTag;
  v77 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 32LL * v9);
    PoolWithTag = v75;
    v55 = v75;
  }
LABEL_7:
  v11 = 0LL;
  v69 = 0LL;
  v71 = 0;
  if ( v9 <= 4 )
  {
    v11 = v70;
    v69 = v70;
  }
  else
  {
    v8 = v9;
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_13;
    v11 = ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    v69 = v11;
  }
  v71 = v9;
  if ( v11 )
  {
    memset(v11, 0, 8LL * v9);
    v11 = v69;
  }
LABEL_13:
  v61 = v11;
  if ( PoolWithTag && v11 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 2832LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)
      || (unsigned int)_guard_dispatch_icall_fptr() )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v9;
    v12 = (char *)a7 + 360;
    if ( !*((_BYTE *)a7 + 348) )
      v12 = (char *)a7 + 352;
    *v12 = 1;
    for ( i = 0; ; i = v45 + 1 )
    {
      v45 = i;
      if ( i >= v9 )
        break;
      v14 = *((_BYTE *)a7 + 348);
      v15 = (char *)a7 + 360;
      if ( v14 )
        v54 = (struct VIDMM_ALLOC **)((char *)a7 + 64 * (unsigned __int64)(i * *((_DWORD *)a7 + 91)) + 376);
      else
        v54 = (struct VIDMM_ALLOC **)((char *)a7 + 360);
      if ( v14 )
        v15 = (char *)a7 + 64 * (unsigned __int64)(i * *((_DWORD *)a7 + 91)) + 376;
      v53 = i;
      v16 = v50;
      v17 = v50[i];
      v18 = *((_DWORD *)v17 + 82);
      v51 = v18;
      v47 = 0LL;
      if ( !*((_BYTE *)v17 + 350) )
      {
        v19 = WdLogNewEntry5_WdError(v50);
        *(_QWORD *)(v19 + 24) = 5814LL;
        goto LABEL_29;
      }
      if ( i )
      {
        v22 = i - 1;
        if ( v18 <= *((_DWORD *)v50[v22] + 82) )
        {
          v19 = WdLogNewEntry5_WdError(v50);
          *(_QWORD *)(v19 + 24) = 5830LL;
LABEL_29:
          WdLogEvent5_WdError(v19);
          v20 = -1073741811;
LABEL_30:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
          v7 = v48;
          goto LABEL_56;
        }
        v23 = &v64->BroadcastSrcAllocation[v22];
        if ( v23 + 1 < v23 || (unsigned __int64)(v23 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v57 = *v23;
        v65 = v57;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    v56,
                                                    (DXGALLOCATIONREFERENCE *)&v63,
                                                    v57);
        DXGALLOCATIONREFERENCE::Assign(&v47, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63);
        v21 = v47;
        v58 = v47;
        if ( !v47 )
        {
          v25 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v25 + 24) = v57;
          v20 = -1073741811;
          *(_QWORD *)(v25 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v25);
          goto LABEL_30;
        }
        v18 = v51;
      }
      else
      {
        v21 = (struct _EX_RUNDOWN_REF *)v62;
        v58 = (struct _EX_RUNDOWN_REF *)v62;
      }
      if ( ((LODWORD(v21[9].Count) >> 12) & 0x3F) != v18 )
      {
        v19 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v19 + 24) = v21;
        goto LABEL_29;
      }
      v20 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) + 424LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)v48 + 2) + 536LL),
              (struct _VIDMM_MULTI_ALLOC *)v21[3].Count,
              v54);
      if ( v20 < 0 )
        goto LABEL_30;
      v26 = v49;
      *(_QWORD *)&v11[8 * v49] = *v54;
      v49 = v26 + 1;
      v54 = (struct VIDMM_ALLOC **)(v15 + 16);
      _guard_dispatch_icall_fptr();
      *((_DWORD *)v15 + 13) ^= (*((_DWORD *)v15 + 13) ^ (v52 << 17)) & 0x3E0000;
      v27 = v58;
      Count = v58[5].Count;
      if ( Count )
        v29 = (*(_DWORD *)(Count + 4) >> 3) & 1;
      else
        v29 = 0;
      *((_DWORD *)v15 + 13) ^= (*((_DWORD *)v15 + 13) ^ (v29 << 23)) & 0x800000;
      *((_QWORD *)v15 + 1) = *(_QWORD *)(v27[6].Count + 16);
      v30 = v53;
      *((_QWORD *)v15 + 7) = *((_QWORD *)v50[v53] + 21);
      v53 = 32 * v30;
      PoolWithTag = v55;
      *(struct _EX_RUNDOWN_REF *)&v55[v53] = v27[4];
      v7 = v48;
      v31 = _guard_dispatch_icall_fptr();
      v32 = v53;
      *(_QWORD *)&PoolWithTag[v53 + 8] = v31;
      *(_QWORD *)&PoolWithTag[v32 + 16] = *v54;
      *(_WORD *)&PoolWithTag[v32 + 24] = v52;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v47);
    }
    v33 = v59;
    v59->NumSrcAllocations = v9;
    v33->pAllocationList = (DXGK_ALLOCATIONLIST *)PoolWithTag;
    v20 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL), *((void **)v7 + 21), v33);
    if ( v20 >= 0 )
    {
      for ( j = 0LL; ; j = (struct _DXGKARG_PRESENT *)(unsigned int)(v46 + 1) )
      {
        v46 = (int)j;
        if ( (unsigned int)j >= v9 )
          break;
        v59 = j;
        CurrentThread = KeGetCurrentThread();
        if ( *((struct _KTHREAD **)v50[(_QWORD)j] + 46) != CurrentThread )
        {
          v36 = WdLogNewEntry5_WdAssertion(CurrentThread);
          *(_QWORD *)(v36 + 24) = 5950LL;
          WdLogEvent5_WdAssertion(v36);
        }
        v20 = _guard_dispatch_icall_fptr();
        if ( v20 < 0 )
          break;
        *(_DWORD *)a7 &= ~0x800u;
      }
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdLowResource(v8, a2, a3, a4);
    *(_QWORD *)(v37 + 24) = 5772LL;
    WdLogEvent5_WdLowResource(v37);
    v20 = -1073741801;
  }
LABEL_56:
  if ( v20 < 0 )
  {
    v38 = 0;
    v39 = v50;
    v40 = v49;
    while ( v38 < v40 )
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 424LL),
        *(struct VIDMM_DEVICE **)(*((_QWORD *)v7 + 2) + 536LL),
        1 << *((_DWORD *)v39[v38] + 82),
        *(struct VIDMM_ALLOC **)&v11[8 * v38]);
      ++v38;
    }
    v41 = 0;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    v42 = *(_QWORD *)(v56 + 56);
    if ( v42 )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(v42);
      RtlInitAnsiString(&DestinationString, ProcessImageFileName);
      v41 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0;
    }
    if ( !v41 )
      RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
    DxgkSqmCreateStringStreamEntry((__int64)v73, UnicodeString.Buffer);
    DxgkSqmCreateDwordStreamEntry(v74, 2);
    DxgkSqmAddToStream(4783LL, 2u, (__int64)v73);
    if ( v41 )
      RtlFreeUnicodeString(&UnicodeString);
  }
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v69);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v75);
  return (unsigned int)v20;
}
