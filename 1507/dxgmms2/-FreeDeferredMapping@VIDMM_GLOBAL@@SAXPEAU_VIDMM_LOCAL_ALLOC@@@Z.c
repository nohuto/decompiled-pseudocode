/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004DA60
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C000E650 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00040C0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0032600 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2)
{
  _QWORD *v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *((_DWORD *)a1 + 9) || *(_DWORD *)(*(_QWORD *)a1 + 304LL) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v3[3] = 270LL;
    v3[4] = 7LL;
    v3[5] = a1;
    v3[6] = 0LL;
    v3[7] = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v4 = **(_DWORD **)(*(_QWORD *)a1 + 472LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 380LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v4 & 0x4000000) != 0 )
    {
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 360LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 352LL), v5, v6);
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 472LL));
    *(_DWORD *)(*(_QWORD *)a1 + 76LL) |= 0x100000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (v4 & 0x20000000) != 0 )
    {
      MmUnmapViewOfSection(**((_QWORD **)a1 + 1), *((_QWORD *)a1 + 2));
    }
    else if ( (v4 & 0x38) == 0 )
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
