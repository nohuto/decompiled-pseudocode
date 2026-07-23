/*
 * XREFs of RtlCreateMemoryZone @ 0x1800011E0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180001010 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x1800F0FD4 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __cdecl RtlCreateMemoryZone(PVOID *MemoryZone, SIZE_T InitialSize, ULONG Flags)
{
  NTSTATUS result; // eax
  _QWORD *v5; // rdx
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  ULONG_PTR v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h] BYREF

  *MemoryZone = 0LL;
  if ( Flags || !InitialSize )
    return -1073741811;
  v8 = 0LL;
  v7 = (InitialSize + 4151) & 0xFFFFFFFFFFFFF000uLL;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, 0LL, &v7, 0x3000u, 4u);
  if ( result >= 0 )
  {
    v5 = v8;
    v8[4] = 0LL;
    v5[1] = v7;
    v5[2] = v5 + 7;
    v5[3] = (char *)v5 + v7;
    _InterlockedOr(v6, 0);
    v5[6] = v5;
    result = 0;
    *MemoryZone = v5;
  }
  return result;
}
