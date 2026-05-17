/*
 * XREFs of RtlExtendMemoryZone @ 0x1800D1E70
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x1800D1E00 (RtlExtendMemoryBlockLookaside.c)
 *     RtlpRegisterStackTrace @ 0x1800F0120 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1800948C0 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int VirtualMemory; // edi
  signed __int32 v8[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h]

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2, a3, a4);
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
