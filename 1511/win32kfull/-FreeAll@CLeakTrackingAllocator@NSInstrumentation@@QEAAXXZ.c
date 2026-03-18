/*
 * XREFs of ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02D4AD0
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C01062C0 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D4A1C (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D4FC4 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeAll(NSInstrumentation::CLeakTrackingAllocator *this)
{
  _QWORD *v1; // rbx
  NSInstrumentation::CPointerHashTable *v2; // rcx
  __int64 v3; // rcx

  v1 = gpLeakTrackingAllocator;
  v2 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v2,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      gpLeakTrackingAllocator);
  v3 = v1[7];
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v3,
      (void (__fastcall *)(__int64, _QWORD, __int64))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      (__int64)v1);
}
