/*
 * XREFs of PspSetupReservedUserMappings @ 0x1404DF274
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x140159F80 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, struct _KTHREAD *a2, _QWORD *a3)
{
  int v5; // ebx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a3[25] + 8LL) & 0x60;
  if ( !v5 && !a3[31] )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0, (__int64)a2);
  if ( !v5 )
    goto LABEL_10;
  BaseAddress = (PVOID)4;
  if ( v5 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v5 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_10:
    v8 = 0LL;
    if ( a3[31] )
    {
      v9 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(v9 + a3[34]),
                          0LL,
                          (PSIZE_T)(v9 + a3[34] + 8),
                          0x2000u,
                          4u);
        if ( VirtualMemory < 0 )
          break;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < a3[31] );
    }
  }
  KiUnstackDetachProcess(a2, 0);
  return (unsigned int)VirtualMemory;
}
