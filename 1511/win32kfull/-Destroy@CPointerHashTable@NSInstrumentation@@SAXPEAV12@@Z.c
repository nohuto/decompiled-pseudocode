/*
 * XREFs of ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0112228
 * Callers:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C010641C (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C0106A84 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01121F4 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02D4B74 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::Destroy(struct NSInstrumentation::CPointerHashTable *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a1, 0);
}
