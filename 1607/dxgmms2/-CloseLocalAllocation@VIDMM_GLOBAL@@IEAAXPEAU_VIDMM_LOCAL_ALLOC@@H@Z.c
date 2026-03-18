/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00523D4
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004B86C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rsi
  VIDMM_GLOBAL *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rdx
  struct _VIDMM_LOCAL_ALLOC **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax

  v4 = a3;
  v5 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = *((unsigned int *)a2 + 9);
  v7 = (VIDMM_GLOBAL *)**(unsigned int **)(v5 + 504);
  if ( ((unsigned __int8)v7 & 8) != 0 || (v8 = (_QWORD *)*((_QWORD *)a2 + 1), *v8 == PsGetCurrentProcess(v7)) )
  {
    if ( !v4 )
    {
      *(_DWORD *)(v5 + 84) |= 1u;
      ++*((_DWORD *)a2 + 18);
      ++*(_DWORD *)(v5 + 396);
    }
    if ( (*((_DWORD *)a2 + 9))-- == 1 )
    {
      if ( *((_DWORD *)a2 + 19) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v5 + 496, 0LL);
        if ( *(_DWORD *)(v5 + 344) < *((_DWORD *)a2 + 19) && g_IsInternalRelease )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16, v17);
          v19[5] = 0LL;
          v19[6] = 0LL;
          v19[7] = 0LL;
          v19[3] = 270LL;
          v19[4] = 9LL;
          WdLogEvent5_WdCriticalError(v19);
        }
        *(_DWORD *)(v5 + 344) -= *((_DWORD *)a2 + 19);
        ExReleasePushLockExclusiveEx(v5 + 496, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (*(_DWORD *)(v5 + 92) & 1) != 0 )
      {
        LOBYTE(a3) = v4 != 0;
        VIDMM_GLOBAL::UncommitLocalBackingStore(v7, a2, a3, a4);
        if ( (*(_DWORD *)(v5 + 92) & 2) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) + 312LL),
            -*(_QWORD *)(v5 + 8));
      }
      --*(_DWORD *)(v5 + 312);
      v11 = *((_QWORD *)a2 + 7);
      v12 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 8);
      if ( *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 8) != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56)
        || *v12 != (struct _VIDMM_LOCAL_ALLOC *)((char *)a2 + 56) )
      {
        __fastfail(3u);
      }
      *v12 = (struct _VIDMM_LOCAL_ALLOC *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = *(_QWORD *)a2;
      if ( (**(_DWORD **)(*(_QWORD *)a2 + 504LL) & 0x20000000) != 0
        && a2 == *(struct _VIDMM_LOCAL_ALLOC **)(v13 + 104)
        && (*(_BYTE *)(v13 + 84) & 4) == 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v13, a3, a4);
        v20[3] = 270LL;
        v20[4] = 26LL;
        v20[5] = a2;
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
      }
      if ( v4 )
      {
        *((_BYTE *)a2 + 32) |= 4u;
        operator delete(a2);
      }
    }
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v9, a3, a4);
    v18[3] = 270LL;
    v18[4] = 38LL;
    v18[5] = a2;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
}
