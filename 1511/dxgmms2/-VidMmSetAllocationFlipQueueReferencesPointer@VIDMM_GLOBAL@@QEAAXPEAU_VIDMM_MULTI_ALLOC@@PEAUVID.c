/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C007D618
 * Callers:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C001C5D0 (-VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001C28C (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = **(_QWORD **)a2;
  v5 = *(_QWORD *)(v4 + 472);
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v4 + 312));
  VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(VIDMM_FLIP_QUEUE_REFERENCES **)(v5 + 16));
  *(_QWORD *)(v5 + 16) = a3;
  _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v4 + 312), v6, v7, v8);
}
