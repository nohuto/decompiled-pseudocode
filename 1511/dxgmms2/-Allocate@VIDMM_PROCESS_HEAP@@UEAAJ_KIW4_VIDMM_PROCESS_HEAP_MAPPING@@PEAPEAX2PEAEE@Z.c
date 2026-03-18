/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0087C20
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pxqqt @ 0x1C001E214 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C001EB30 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C001EB64 (ExFreeToPagedLookasideList.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
  PVOID *v8; // rbp
  unsigned int v10; // r15d
  __int64 *v12; // rax
  int SmallAllocation; // edi
  ULONG v14; // r13d
  ULONG v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  _BYTE *v24; // r9
  ULONG_PTR v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  NTSTATUS inserted; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rax
  PVOID *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  HANDLE v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID v47; // rdx
  __int16 v48; // ax
  PVOID v49; // r9
  PHANDLE Handle; // [rsp+58h] [rbp+58h]
  __int64 v52; // [rsp+60h] [rbp+60h]
  __int64 v53; // [rsp+68h] [rbp+68h]
  _BYTE v54[48]; // [rsp+B0h] [rbp+B0h] BYREF
  ULONG_PTR ViewSize; // [rsp+118h] [rbp+118h] BYREF

  ViewSize = a2;
  v8 = (PVOID *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL);
  v10 = a3;
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 8004);
  v12 = *(__int64 **)(a1 + 8);
  SmallAllocation = 0;
  *v8 = 0LL;
  v14 = 0;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v15 = 0;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  v16 = *v12;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  if ( PsGetCurrentProcess() != v16 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19, v20);
    v21[3] = 270LL;
    v21[4] = 30LL;
    v21[5] = 0LL;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v25 = ViewSize;
  *a5 = 0LL;
  *v23 = 0LL;
  *v24 = 0;
  if ( v25 < (unsigned int)dword_1C002F290 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v25, v10, a4, v22, v23, v24, a8);
LABEL_60:
    LODWORD(v31) = SmallAllocation;
    goto LABEL_61;
  }
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a1 + 64;
  v28 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v30 = v28;
  if ( !v28 )
  {
    LODWORD(v31) = -1073741801;
    _InterlockedIncrement(&dword_1C002F530);
    v32 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v32 + 24) = 336LL;
LABEL_31:
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_32;
  }
  memset(v28, 0, 0x70uLL);
  if ( a4 - 3 > 3 )
  {
    if ( a4 == 2 )
    {
      v14 = 4;
      v15 = 12288;
    }
    else
    {
      v14 = 1028;
      v15 = 8400896;
    }
    if ( a8 )
      v15 |= 0x800000u;
    if ( ZwAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL),
           0LL,
           &ViewSize,
           v15,
           v14) < 0 )
    {
      v15 &= ~0x800000u;
      LODWORD(v31) = ZwAllocateVirtualMemory(
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       (PVOID *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL),
                       0LL,
                       &ViewSize,
                       v15,
                       v14);
      if ( (int)v31 < 0 )
      {
        *v8 = 0LL;
        _InterlockedIncrement(&dword_1C002F5BC);
        v32 = WdLogNewEntry5_WdLowResource(v43);
        *(_QWORD *)(v32 + 24) = 454LL;
        goto LABEL_31;
      }
    }
    v44 = MmSecureVirtualMemory(*v8, ViewSize, 4u);
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v44;
    if ( !v44 )
    {
      LODWORD(v31) = -1073741801;
      _InterlockedIncrement(&dword_1C002F5BC);
      v32 = WdLogNewEntry5_WdLowResource(v45);
      *(_QWORD *)(v32 + 24) = 472LL;
      goto LABEL_31;
    }
LABEL_19:
    *(_DWORD *)v30 |= 1u;
    v40 = (PVOID *)a6;
    v30[7] = ViewSize;
    v30[6] = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *((_BYTE *)v30 + 72) = 0;
    v30[1] = *v8;
    *((_DWORD *)v30 + 4) = v14;
    *((_DWORD *)v30 + 5) = v15;
    v30[4] = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v30[5] = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v41 = a5;
    *((_DWORD *)v30 + 6) = a4;
    v30[10] = 0LL;
    *v41 = v30;
    *v40 = *v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) += ViewSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) += ViewSize;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 84LL);
    v42 = *(_QWORD **)(a1 + 8);
    if ( a4 == 1 )
    {
      v42[11] += ViewSize;
      v26 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v26 + 96) += ViewSize;
    }
    else if ( a4 == 2 )
    {
      v42[13] += ViewSize;
      v26 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v26 + 112) += ViewSize;
    }
    else
    {
      v42[15] += ViewSize;
      v26 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v26 + 128) += ViewSize;
    }
    LOBYTE(v26) = bTracingEnabled;
    if ( bTracingEnabled )
    {
      v47 = *v8;
      v27 = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v48 = Microsoft_Windows_DxgKrnlEnableBits;
      v49 = *v8;
      if ( a4 - 3 <= 3 )
        v49 = *(PVOID *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v53) = 0;
        LODWORD(v52) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        LODWORD(Handle) = a4;
        Template_pxqqt(v26, &EventCreateProcessAllocation, v27, v49, ViewSize, Handle, v52, v53);
        v47 = *v8;
        v27 = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        LOBYTE(v26) = bTracingEnabled;
        v48 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v26 )
      {
        v26 = a4 - 3;
        if ( (unsigned int)v26 <= 3 )
          LOBYTE(v47) = v27;
        if ( (v48 & 0x400) != 0 )
          Template_qpxp(
            *(_QWORD *)(a1 + 8),
            &EventCreateProcessAllocationDetails,
            v27,
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
            (char)v30,
            ViewSize,
            (char)v47);
      }
    }
    *a7 = 1;
    goto LABEL_60;
  }
  v33 = 0x8000000;
  if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    v33 = 1207959552;
  *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ViewSize;
  LODWORD(v31) = MmCreateSection(v8 + 1, 0LL, 0LL, v8 + 4, 4, v33, 0LL, 0LL);
  if ( (int)v31 < 0 )
  {
    *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    _InterlockedIncrement(&dword_1C002F5E4);
    v32 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v32 + 24) = 374LL;
    goto LABEL_31;
  }
  ObfReferenceObject(*(PVOID *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  inserted = ObInsertObject(*(PVOID *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 0LL, 0, 0, 0LL, v8 + 2);
  v31 = inserted;
  if ( inserted >= 0 )
  {
    if ( a4 - 5 <= 1 )
    {
      LODWORD(v31) = MmMapViewInSystemSpace(
                       *(PVOID *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       (PVOID *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL),
                       &ViewSize);
      if ( (int)v31 < 0 )
        goto LABEL_32;
    }
    goto LABEL_19;
  }
  v39 = WdLogNewEntry5_WdAssertion(v37, v36, v27, v38);
  *(_QWORD *)(v39 + 24) = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(v39 + 32) = v31;
  WdLogEvent5_WdAssertion(v39);
LABEL_32:
  if ( a4 - 3 <= 1 )
    goto LABEL_37;
  if ( a4 == 5 )
    goto LABEL_38;
  if ( a4 == 6 )
  {
LABEL_37:
    if ( a4 - 5 > 1 )
    {
LABEL_40:
      v26 = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v26 )
      {
        v46 = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( v46 )
        {
          ObCloseHandle(
            *(HANDLE *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            (v46 & 0xFFFFFFFF80000000uLL) == 0);
          v26 = *(_QWORD *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        ObfDereferenceObject((PVOID)v26);
      }
      goto LABEL_44;
    }
LABEL_38:
    if ( *v8 )
      MmUnmapViewInSystemSpace(*v8);
    goto LABEL_40;
  }
  if ( *v8 )
    ZwFreeVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      (PVOID *)((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL),
      &ViewSize,
      0x8000u);
LABEL_44:
  if ( v30 )
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), v30);
LABEL_61:
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 8004);
  return (unsigned int)v31;
}
