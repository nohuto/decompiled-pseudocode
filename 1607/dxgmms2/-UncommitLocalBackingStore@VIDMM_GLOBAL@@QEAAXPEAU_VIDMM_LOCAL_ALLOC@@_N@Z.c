/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004B86C
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00523D4 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0052534 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088778 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  char v5; // si
  __int64 v6; // r14
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx

  v4 = *(_QWORD *)a2;
  v5 = a3;
  v6 = *((_QWORD *)a2 + 1);
  if ( (**(_DWORD **)(*(_QWORD *)a2 + 504LL) & 0x20040000) != 0 )
  {
    if ( (_BYTE)a3 )
    {
      v8 = *((_QWORD *)a2 + 2);
      if ( v8 )
      {
        CurrentProcess = PsGetCurrentProcess(this);
        MmUnmapViewOfSection(CurrentProcess, v8);
      }
    }
  }
  v10 = **(unsigned int **)(v4 + 504);
  if ( (v10 & 0x20000000) != 0 )
  {
    if ( (v10 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v11 = WdLogNewEntry5_WdEvent(v10, a2, a3, a4);
      v12 = *((_QWORD *)a2 + 12);
      v13 = v11;
      *(_QWORD *)(v11 + 24) = v12;
      *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
      WdLogEvent5_WdEvent(v13);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v10 & 8) == 0 && (v10 & 0x10) == 0 && (v10 & 0x20) == 0 && *((_QWORD *)a2 + 3) && v5 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v6 + 24) + 24LL))(
      *(_QWORD *)(v6 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  *((_QWORD *)a2 + 2) = 0LL;
}
