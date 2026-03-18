/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C002F508
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0003B98 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct _VIDMM_LOCAL_ALLOC **v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v3 = *(_QWORD *)a2;
  if ( (**(_DWORD **)(*(_QWORD *)a2 + 472LL) & 8) != 0 || VIDMM_PROCESS::IsCurrentProcess(*((VIDMM_PROCESS **)a2 + 1)) )
  {
    if ( !a3 )
    {
      *(_DWORD *)(v3 + 84) |= 1u;
      ++*((_DWORD *)a2 + 18);
      ++*(_DWORD *)(v3 + 380);
    }
    if ( (*((_DWORD *)a2 + 9))-- == 1 )
    {
      v9 = **(unsigned int **)(v3 + 472);
      if ( (v9 & 0x20000000) != 0 )
      {
        if ( a3 )
        {
          v10 = *((_QWORD *)a2 + 2);
          if ( v10 )
          {
            CurrentProcess = PsGetCurrentProcess();
            MmUnmapViewOfSection(CurrentProcess, v10);
          }
        }
        if ( *((_QWORD *)a2 + 13) )
        {
          v12 = WdLogNewEntry5_WdEvent(v9, a2);
          *(_QWORD *)(v12 + 24) = *((_QWORD *)a2 + 13);
          *(_QWORD *)(v12 + 32) = PsGetCurrentProcess();
          WdLogEvent5_WdEvent(v12);
          ObCloseHandle(*((HANDLE *)a2 + 13), (*((_QWORD *)a2 + 13) & 0xFFFFFFFF80000000uLL) == 0);
          *((_QWORD *)a2 + 13) = 0LL;
        }
      }
      else if ( (v9 & 8) == 0 )
      {
        if ( (v9 & 0x10) != 0 || (v9 & 0x20) != 0 )
        {
          *((_QWORD *)a2 + 2) = 0LL;
        }
        else if ( *((_QWORD *)a2 + 3) && a3 )
        {
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 24LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
            a2);
          *((_QWORD *)a2 + 3) = 0LL;
        }
      }
      --*(_DWORD *)(v3 + 304);
      v13 = *((_QWORD *)a2 + 7);
      v14 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8);
      if ( *(struct _VIDMM_LOCAL_ALLOC **)(v13 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
        || *v14 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56) )
      {
        __fastfail(3u);
      }
      *v14 = (struct _VIDMM_LOCAL_ALLOC *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(_QWORD *)a2;
      if ( (**(_DWORD **)(*(_QWORD *)a2 + 472LL) & 0x20000000) != 0
        && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v15 + 96)
        && (*(_BYTE *)(v15 + 84) & 4) == 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v15);
        v16[3] = 270LL;
        v16[4] = 26LL;
        v16[5] = a2;
        v16[6] = 0LL;
        v16[7] = 0LL;
        WdLogEvent5_WdCriticalError(v16);
      }
      if ( a3 )
      {
        *((_BYTE *)a2 + 32) |= 4u;
        operator delete(a2);
      }
    }
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2);
    v7[3] = 270LL;
    v7[4] = 38LL;
    v7[5] = a2;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
}
