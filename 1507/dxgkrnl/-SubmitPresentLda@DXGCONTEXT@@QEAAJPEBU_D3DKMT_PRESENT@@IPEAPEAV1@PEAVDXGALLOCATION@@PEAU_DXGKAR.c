/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01489E4
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA0C (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        void **this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  __int64 v8; // rcx
  UINT v9; // r15d
  _BYTE *PoolWithTag; // r13
  _BYTE *v11; // rsi
  _BYTE *v12; // rax
  __int64 i; // r8
  char v14; // r9
  struct DXGCONTEXT **v15; // rcx
  struct DXGCONTEXT *v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edi
  struct _EX_RUNDOWN_REF *v23; // rdi
  DXGCONTEXT *v24; // r9
  unsigned int *v25; // rdx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  DXGCONTEXT *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // edx
  struct _EX_RUNDOWN_REF *v38; // rdi
  char *v39; // rdx
  ULONG_PTR Count; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _DXGKARG_PRESENT *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct DXGCONTEXT **v50; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  struct DXGCONTEXT **v54; // r14
  __int64 v55; // rsi
  __int64 v56; // r15
  bool v57; // si
  __int64 v58; // rcx
  const char *ProcessImageFileName; // rax
  __int64 v60; // r9
  int v64; // [rsp+40h] [rbp-1E8h]
  int v65; // [rsp+40h] [rbp-1E8h]
  struct _EX_RUNDOWN_REF *v66; // [rsp+48h] [rbp-1E0h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-1D8h]
  __int64 v68; // [rsp+58h] [rbp-1D0h]
  unsigned int v69; // [rsp+60h] [rbp-1C8h]
  struct VIDMM_ALLOC **v70; // [rsp+68h] [rbp-1C0h]
  int v71; // [rsp+70h] [rbp-1B8h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+78h] [rbp-1B0h]
  char *v73; // [rsp+80h] [rbp-1A8h]
  unsigned int v74; // [rsp+88h] [rbp-1A0h]
  __int64 v75; // [rsp+90h] [rbp-198h]
  struct _UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-190h] BYREF
  _BYTE *v77; // [rsp+A8h] [rbp-180h]
  struct DXGCONTEXT **v78; // [rsp+B0h] [rbp-178h]
  struct _DXGKARG_PRESENT *v79; // [rsp+B8h] [rbp-170h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+C0h] [rbp-168h] BYREF
  struct DXGALLOCATION *v81; // [rsp+C8h] [rbp-160h]
  unsigned int v82; // [rsp+D0h] [rbp-158h]
  __int64 v83; // [rsp+D8h] [rbp-150h]
  DXGCONTEXT *v84; // [rsp+E0h] [rbp-148h]
  const struct _D3DKMT_PRESENT *v85; // [rsp+E8h] [rbp-140h]
  _BYTE *v86; // [rsp+F0h] [rbp-138h] BYREF
  _BYTE v87[32]; // [rsp+F8h] [rbp-130h] BYREF
  UINT v88; // [rsp+118h] [rbp-110h]
  struct _STRING DestinationString; // [rsp+120h] [rbp-108h] BYREF
  _BYTE v90[16]; // [rsp+130h] [rbp-F8h] BYREF
  int v91[4]; // [rsp+140h] [rbp-E8h] BYREF
  _BYTE *v92; // [rsp+150h] [rbp-D8h] BYREF
  _BYTE v93[128]; // [rsp+158h] [rbp-D0h] BYREF
  UINT v94; // [rsp+1D8h] [rbp-50h]

  v85 = a2;
  v84 = (DXGCONTEXT *)this;
  v78 = a4;
  v81 = a5;
  v79 = a6;
  v8 = *((_QWORD *)this[2] + 5);
  v75 = v8;
  v83 = v8;
  v72 = *(struct _EX_RUNDOWN_REF **)(v8 + 80);
  v9 = a3 + 1;
  v67 = 0;
  PoolWithTag = 0LL;
  v92 = 0LL;
  v94 = 0;
  if ( (unsigned int)(a3 + 1) <= 4 )
  {
    PoolWithTag = v93;
    v92 = v93;
  }
  else
  {
    v8 = v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x20 )
      goto LABEL_7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v9, 0x4B677844u);
    v92 = PoolWithTag;
  }
  v94 = v9;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 32LL * v9);
    PoolWithTag = v92;
  }
LABEL_7:
  v11 = 0LL;
  v86 = 0LL;
  v88 = 0;
  if ( v9 <= 4 )
  {
    v11 = v87;
    v86 = v87;
  }
  else
  {
    v8 = v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_13;
    v11 = ExAllocatePoolWithTag(PagedPool, 8LL * v9, 0x4B677844u);
    v86 = v11;
  }
  v88 = v9;
  if ( v11 )
  {
    memset(v11, 0, 8LL * v9);
    v11 = v86;
  }
LABEL_13:
  v77 = v11;
  if ( PoolWithTag && v11 )
  {
    if ( *((_QWORD *)this[2] + 2338) != *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL)
      || (unsigned int)_guard_dispatch_icall_fptr() )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0x1800u;
    *((_DWORD *)a7 + 35) = v9;
    v12 = (char *)a7 + 360;
    if ( !*((_BYTE *)a7 + 348) )
      v12 = (char *)a7 + 352;
    *v12 = 1;
    for ( i = 0LL; ; i = (unsigned int)(v64 + 1) )
    {
      v64 = i;
      if ( (unsigned int)i >= v9 )
        break;
      v14 = *((_BYTE *)a7 + 348);
      v73 = (char *)a7 + 360;
      if ( v14 )
        v70 = (struct VIDMM_ALLOC **)((char *)a7 + 56 * (unsigned int)(i * *((_DWORD *)a7 + 91)) + 376);
      else
        v70 = (struct VIDMM_ALLOC **)((char *)a7 + 360);
      if ( v14 )
        v73 = (char *)a7 + 56 * (unsigned int)(i * *((_DWORD *)a7 + 91)) + 376;
      v68 = (unsigned int)i;
      v15 = a4;
      v16 = a4[i];
      v17 = *((_DWORD *)v16 + 82);
      v69 = v17;
      v66 = 0LL;
      if ( !*((_BYTE *)v16 + 350) )
      {
        v18 = WdLogNewEntry5_WdError(a4);
        *(_QWORD *)(v18 + 24) = 5861LL;
        goto LABEL_29;
      }
      if ( (_DWORD)i )
      {
        if ( v17 <= *((_DWORD *)a4[(unsigned int)(i - 1)] + 82) )
        {
          v18 = WdLogNewEntry5_WdError(a4);
          *(_QWORD *)(v18 + 24) = 5877LL;
LABEL_29:
          WdLogEvent5_WdError(v18);
          v22 = -1073741811;
LABEL_30:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v66, v19, v20, v21);
          goto LABEL_57;
        }
        v25 = &v85->BroadcastSrcAllocation[(unsigned int)(i - 1)];
        if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v74 = *v25;
        v82 = v74;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      v75,
                                                      (DXGALLOCATIONREFERENCE *)&v80,
                                                      v74);
        DXGALLOCATIONREFERENCE::MoveAssign(&v66, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v27, v28, v29);
        v23 = v66;
        v72 = v66;
        if ( !v66 )
        {
          v31 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v31 + 24) = v74;
          v22 = -1073741811;
          *(_QWORD *)(v31 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v31);
          goto LABEL_30;
        }
        v24 = (DXGCONTEXT *)this;
        v15 = *(struct DXGCONTEXT ***)(v66[1].Count + 16);
        if ( v15[2] != *(struct DXGCONTEXT **)(*((_QWORD *)this[2] + 2) + 16LL) )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v33 = (DXGCONTEXT *)this;
          v32[3] = this[2];
          v32[4] = v23;
          v22 = -1073741811;
          v32[5] = -1073741811LL;
          WdLogEvent5_WdError(v32);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v66, v34, v35, v36);
          goto LABEL_58;
        }
      }
      else
      {
        v23 = (struct _EX_RUNDOWN_REF *)v81;
        v72 = (struct _EX_RUNDOWN_REF *)v81;
        v24 = (DXGCONTEXT *)this;
      }
      if ( ((LODWORD(v23[9].Count) >> 9) & 0x3F) != v69 )
      {
        v18 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v18 + 24) = v23;
        goto LABEL_29;
      }
      v22 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 400LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)v24 + 2) + 536LL),
              (struct _VIDMM_MULTI_ALLOC *)v23[3].Count,
              v70);
      if ( v22 < 0 )
        goto LABEL_30;
      v37 = v67;
      *(_QWORD *)&v11[8 * v67] = *v70;
      v67 = v37 + 1;
      v70 = (struct VIDMM_ALLOC **)(v73 + 16);
      v38 = v72;
      _guard_dispatch_icall_fptr();
      v39 = v73;
      *((_DWORD *)v73 + 13) ^= (*((_DWORD *)v73 + 13) ^ (v71 << 17)) & 0x3E0000;
      Count = v38[5].Count;
      if ( Count )
        LODWORD(Count) = (*(_DWORD *)(Count + 4) >> 3) & 1;
      *((_DWORD *)v39 + 13) ^= (*((_DWORD *)v39 + 13) ^ ((_DWORD)Count << 23)) & 0x800000;
      *((_QWORD *)v39 + 1) = *(_QWORD *)(v38[6].Count + 16);
      v68 *= 32LL;
      *(struct _EX_RUNDOWN_REF *)&PoolWithTag[v68] = v38[4];
      v41 = _guard_dispatch_icall_fptr();
      v42 = v68;
      *(_QWORD *)&PoolWithTag[v68 + 8] = v41;
      *(_QWORD *)&PoolWithTag[v42 + 16] = *v70;
      *(_WORD *)&PoolWithTag[v42 + 24] = v71;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v66, v43, v44, v45);
    }
    v46 = v79;
    v79->NumSrcAllocations = v9;
    v46->pAllocationList = (DXGK_ALLOCATIONLIST *)PoolWithTag;
    v33 = (DXGCONTEXT *)this;
    v22 = ADAPTER_RENDER::DdiPresent(*((ADAPTER_RENDER **)this[2] + 2), this[21], v46);
    if ( v22 >= 0 )
    {
      v65 = 0;
      if ( v9 )
      {
        v50 = a4;
        v68 = (__int64)a4;
        do
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((struct _KTHREAD **)*v50 + 46) != CurrentThread )
          {
            v52 = WdLogNewEntry5_WdAssertion(CurrentThread, v47, v48, v49);
            *(_QWORD *)(v52 + 24) = 6005LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v22 = _guard_dispatch_icall_fptr();
          if ( v22 < 0 )
            break;
          *(_DWORD *)a7 &= ~0x1000u;
          v47 = (unsigned int)(v65 + 1);
          v65 = v47;
          v50 = (struct DXGCONTEXT **)(v68 + 8);
          v68 += 8LL;
        }
        while ( (unsigned int)v47 < v9 );
      }
    }
  }
  else
  {
    v53 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v53 + 24) = 5819LL;
    WdLogEvent5_WdLowResource(v53);
    v22 = -1073741801;
LABEL_57:
    v33 = (DXGCONTEXT *)this;
  }
LABEL_58:
  v54 = a4;
  if ( v22 < 0 )
  {
    if ( v67 )
    {
      v55 = v11 - (_BYTE *)a4;
      v56 = v67;
      do
      {
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL) + 400LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)v33 + 2) + 536LL),
          1 << *((_DWORD *)*v54 + 82),
          *(struct DXGCONTEXT **)((char *)v54 + v55));
        ++v54;
        --v56;
      }
      while ( v56 );
    }
    v57 = 0;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    v58 = *(_QWORD *)(v75 + 56);
    if ( v58 )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(v58);
      RtlInitAnsiString(&DestinationString, ProcessImageFileName);
      v57 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0;
    }
    if ( !v57 )
      RtlInitUnicodeString(&UnicodeString, L"<Unknown>");
    DxgkSqmCreateStringStreamEntry((__int64)v90, UnicodeString.Buffer);
    DxgkSqmCreateDwordStreamEntry(v91, 2);
    DxgkSqmAddToStream(4783LL, 2LL, (__int64)v90, v60);
    if ( v57 )
      RtlFreeUnicodeString(&UnicodeString);
  }
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v86);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)&v92);
  return (unsigned int)v22;
}
