/*
 * XREFs of ?PlatformAllocate@NSInstrumentation@@YAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C00D52D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall NSInstrumentation::PlatformAllocate(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
