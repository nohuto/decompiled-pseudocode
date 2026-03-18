/*
 * XREFs of ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C005AB90
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0052534 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0054A50 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitLocalBackingStore(VIDMM_GLOBAL *this, void **a2, unsigned __int64 a3)
{
  __int64 v6; // rsi
  unsigned int **v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  char v11; // al
  unsigned int *v12; // rcx
  void **Handle; // rbx
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS inserted; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD v29[2]; // [rsp+50h] [rbp-28h] BYREF
  void *v30; // [rsp+58h] [rbp-20h]
  unsigned __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v6) = 0;
  v31 = 0LL;
  v7 = (unsigned int **)*a2;
  v8 = **((_DWORD **)*a2 + 63);
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( (v8 & 0x400000) == 0 )
    {
      v11 = *((_BYTE *)v7 + 88);
      v12 = v7[46];
      if ( (v11 & 1) != 0 )
      {
        *((_BYTE *)v7 + 88) = v11 & 0xFE;
        inserted = ObInsertObject(v12, 0LL, 0, 0, 0LL, a2 + 12);
      }
      else
      {
        Handle = a2 + 12;
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v12, a2, a3, this);
        inserted = ObOpenObjectByPointer(v7[46], 0, 0LL, 0, ObjectType, 1, Handle);
      }
      v6 = inserted;
      if ( inserted < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v24 + 24) = v7[46];
        *(_QWORD *)(v24 + 32) = v6;
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v6;
      }
    }
    if ( (*((_DWORD *)v7 + 20) & 0x80u) != 0 )
    {
      v29[0] = 0;
      v29[1] = 0;
      v18 = *v7[63];
      v19 = v7 + 1;
      if ( (v18 & 4) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess(v18);
        v21 = MmMapViewOfSection(v7[46], CurrentProcess, &v31, 0LL, *v19, v29, v7 + 1, 2, 0, 4);
      }
      else
      {
        v23 = PsGetCurrentProcess(v18);
        v21 = MmMapViewOfSection(v7[46], v23, &v31, 0LL, *v19, v29, v7 + 1, 2, 0, 1028);
      }
      LODWORD(v6) = v21;
      if ( v21 < 0 )
      {
        _InterlockedIncrement(&dword_1C003556C);
        v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
        v25[3] = v7;
        v25[4] = PsGetCurrentProcess(v26);
        v25[5] = (int)v6;
        WdLogEvent5_WdLowResource(v25);
        return (unsigned int)v6;
      }
    }
LABEL_7:
    a2[2] = (void *)v31;
    return (unsigned int)v6;
  }
  if ( (v8 & 8) != 0 )
    goto LABEL_7;
  if ( (v8 & 0x10) != 0 )
  {
    if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) && *v7 == (unsigned int *)((unsigned __int64)*v7 & 0xFFFFFFFFFFFFF000uLL) )
    {
      ProbeForWrite((volatile void *)a3, (SIZE_T)v7[1], 1u);
LABEL_32:
      v31 = a3;
      goto LABEL_7;
    }
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v27 + 24) = 26356LL;
  }
  else
  {
    if ( (v8 & 0x20) == 0 )
    {
      v30 = 0LL;
      LODWORD(v6) = _guard_dispatch_icall_fptr();
      if ( (int)v6 < 0 )
      {
        _InterlockedIncrement(&dword_1C00355F4);
        v28 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v28 + 24) = 26497LL;
        WdLogEvent5_WdLowResource(v28);
      }
      else
      {
        a2[3] = v30;
      }
      goto LABEL_7;
    }
    if ( a3 < MmUserProbeAddress )
    {
      v27 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v27 + 24) = 26400LL;
      goto LABEL_27;
    }
    if ( a3 == (a3 & 0xFFFFFFFFFFFFF000uLL) && *v7 == (unsigned int *)((unsigned __int64)*v7 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_32;
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v27 + 24) = 26413LL;
  }
LABEL_27:
  WdLogEvent5_WdAssertion(v27);
  return 3221225485LL;
}
