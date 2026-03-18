/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00A2E70
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C000CD7C (--_GDXGPROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001E130 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0091F24 (-DdiDestroyProcess@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  char *v3; // rdi
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rbx
  void *v9; // rdx

  v3 = (char *)this + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 200LL);
  v6 = v5;
  v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v5);
  if ( (*(_DWORD *)(v7 + 24))-- == 1 )
  {
    v9 = *(void **)(v7 + 16);
    if ( v9 )
      ADAPTER_RENDER::DdiDestroyProcess(a2, v9, v5);
    if ( *(_DWORD *)(v7 + 28) )
      ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(a2);
    DXGPROCESS_ADAPTER_INFO::`scalar deleting destructor'((DXGPROCESS_ADAPTER_INFO *)v7);
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v6) = 0LL;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
