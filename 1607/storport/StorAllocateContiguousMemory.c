/*
 * XREFs of StorAllocateContiguousMemory @ 0x1C00587CC
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C000E9C0 (StorPortGetUncachedExtension.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000EECC (StorPortGetAdditionalCrashDumpArea.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C002FBD4 (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAllocateContiguousMemory(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  __int64 v11; // rcx
  void *ContiguousNodeMemory; // rax
  __int64 v13; // rdi
  __int64 result; // rax

  if ( a6 )
  {
    v11 = ~(a6 - 1) & (a2 + a6 - 1);
    a5 = (unsigned int)v11;
  }
  else
  {
    v11 = a2;
  }
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v11, a3, a4, a5, 4, a7);
  v13 = (__int64)ContiguousNodeMemory;
  if ( !ContiguousNodeMemory )
    return 3221225495LL;
  a8[1] = MmGetPhysicalAddress(ContiguousNodeMemory);
  result = 0LL;
  a8->QuadPart = v13;
  a8[2].LowPart = a2;
  return result;
}
