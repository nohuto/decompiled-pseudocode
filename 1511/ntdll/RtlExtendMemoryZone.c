/*
 * XREFs of RtlExtendMemoryZone @ 0x1800DA390
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x1800DA320 (RtlExtendMemoryBlockLookaside.c)
 *     RtlpRegisterStackTrace @ 0x1800F2078 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1800A7090 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int VirtualMemory; // edi
  signed __int32 v8[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h]

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  v8[10] = 4;
  v9 = (unsigned __int64)(a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8[8] = 12288;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) && (VirtualMemory = NtLockVirtualMemory(), VirtualMemory < 0) )
    {
      ZwFreeVirtualMemory();
    }
    else
    {
      MEMORY[8] = v9;
      MEMORY[0x10] = 32LL;
      MEMORY[0x18] = v9;
      MEMORY[0] = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v8, 0);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return (unsigned int)VirtualMemory;
}
