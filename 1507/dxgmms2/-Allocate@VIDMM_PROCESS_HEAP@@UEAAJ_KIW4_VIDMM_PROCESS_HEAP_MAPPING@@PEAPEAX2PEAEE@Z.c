/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0073AB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pxqqt @ 0x1C0010B08 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C0010BAC (Template_qpxp.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0011F10 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0011F44 (ExFreeToPagedLookasideList.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0074548 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
  PVOID *v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // r15d
  __int64 *v12; // rax
  int SmallAllocation; // edi
  ULONG v14; // r13d
  ULONG v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  _BYTE *v22; // r9
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rcx
  NTSTATUS inserted; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rax
  PVOID *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  HANDLE v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  PVOID v45; // rdx
  __int16 v46; // ax
  PVOID v47; // r9
  PHANDLE Handle; // [rsp+58h] [rbp+58h]
  __int64 v50; // [rsp+60h] [rbp+60h]
  __int64 v51; // [rsp+68h] [rbp+68h]
  _BYTE v52[48]; // [rsp+B0h] [rbp+B0h] BYREF
  ULONG_PTR ViewSize; // [rsp+118h] [rbp+118h] BYREF

  ViewSize = a2;
  v8 = (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL);
  v9 = a4;
  v10 = a3;
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 8004);
  v12 = *(__int64 **)(a1 + 8);
  SmallAllocation = 0;
  *v8 = 0LL;
  v14 = 0;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v15 = 0;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  v16 = *v12;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != v16 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = ViewSize;
  *a5 = 0LL;
  *v21 = 0LL;
  *v22 = 0;
  if ( v23 < (unsigned int)dword_1C0027270 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v23, v10, v9, v20, v21, v22, a8);
LABEL_60:
    LODWORD(v29) = SmallAllocation;
    goto LABEL_61;
  }
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a1 + 64;
  v26 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v28 = v26;
  if ( !v26 )
  {
    LODWORD(v29) = -1073741801;
    _InterlockedIncrement(&dword_1C0027520);
    v30 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v30 + 24) = 336LL;
LABEL_31:
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_32;
  }
  memset(v26, 0, 0x70uLL);
  if ( v9 - 3 > 3 )
  {
    if ( v9 == 2 )
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
           (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
           0LL,
           &ViewSize,
           v15,
           v14) < 0 )
    {
      v15 &= ~0x800000u;
      LODWORD(v29) = ZwAllocateVirtualMemory(
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
                       0LL,
                       &ViewSize,
                       v15,
                       v14);
      if ( (int)v29 < 0 )
      {
        *v8 = 0LL;
        _InterlockedIncrement(&dword_1C00275AC);
        v30 = WdLogNewEntry5_WdLowResource(v41);
        *(_QWORD *)(v30 + 24) = 454LL;
        goto LABEL_31;
      }
    }
    v42 = MmSecureVirtualMemory(*v8, ViewSize, 4u);
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v42;
    if ( !v42 )
    {
      LODWORD(v29) = -1073741801;
      _InterlockedIncrement(&dword_1C00275AC);
      v30 = WdLogNewEntry5_WdLowResource(v43);
      *(_QWORD *)(v30 + 24) = 472LL;
      goto LABEL_31;
    }
LABEL_19:
    *(_DWORD *)v28 |= 1u;
    v38 = (PVOID *)a6;
    v28[7] = ViewSize;
    v28[6] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *((_BYTE *)v28 + 72) = 0;
    v28[1] = *v8;
    *((_DWORD *)v28 + 4) = v14;
    *((_DWORD *)v28 + 5) = v15;
    v28[4] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v28[5] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v39 = a5;
    *((_DWORD *)v28 + 6) = v9;
    v28[10] = 0LL;
    *v39 = v28;
    *v38 = *v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) += ViewSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) += ViewSize;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 84LL);
    v40 = *(_QWORD **)(a1 + 8);
    if ( v9 == 1 )
    {
      v40[11] += ViewSize;
      v24 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v24 + 96) += ViewSize;
    }
    else if ( v9 == 2 )
    {
      v40[13] += ViewSize;
      v24 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v24 + 112) += ViewSize;
    }
    else
    {
      v40[15] += ViewSize;
      v24 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v24 + 128) += ViewSize;
    }
    LOBYTE(v24) = bTracingEnabled;
    if ( bTracingEnabled )
    {
      v45 = *v8;
      v25 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v46 = Microsoft_Windows_DxgKrnlEnableBits;
      v47 = *v8;
      if ( v9 - 3 <= 3 )
        v47 = *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v51) = 0;
        LODWORD(v50) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        LODWORD(Handle) = v9;
        Template_pxqqt(v24, &EventCreateProcessAllocation, v25, v47, ViewSize, Handle, v50, v51);
        v45 = *v8;
        v25 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        LOBYTE(v24) = bTracingEnabled;
        v46 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v24 )
      {
        v24 = v9 - 3;
        if ( (unsigned int)v24 <= 3 )
          LOBYTE(v45) = v25;
        if ( (v46 & 0x400) != 0 )
          Template_qpxp(
            *(_QWORD *)(a1 + 8),
            &EventCreateProcessAllocationDetails,
            v25,
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
            (char)v28,
            ViewSize,
            (char)v45);
      }
    }
    *a7 = 1;
    goto LABEL_60;
  }
  v31 = 0x8000000;
  if ( ((v9 - 4) & 0xFFFFFFFD) != 0 )
    v31 = 1207959552;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ViewSize;
  LODWORD(v29) = MmCreateSection(v8 + 1, 0LL, 0LL, v8 + 4, 4, v31, 0LL, 0LL);
  if ( (int)v29 < 0 )
  {
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    _InterlockedIncrement(&dword_1C00275D4);
    v30 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v30 + 24) = 374LL;
    goto LABEL_31;
  }
  ObfReferenceObject(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  inserted = ObInsertObject(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 0LL, 0, 0, 0LL, v8 + 2);
  v29 = inserted;
  if ( inserted >= 0 )
  {
    if ( v9 - 5 <= 1 )
    {
      LODWORD(v29) = MmMapViewInSystemSpace(
                       *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
                       &ViewSize);
      if ( (int)v29 < 0 )
        goto LABEL_32;
    }
    goto LABEL_19;
  }
  v37 = WdLogNewEntry5_WdAssertion(v35, v34, v25, v36);
  *(_QWORD *)(v37 + 24) = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(v37 + 32) = v29;
  WdLogEvent5_WdAssertion(v37);
LABEL_32:
  if ( v9 - 3 <= 1 )
    goto LABEL_37;
  if ( v9 == 5 )
    goto LABEL_38;
  if ( v9 == 6 )
  {
LABEL_37:
    if ( v9 - 5 > 1 )
    {
LABEL_40:
      v24 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v24 )
      {
        v44 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( v44 )
        {
          ObCloseHandle(
            *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            (v44 & 0xFFFFFFFF80000000uLL) == 0);
          v24 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        ObfDereferenceObject((PVOID)v24);
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
      (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
      &ViewSize,
      0x8000u);
LABEL_44:
  if ( v28 )
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), v28);
LABEL_61:
  if ( (qword_1C0027060 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 8004);
  return (unsigned int)v29;
}
