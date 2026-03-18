/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C003397C
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00512F8 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z @ 0x1C0053D3C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1E@Z.c)
 */

void **__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        unsigned __int64 a4,
        unsigned __int8 *a5)
{
  __int64 v7; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  void **v16; // rax
  __int64 v17; // rcx
  void **v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  char v25; // al
  void *v26; // rcx
  NTSTATUS inserted; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rax
  struct _OBJECT_TYPE *ObjectType; // rax
  VIDMM_GLOBAL *v35; // rcx
  _QWORD *v36; // rbx
  __int64 CurrentProcess; // rax
  int v38; // eax
  __int64 v39; // rax
  _QWORD *v40; // rbx
  _QWORD *v41; // rcx
  struct VIDMM_PROCESS *v42; // rbx
  VIDMM_GLOBAL *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  enum _LOCK_OPERATION Handle; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v52; // [rsp+50h] [rbp-A8h] BYREF
  struct VIDMM_PROCESS *v53; // [rsp+58h] [rbp-A0h]
  VIDMM_GLOBAL *v54; // [rsp+60h] [rbp-98h]
  void **v55; // [rsp+68h] [rbp-90h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v56; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v57; // [rsp+78h] [rbp-80h]
  void *v58; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v53 = a3;
  v54 = this;
  v56 = a2;
  v57 = a5;
  v52 = 0LL;
  v58 = 0LL;
  if ( !a3 )
  {
    a3 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5000);
    v53 = a3;
    if ( !a3 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
      *(_QWORD *)(v7 + 24) = 10450LL;
LABEL_4:
      WdLogEvent5_WdAssertion(v7);
      return 0LL;
    }
  }
  v9 = (_QWORD *)((char *)a2 + 288);
  if ( (_QWORD *)*v9 != v9 && (**((_DWORD **)a2 + 59) & 0x20000000) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 10461LL;
    goto LABEL_4;
  }
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
LABEL_19:
    v16 = (void **)operator new(0x70uLL, 0x32306956u, PagedPool);
    v18 = v16;
    v55 = v16;
    if ( !v16 )
    {
      _InterlockedAdd(&dword_1C00274D0, 1u);
      v19 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v19 + 24) = 10518LL;
      WdLogEvent5_WdLowResource(v19);
      return 0LL;
    }
    memset(v16, 0, 0x70uLL);
    v24 = **((_DWORD **)a2 + 59);
    if ( (v24 & 0x20000000) != 0 )
    {
      if ( (v24 & 0x400000) == 0 )
      {
        v25 = *((_BYTE *)a2 + 88);
        v26 = (void *)*((_QWORD *)a2 + 44);
        if ( (v25 & 1) != 0 )
        {
          *((_BYTE *)a2 + 88) = v25 & 0xFE;
          inserted = ObInsertObject(v26, 0LL, 0, 0, 0LL, v18 + 13);
        }
        else
        {
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v26);
          inserted = ObOpenObjectByPointer(*((PVOID *)a2 + 44), 0, 0LL, 0, ObjectType, 1, v18 + 13);
        }
        v32 = inserted;
        if ( inserted < 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          *(_QWORD *)(v33 + 24) = *((_QWORD *)a2 + 44);
          *(_QWORD *)(v33 + 32) = v32;
LABEL_27:
          WdLogEvent5_WdAssertion(v33);
          goto LABEL_68;
        }
      }
      v35 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 59);
      if ( ((unsigned __int8)v35 & 1) != 0 )
      {
        v55 = 0LL;
        v36 = (_QWORD *)((char *)a2 + 8);
        if ( ((unsigned __int8)v35 & 4) != 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          v38 = MmMapViewOfSection(*((_QWORD *)a2 + 44), CurrentProcess, &v52, 0LL, *v36, &v55, (char *)a2 + 8, 2, 0, 4);
        }
        else
        {
          v39 = PsGetCurrentProcess();
          v38 = MmMapViewOfSection(*((_QWORD *)a2 + 44), v39, &v52, 0LL, *v36, &v55, (char *)a2 + 8, 2, 0, 1028);
        }
        LODWORD(v56) = v38;
        if ( v38 < 0 )
        {
          _InterlockedAdd(&dword_1C00274DC, 1u);
          v40 = (_QWORD *)WdLogNewEntry5_WdLowResource(v35);
          v40[3] = a2;
          v40[4] = PsGetCurrentProcess();
          v40[5] = (int)v56;
          v41 = v40;
LABEL_67:
          WdLogEvent5_WdLowResource(v41);
LABEL_68:
          operator delete(v18);
          if ( (**((_DWORD **)a2 + 59) & 0x20000000) != 0 )
          {
            if ( v52 )
            {
              v48 = PsGetCurrentProcess();
              MmUnmapViewOfSection(v48, v52);
            }
          }
          return 0LL;
        }
      }
      if ( *((_QWORD *)a2 + 12) && (*((_DWORD *)a2 + 21) & 4) == 0 )
      {
        v42 = v53;
      }
      else
      {
        v42 = v53;
        v18[1] = v53;
        if ( *((_QWORD *)a2 + 12) )
        {
          *v18 = a2;
          if ( *((int *)a2 + 85) > 0 )
          {
            if ( VIDMM_GLOBAL::ProbeAndLockAllocation(
                   v35,
                   (struct _VIDMM_LOCAL_ALLOC *)v18,
                   a2,
                   0LL,
                   *((_QWORD *)a2 + 1),
                   Handle,
                   *((struct VIDMM_SEGMENT **)a2 + 16),
                   0) < 0 )
            {
              _InterlockedAdd(&dword_1C00274C4, 1u);
              v44 = WdLogNewEntry5_WdLowResource(v43);
              *(_QWORD *)(v44 + 24) = a2;
              *(_QWORD *)(v44 + 32) = *((_QWORD *)a2 + 1);
LABEL_66:
              v41 = (_QWORD *)v44;
              goto LABEL_67;
            }
            VIDMM_GLOBAL::UnlockAllocation(v43, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12), 0LL, *((_QWORD *)a2 + 1), 0);
          }
          v45 = *((_QWORD *)a2 + 12);
          if ( (*(_BYTE *)(v45 + 32) & 2) == 0 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v45 + 8), &ApcState);
            VIDMM_GLOBAL::CloseOneAllocation(
              v54,
              (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) - 40LL),
              0LL,
              0,
              0,
              0LL);
            KeUnstackDetachProcess(&ApcState);
          }
        }
        if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          v46 = *((_QWORD *)a2 + 16);
          if ( v46 )
            VidMmRecordAlloc(v54, (__int64)a2, (__int64)v18, v46, *((_QWORD *)a2 + 2), 0);
        }
        *((_DWORD *)a2 + 21) &= ~4u;
        *((_QWORD *)a2 + 12) = v18;
      }
      *v57 = 1;
LABEL_73:
      *v18 = a2;
      v18[2] = (void *)v52;
      *((_DWORD *)v18 + 9) = 1;
      v18[1] = v42;
      v18[6] = v18 + 5;
      v18[5] = v18 + 5;
      ++*((_DWORD *)a2 + 76);
      v49 = v18 + 7;
      v50 = (_QWORD *)v9[1];
      v18[7] = v9;
      v18[8] = v50;
      if ( (_QWORD *)*v50 != v9 )
        __fastfail(3u);
      *v50 = v49;
      v9[1] = v49;
      return v18;
    }
    if ( (v24 & 8) == 0 )
    {
      if ( (v24 & 0x10) != 0 )
      {
        if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)a2 != (*(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v33 + 24) = 10751LL;
          goto LABEL_27;
        }
        ProbeForWrite((volatile void *)a4, *((_QWORD *)a2 + 1), 1u);
      }
      else
      {
        if ( (v24 & 0x20) == 0 )
        {
          v42 = v53;
          if ( (int)_guard_dispatch_icall_fptr() < 0 )
          {
            _InterlockedAdd(&dword_1C0027564, 1u);
            v44 = WdLogNewEntry5_WdLowResource(v47);
            *(_QWORD *)(v44 + 24) = 10896LL;
            goto LABEL_66;
          }
          v18[3] = v58;
          goto LABEL_72;
        }
        if ( a4 < MmUserProbeAddress )
        {
          v33 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v33 + 24) = 10801LL;
          goto LABEL_27;
        }
        if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)a2 != (*(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v33 + 24) = 10814LL;
          goto LABEL_27;
        }
      }
      v52 = a4;
    }
    v42 = v53;
LABEL_72:
    *((_QWORD *)a2 + 12) = v18;
    goto LABEL_73;
  }
  while ( 1 )
  {
    v11 = (__int64)(v10 - 7);
    if ( (struct VIDMM_PROCESS *)*(v10 - 6) == a3 )
      break;
    v10 = (_QWORD *)*v10;
    if ( v10 == v9 )
      goto LABEL_19;
  }
  v12 = *(_BYTE *)(v11 + 32);
  if ( (v12 & 2) != 0 )
  {
    *(_BYTE *)(v11 + 32) = v12 & 0xFD;
    v13 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdEvent(v13);
    v14 = *((_QWORD *)a2 + 12);
    if ( !v14 || (*(_BYTE *)(v14 + 32) & 2) != 0 )
    {
      *((_QWORD *)a2 + 12) = v11;
      v15 = *((_QWORD *)a2 + 16);
      if ( v15 )
        VidMmRecordAlloc(v54, (__int64)a2, v11, v15, *((_QWORD *)a2 + 2), 0);
    }
  }
  ++*(_DWORD *)(v11 + 36);
  return (void **)v11;
}
