/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C009C960
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C001F9C4 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     Template_pxqqt @ 0x1C001FD64 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C009D444 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        _QWORD *a1,
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
  __int64 v10; // r15
  _QWORD *v11; // r14
  int SmallAllocation; // edi
  ULONG v13; // r13d
  ULONG v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  _BYTE *v23; // r9
  ULONG_PTR v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rcx
  NTSTATUS inserted; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
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
  v10 = (unsigned int)a3;
  v11 = a1;
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 8004);
  SmallAllocation = 0;
  *v8 = 0LL;
  v13 = 0;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  v14 = 0;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    a1 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    a1[3] = ViewSize;
    a1[4] = v10;
    a1[5] = v11;
  }
  v15 = *(_QWORD *)v11[1];
  if ( PsGetCurrentProcess(a1) != v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18, v19);
    v20[3] = 270LL;
    v20[4] = 30LL;
    v20[5] = 0LL;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  v21 = a5;
  v22 = a6;
  v23 = a7;
  v24 = ViewSize;
  *a5 = 0LL;
  *v22 = 0LL;
  *v23 = 0;
  if ( v24 < (unsigned int)dword_1C00352A0 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(v11, v24, (unsigned int)v10, v9, v21, v22, v23, a8);
LABEL_62:
    LODWORD(v30) = SmallAllocation;
    goto LABEL_63;
  }
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v11 + 8;
  v27 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v11 + 8));
  v29 = v27;
  if ( !v27 )
  {
    LODWORD(v30) = -1073741801;
    _InterlockedIncrement(&dword_1C00355B0);
    v31 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v31 + 24) = 339LL;
LABEL_33:
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_34;
  }
  memset(v27, 0, 0x70uLL);
  if ( v9 - 3 > 3 )
  {
    if ( v9 == 2 )
    {
      v13 = 4;
      v14 = 12288;
    }
    else
    {
      v13 = 1028;
      v14 = 8400896;
    }
    if ( a8 )
      v14 |= 0x800000u;
    if ( ZwAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
           0LL,
           &ViewSize,
           v14,
           v13) < 0 )
    {
      v14 &= ~0x800000u;
      LODWORD(v30) = ZwAllocateVirtualMemory(
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
                       0LL,
                       &ViewSize,
                       v14,
                       v13);
      if ( (int)v30 < 0 )
      {
        *v8 = 0LL;
        _InterlockedIncrement(&dword_1C003563C);
        v31 = WdLogNewEntry5_WdLowResource(v41);
        *(_QWORD *)(v31 + 24) = 457LL;
        goto LABEL_33;
      }
    }
    v42 = MmSecureVirtualMemory(*v8, ViewSize, 4u);
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v42;
    if ( !v42 )
    {
      LODWORD(v30) = -1073741801;
      _InterlockedIncrement(&dword_1C003563C);
      v31 = WdLogNewEntry5_WdLowResource(v43);
      *(_QWORD *)(v31 + 24) = 475LL;
      goto LABEL_33;
    }
LABEL_21:
    *(_DWORD *)v29 |= 1u;
    v38 = (PVOID *)a6;
    v29[7] = ViewSize;
    v29[6] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *((_BYTE *)v29 + 72) = 0;
    v29[1] = *v8;
    *((_DWORD *)v29 + 4) = v13;
    *((_DWORD *)v29 + 5) = v14;
    v29[4] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v29[5] = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v39 = a5;
    *((_DWORD *)v29 + 6) = v9;
    v29[10] = 0LL;
    *v39 = v29;
    *v38 = *v8;
    *(_QWORD *)(v11[1] + 88LL) += ViewSize;
    *(_QWORD *)(v11[1] + 96LL) += ViewSize;
    ++*(_DWORD *)(v11[1] + 108LL);
    v40 = (_QWORD *)v11[1];
    if ( v9 == 1 )
    {
      v40[14] += ViewSize;
      v25 = v11[1];
      *(_QWORD *)(v25 + 120) += ViewSize;
    }
    else if ( v9 == 2 )
    {
      v40[16] += ViewSize;
      v25 = v11[1];
      *(_QWORD *)(v25 + 136) += ViewSize;
    }
    else
    {
      v40[18] += ViewSize;
      v25 = v11[1];
      *(_QWORD *)(v25 + 152) += ViewSize;
    }
    LOBYTE(v25) = bTracingEnabled;
    if ( bTracingEnabled )
    {
      v45 = *v8;
      v26 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v46 = Microsoft_Windows_DxgKrnlEnableBits;
      v47 = *v8;
      if ( v9 - 3 <= 3 )
        v47 = *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        LODWORD(v51) = 0;
        LODWORD(v50) = *(_DWORD *)(v11[1] + 8LL);
        LODWORD(Handle) = v9;
        Template_pxqqt(v25, &EventCreateProcessAllocation, v26, v47, ViewSize, Handle, v50, v51);
        v45 = *v8;
        v26 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        LOBYTE(v25) = bTracingEnabled;
        v46 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v25 )
      {
        v25 = v9 - 3;
        if ( (unsigned int)v25 <= 3 )
          LOBYTE(v45) = v26;
        if ( (v46 & 0x200) != 0 )
          Template_qpxp(
            v11[1],
            &EventCreateProcessAllocationDetails,
            v26,
            *(_DWORD *)(v11[1] + 8LL),
            (char)v29,
            ViewSize,
            (char)v45);
      }
    }
    *a7 = 1;
    goto LABEL_62;
  }
  v32 = 0x8000000;
  if ( ((v9 - 4) & 0xFFFFFFFD) != 0 )
    v32 = 1207959552;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ViewSize;
  LODWORD(v30) = MmCreateSection(v8 + 1, 0LL, 0LL, v8 + 4, 4, v32, 0LL, 0LL);
  if ( (int)v30 < 0 )
  {
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    _InterlockedIncrement(&dword_1C0035664);
    v31 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v31 + 24) = 377LL;
    goto LABEL_33;
  }
  ObfReferenceObject(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  inserted = ObInsertObject(*(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 0LL, 0, 0, 0LL, v8 + 2);
  v30 = inserted;
  if ( inserted >= 0 )
  {
    if ( v9 - 5 <= 1 )
    {
      LODWORD(v30) = MmMapViewInSystemSpace(
                       *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
                       &ViewSize);
      if ( (int)v30 < 0 )
        goto LABEL_34;
    }
    goto LABEL_21;
  }
  v37 = WdLogNewEntry5_WdAssertion(v36, v35);
  *(_QWORD *)(v37 + 24) = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(v37 + 32) = v30;
  WdLogEvent5_WdAssertion(v37);
LABEL_34:
  if ( v9 - 3 <= 1 )
    goto LABEL_39;
  if ( v9 == 5 )
    goto LABEL_40;
  if ( v9 == 6 )
  {
LABEL_39:
    if ( v9 - 5 > 1 )
    {
LABEL_42:
      v25 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( v25 )
      {
        v44 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( v44 )
        {
          ObCloseHandle(
            *(HANDLE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            (v44 & 0xFFFFFFFF80000000uLL) == 0);
          v25 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        ObfDereferenceObject((PVOID)v25);
      }
      goto LABEL_46;
    }
LABEL_40:
    if ( *v8 )
      MmUnmapViewInSystemSpace(*v8);
    goto LABEL_42;
  }
  if ( *v8 )
    ZwFreeVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      (PVOID *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL),
      &ViewSize,
      0x8000u);
LABEL_46:
  if ( v29 )
    ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), v29);
LABEL_63:
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 8004);
  return (unsigned int)v30;
}
