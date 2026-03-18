/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0049FFC
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  int v5; // r14d
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct _VIDMM_LOCAL_ALLOC **v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax

  v4 = *(_QWORD *)a2;
  v5 = a3;
  if ( (**(_DWORD **)(*(_QWORD *)a2 + 472LL) & 8) != 0
    || (v7 = (_QWORD *)*((_QWORD *)a2 + 1), *v7 == PsGetCurrentProcess()) )
  {
    if ( !v5 )
    {
      *(_DWORD *)(v4 + 84) |= 1u;
      ++*((_DWORD *)a2 + 18);
      ++*(_DWORD *)(v4 + 380);
    }
    if ( (*((_DWORD *)a2 + 9))-- == 1 )
    {
      if ( (**(_DWORD **)(v4 + 472) & 0x20040000) != 0 )
      {
        if ( v5 )
        {
          v11 = *((_QWORD *)a2 + 2);
          if ( v11 )
          {
            CurrentProcess = PsGetCurrentProcess();
            MmUnmapViewOfSection(CurrentProcess, v11);
            *((_QWORD *)a2 + 2) = 0LL;
          }
        }
      }
      if ( *((_DWORD *)a2 + 19) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v4 + 464, 0LL);
        *(_DWORD *)(v4 + 336) -= *((_DWORD *)a2 + 19);
        ExReleasePushLockExclusiveEx(v4 + 464, 0LL);
        KeLeaveCriticalRegion();
      }
      v13 = **(unsigned int **)(v4 + 472);
      if ( (v13 & 0x20000000) != 0 )
      {
        if ( *((_QWORD *)a2 + 12) )
        {
          v14 = WdLogNewEntry5_WdEvent(v13, a2);
          *(_QWORD *)(v14 + 24) = *((_QWORD *)a2 + 12);
          *(_QWORD *)(v14 + 32) = PsGetCurrentProcess();
          WdLogEvent5_WdEvent(v14);
          ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
          *((_QWORD *)a2 + 12) = 0LL;
        }
      }
      else if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x10) != 0 || (v13 & 0x20) != 0 )
        {
          *((_QWORD *)a2 + 2) = 0LL;
        }
        else if ( *((_QWORD *)a2 + 3) && v5 )
        {
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 24LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
            a2);
          *((_QWORD *)a2 + 3) = 0LL;
        }
      }
      --*(_DWORD *)(v4 + 304);
      v15 = *((_QWORD *)a2 + 7);
      v16 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8);
      if ( *(struct _VIDMM_LOCAL_ALLOC **)(v15 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
        || *v16 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56) )
      {
        __fastfail(3u);
      }
      *v16 = (struct _VIDMM_LOCAL_ALLOC *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = *(_QWORD *)a2;
      if ( (**(_DWORD **)(*(_QWORD *)a2 + 472LL) & 0x20000000) != 0
        && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v17 + 96)
        && (*(_BYTE *)(v17 + 84) & 4) == 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v17, a3, a4);
        v18[3] = 270LL;
        v18[4] = 26LL;
        v18[5] = a2;
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
      if ( v5 )
      {
        *((_BYTE *)a2 + 32) |= 4u;
        operator delete(a2);
      }
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3, a4);
    v9[3] = 270LL;
    v9[4] = 38LL;
    v9[5] = a2;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
}
