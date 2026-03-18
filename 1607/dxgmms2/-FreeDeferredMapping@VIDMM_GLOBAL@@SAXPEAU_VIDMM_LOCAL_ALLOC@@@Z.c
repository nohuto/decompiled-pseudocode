/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00892E0
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C001D540 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0010524 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C00670F8 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

  if ( *((_DWORD *)a1 + 9) || *(_DWORD *)(*(_QWORD *)a1 + 312LL) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
    v5[3] = 270LL;
    v5[4] = 7LL;
    v5[5] = a1;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  v6 = *(_QWORD *)a1;
  v7 = **(_DWORD **)(*(_QWORD *)a1 + 504LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 396LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v7 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 376LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 368LL), v8, v9);
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 504LL));
    *(_DWORD *)(*(_QWORD *)a1 + 76LL) |= 0x200000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (v7 & 0x20000000) != 0 )
    {
      MmUnmapViewOfSection(**((_QWORD **)a1 + 1), *((_QWORD *)a1 + 2));
    }
    else if ( (v7 & 0x38) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 24LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
        a1);
      *((_QWORD *)a1 + 3) = 0LL;
      *((_QWORD *)a1 + 2) = 0LL;
    }
    *((_BYTE *)a1 + 32) |= 4u;
    operator delete(a1);
  }
}
