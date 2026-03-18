/*
 * XREFs of DpiFdoDestroyChildDevices @ 0x1C01939E8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x1C00F6D44 (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0194D60 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoDestroyChildDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3120), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3224), Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)(v1 + 3112); i; i += 120LL )
  {
    if ( !*(_DWORD *)i )
      break;
    v3 = *(void **)(i + 104);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(i + 104) = 0LL;
    }
    *(_QWORD *)(i + 112) = 0LL;
  }
  v4 = *(void **)(v1 + 3112);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 3112) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)(v1 + 3224), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3120));
  KeLeaveCriticalRegion();
}
