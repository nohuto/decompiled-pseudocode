/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C004A228
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0043820 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00438B0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
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
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  char v25; // al
  void *v26; // rcx
  NTSTATUS inserted; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _OBJECT_TYPE *ObjectType; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  _QWORD *v40; // rbx
  _QWORD *v41; // rcx
  struct VIDMM_PROCESS *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 CurrentProcess; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  enum _LOCK_OPERATION Handle; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v53; // [rsp+50h] [rbp-A8h] BYREF
  struct VIDMM_PROCESS *v54; // [rsp+58h] [rbp-A0h]
  VIDMM_GLOBAL *v55; // [rsp+60h] [rbp-98h]
  void **v56; // [rsp+68h] [rbp-90h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v57; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v58; // [rsp+78h] [rbp-80h]
  void *v59; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v54 = a3;
  v55 = this;
  v57 = a2;
  v58 = a5;
  v53 = 0LL;
  v59 = 0LL;
  if ( !a3 )
  {
    a3 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5007);
    v54 = a3;
    if ( !a3 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
      *(_QWORD *)(v7 + 24) = 10645LL;
LABEL_4:
      WdLogEvent5_WdAssertion(v7);
      return 0LL;
    }
  }
  v9 = (_QWORD *)((char *)a2 + 288);
  if ( (_QWORD *)*v9 != v9 && (**((_DWORD **)a2 + 59) & 0x20000000) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 10656LL;
    goto LABEL_4;
  }
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
LABEL_19:
    v16 = (void **)operator new(0x68uLL, 0x32306956u, PagedPool);
    v18 = v16;
    v56 = v16;
    if ( !v16 )
    {
      _InterlockedIncrement(&dword_1C002F4E0);
      v19 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v19 + 24) = 10713LL;
      WdLogEvent5_WdLowResource(v19);
      return 0LL;
    }
    memset(v16, 0, 0x68uLL);
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
          inserted = ObInsertObject(v26, 0LL, 0, 0, 0LL, v18 + 12);
        }
        else
        {
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v26);
          inserted = ObOpenObjectByPointer(*((PVOID *)a2 + 44), 0, 0LL, 0, ObjectType, 1, v18 + 12);
        }
        v31 = inserted;
        if ( inserted < 0 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v21, v28, v29, v30);
          *(_QWORD *)(v32 + 24) = *((_QWORD *)a2 + 44);
          *(_QWORD *)(v32 + 32) = v31;
LABEL_27:
          WdLogEvent5_WdAssertion(v32);
LABEL_68:
          if ( (**((_DWORD **)a2 + 59) & 0x20000000) != 0 )
          {
            if ( v53 )
            {
              CurrentProcess = PsGetCurrentProcess();
              MmUnmapViewOfSection(CurrentProcess, v53);
            }
            if ( v18[12] )
            {
              v49 = WdLogNewEntry5_WdEvent(v34, v33);
              *(_QWORD *)(v49 + 24) = v18[12];
              *(_QWORD *)(v49 + 32) = PsGetCurrentProcess();
              WdLogEvent5_WdEvent(v49);
              ObCloseHandle(v18[12], ((unsigned __int64)v18[12] & 0xFFFFFFFF80000000uLL) == 0);
              v18[12] = 0LL;
            }
          }
          operator delete(v18);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
      {
        v56 = 0LL;
        v36 = (_QWORD *)((char *)a2 + 8);
        if ( (**((_DWORD **)a2 + 59) & 4) != 0 )
        {
          v37 = PsGetCurrentProcess();
          v38 = MmMapViewOfSection(*((_QWORD *)a2 + 44), v37, &v53, 0LL, *v36, &v56, (char *)a2 + 8, 2, 0, 4);
        }
        else
        {
          v39 = PsGetCurrentProcess();
          v38 = MmMapViewOfSection(*((_QWORD *)a2 + 44), v39, &v53, 0LL, *v36, &v56, (char *)a2 + 8, 2, 0, 1028);
        }
        LODWORD(v57) = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C002F4EC);
          v40 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
          v40[3] = a2;
          v40[4] = PsGetCurrentProcess();
          v40[5] = (int)v57;
          v41 = v40;
LABEL_67:
          WdLogEvent5_WdLowResource(v41);
          goto LABEL_68;
        }
      }
      if ( *((_QWORD *)a2 + 12) && (*((_DWORD *)a2 + 21) & 4) == 0 )
      {
        v42 = v54;
      }
      else
      {
        v42 = v54;
        v18[1] = v54;
        if ( *((_QWORD *)a2 + 12) )
        {
          *v18 = a2;
          if ( *((int *)a2 + 85) > 0 )
          {
            if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                        v21,
                        (struct _VIDMM_LOCAL_ALLOC *)v18,
                        a2,
                        0LL,
                        *((_QWORD *)a2 + 1),
                        Handle,
                        *((struct VIDMM_SEGMENT **)a2 + 16),
                        0) < 0 )
            {
              _InterlockedIncrement(&dword_1C002F4D4);
              v44 = WdLogNewEntry5_WdLowResource(v43);
              *(_QWORD *)(v44 + 24) = a2;
              *(_QWORD *)(v44 + 32) = *((_QWORD *)a2 + 1);
LABEL_66:
              v41 = (_QWORD *)v44;
              goto LABEL_67;
            }
            VIDMM_GLOBAL::UnlockAllocation(
              v55,
              *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
              0LL,
              *((_QWORD *)a2 + 1),
              0,
              0);
          }
          v45 = *((_QWORD *)a2 + 12);
          if ( (*(_BYTE *)(v45 + 32) & 2) == 0 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v45 + 8), &ApcState);
            VIDMM_GLOBAL::CloseOneAllocation(
              v55,
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
            VidMmRecordAlloc(v55, (__int64)a2, (__int64)v18, v46, *((_QWORD *)a2 + 2), 0);
        }
        *((_DWORD *)a2 + 21) &= ~4u;
        *((_QWORD *)a2 + 12) = v18;
      }
      *v58 = 1;
LABEL_76:
      *v18 = a2;
      v18[2] = (void *)v53;
      *((_DWORD *)v18 + 9) = 1;
      v18[1] = v42;
      v18[6] = v18 + 5;
      v18[5] = v18 + 5;
      ++*((_DWORD *)a2 + 76);
      v50 = v18 + 7;
      v51 = (_QWORD *)v9[1];
      v18[7] = v9;
      v18[8] = v51;
      if ( (_QWORD *)*v51 != v9 )
        __fastfail(3u);
      *v51 = v50;
      v9[1] = v50;
      return v18;
    }
    if ( (v24 & 8) == 0 )
    {
      if ( (v24 & 0x10) != 0 )
      {
        if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)a2 != (*(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v32 + 24) = 10946LL;
          goto LABEL_27;
        }
        ProbeForWrite((volatile void *)a4, *((_QWORD *)a2 + 1), 1u);
      }
      else
      {
        if ( (v24 & 0x20) == 0 )
        {
          v42 = v54;
          if ( (int)_guard_dispatch_icall_fptr() < 0 )
          {
            _InterlockedIncrement(&dword_1C002F574);
            v44 = WdLogNewEntry5_WdLowResource(v47);
            *(_QWORD *)(v44 + 24) = 11091LL;
            goto LABEL_66;
          }
          v18[3] = v59;
          goto LABEL_75;
        }
        if ( a4 < MmUserProbeAddress )
        {
          v32 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v32 + 24) = 10996LL;
          goto LABEL_27;
        }
        if ( a4 != (a4 & 0xFFFFFFFFFFFFF000uLL) || *(_QWORD *)a2 != (*(_QWORD *)a2 & 0xFFFFFFFFFFFFF000uLL) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
          *(_QWORD *)(v32 + 24) = 11009LL;
          goto LABEL_27;
        }
      }
      v53 = a4;
    }
    v42 = v54;
LABEL_75:
    *((_QWORD *)a2 + 12) = v18;
    goto LABEL_76;
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
        VidMmRecordAlloc(v55, (__int64)a2, v11, v15, *((_QWORD *)a2 + 2), 0);
    }
  }
  ++*(_DWORD *)(v11 + 36);
  return (void **)v11;
}
