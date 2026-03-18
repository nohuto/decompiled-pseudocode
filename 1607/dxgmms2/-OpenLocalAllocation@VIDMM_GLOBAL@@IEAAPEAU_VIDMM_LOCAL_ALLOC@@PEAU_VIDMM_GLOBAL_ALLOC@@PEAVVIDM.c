/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0052534
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004B86C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C004C454 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C004C4E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C005AB90 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  void *v5; // r12
  struct VIDMM_PROCESS *v6; // rbp
  __int64 v9; // rax
  _QWORD *v11; // r14
  _QWORD *i; // rax
  __int64 v13; // rdi
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  VIDMM_GLOBAL *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  enum _LOCK_OPERATION v29; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v5 = (void *)a4;
  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5040);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 11571LL;
    goto LABEL_7;
  }
  v11 = (_QWORD *)((char *)a2 + 296);
  if ( (_QWORD *)*v11 != v11 && (**((_DWORD **)a2 + 63) & 0x20000000) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 11582LL;
LABEL_7:
    WdLogEvent5_WdAssertion(v9);
    return 0LL;
  }
  for ( i = (_QWORD *)*v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
    {
      v14 = operator new(0x68uLL, 0x32306956u, PagedPool);
      v13 = (__int64)v14;
      if ( !v14 )
      {
        _InterlockedIncrement(&dword_1C0035560);
        v16 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v16 + 24) = 11639LL;
        WdLogEvent5_WdLowResource(v16);
        return 0LL;
      }
      memset(v14, 0, 0x68uLL);
      *(_QWORD *)v13 = a2;
      *(_QWORD *)(v13 + 8) = v6;
      if ( (*((_DWORD *)a2 + 23) & 1) != 0
        && VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v13, v5) < 0 )
      {
        goto LABEL_35;
      }
      if ( (**((_DWORD **)a2 + 63) & 0x20000000) != 0 )
      {
        if ( !*((_QWORD *)a2 + 13) || (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          *(_QWORD *)(v13 + 8) = v6;
          if ( *((_QWORD *)a2 + 13) )
          {
            *(_QWORD *)v13 = a2;
            if ( *((int *)a2 + 87) > 0 )
            {
              if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                          v20,
                          (struct _VIDMM_LOCAL_ALLOC *)v13,
                          a2,
                          0LL,
                          *((_QWORD *)a2 + 1),
                          v29,
                          *((struct VIDMM_SEGMENT **)a2 + 17),
                          0) < 0 )
              {
                _InterlockedIncrement(&dword_1C0035554);
                v24 = WdLogNewEntry5_WdLowResource(v23);
                *(_QWORD *)(v24 + 24) = a2;
                *(_QWORD *)(v24 + 32) = *((_QWORD *)a2 + 1);
                WdLogEvent5_WdLowResource(v24);
LABEL_35:
                LOBYTE(v21) = 1;
                VIDMM_GLOBAL::UncommitLocalBackingStore(v20, (struct _VIDMM_LOCAL_ALLOC *)v13, v21, v22);
                operator delete((void *)v13);
                return 0LL;
              }
              VIDMM_GLOBAL::UnlockAllocation(
                this,
                *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13),
                0LL,
                *((_QWORD *)a2 + 1),
                0,
                0);
            }
            v25 = *((_QWORD *)a2 + 13);
            if ( (*(_BYTE *)(v25 + 32) & 2) == 0 )
            {
              KeStackAttachProcess(**(PRKPROCESS **)(v25 + 8), &ApcState);
              VIDMM_GLOBAL::CloseOneAllocation(
                this,
                (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 40LL) - 40LL),
                0LL,
                0,
                0,
                0LL);
              KeUnstackDetachProcess(&ApcState);
            }
          }
          if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
          {
            v26 = *((_QWORD *)a2 + 17);
            if ( v26 )
              VidMmRecordAlloc(this, (__int64)a2, v13, v26, *((_QWORD *)a2 + 2), 0);
          }
          *((_DWORD *)a2 + 21) &= ~4u;
          *((_QWORD *)a2 + 13) = v13;
        }
        *a5 = 1;
      }
      else
      {
        *((_QWORD *)a2 + 13) = v13;
      }
      *(_DWORD *)(v13 + 36) = 1;
      *(_QWORD *)(v13 + 48) = v13 + 40;
      *(_QWORD *)(v13 + 40) = v13 + 40;
      v27 = (_QWORD *)(v13 + 56);
      ++*((_DWORD *)a2 + 78);
      v28 = (_QWORD *)*((_QWORD *)a2 + 38);
      if ( (_QWORD *)*v28 != v11 )
        __fastfail(3u);
      *v27 = v11;
      *(_QWORD *)(v13 + 64) = v28;
      *v28 = v27;
      *((_QWORD *)a2 + 38) = v27;
      return (struct _VIDMM_LOCAL_ALLOC *)v13;
    }
    v13 = (__int64)(i - 7);
    if ( (struct VIDMM_PROCESS *)*(i - 6) == v6 )
      break;
  }
  v17 = *(_BYTE *)(v13 + 32);
  if ( (v17 & 2) != 0 )
  {
    *(_BYTE *)(v13 + 32) = v17 & 0xFD;
    v18 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = v13;
    WdLogEvent5_WdEvent(v18);
    v19 = *((_QWORD *)a2 + 13);
    if ( !v19 || (*(_BYTE *)(v19 + 32) & 2) != 0 )
    {
      a4 = *((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 13) = v13;
      if ( a4 )
        VidMmRecordAlloc(this, (__int64)a2, v13, a4, *((_QWORD *)a2 + 2), 0);
    }
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, a2, a3, a4) + 24) = v13;
  ++*(_DWORD *)(v13 + 36);
  return (struct _VIDMM_LOCAL_ALLOC *)v13;
}
