/*
 * XREFs of ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C0091F20
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091D60 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DXGTERMINATIONTRACKER *__fastcall ADAPTER_RENDER::PopDeferredTracker(ADAPTER_RENDER *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx

  v2 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 848, 0LL);
  *((_QWORD *)this + 107) = KeGetCurrentThread();
  v3 = (_QWORD *)*((_QWORD *)this + 105);
  if ( v3 )
  {
    v2 = v3 - 7;
    *((_QWORD *)this + 105) = *v3;
  }
  else
  {
    *((_BYTE *)this + 896) = 0;
  }
  *((_QWORD *)this + 107) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 848, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGTERMINATIONTRACKER *)v2;
}
