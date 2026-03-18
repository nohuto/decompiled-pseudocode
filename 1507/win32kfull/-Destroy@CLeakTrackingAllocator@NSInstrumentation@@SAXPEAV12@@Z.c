/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0130CBC
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C0130B60 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01318B8 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02D3564 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@CBackTraceStoreEx@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02D439C (-Destroy@CBackTraceStoreEx@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *a1)
{
  _QWORD *v1; // rbx
  struct NSInstrumentation::CPointerHashTable *v2; // rcx
  struct NSInstrumentation::CBackTraceStoreEx *v3; // rcx

  v1 = gpLeakTrackingAllocator;
  if ( *((_BYTE *)gpLeakTrackingAllocator + 72) )
  {
    v2 = (struct NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    if ( v2 )
      NSInstrumentation::CPointerHashTable::Destroy(v2);
    if ( v1[7] )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy();
    v3 = (struct NSInstrumentation::CBackTraceStoreEx *)v1[8];
    if ( v3 )
      NSInstrumentation::CBackTraceStoreEx::Destroy(v3);
    ExFreePoolWithTag(v1, 0);
  }
}
