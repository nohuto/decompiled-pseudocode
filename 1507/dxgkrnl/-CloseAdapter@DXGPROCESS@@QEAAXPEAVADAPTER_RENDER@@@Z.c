/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00858C4
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001A528 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0121054 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  char *v3; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  void *v8; // rdx
  void *v9; // rcx

  v3 = (char *)this + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 184LL);
  v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5);
  if ( (*(_DWORD *)(v6 + 24))-- == 1 )
  {
    v8 = *(void **)(v6 + 16);
    if ( v8 )
      ADAPTER_RENDER::DdiDestroyProcess(a2, v8);
    if ( *(_DWORD *)(v6 + 28) )
      ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2);
    v9 = *(void **)(v6 + 8);
    if ( v9 != (void *)v6 )
      operator delete(v9);
    operator delete((void *)v6);
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5) = 0LL;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
