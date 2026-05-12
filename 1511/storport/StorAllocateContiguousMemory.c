/*
 * XREFs of StorAllocateContiguousMemory @ 0x1C00539AC
 * Callers:
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0009ED0 (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidDmaAllocateUncachedExtension @ 0x1C001273C (RaidDmaAllocateUncachedExtension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAllocateContiguousMemory(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        PHYSICAL_ADDRESS *a7)
{
  unsigned int v8; // r10d
  void *ContiguousNodeMemory; // rax
  __int64 v10; // rdi
  __int64 result; // rax

  if ( a5 )
  {
    v8 = ~(a5 - 1) & (a1 + a5 - 1);
    a4 = v8;
  }
  else
  {
    v8 = a1;
  }
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v8, a2, a3, a4, 4, a6);
  v10 = (__int64)ContiguousNodeMemory;
  if ( !ContiguousNodeMemory )
    return 3221225495LL;
  a7[1] = MmGetPhysicalAddress(ContiguousNodeMemory);
  result = 0LL;
  a7->QuadPart = v10;
  a7[2].LowPart = a1;
  return result;
}
