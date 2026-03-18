/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x140245DE4
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x140246140 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // di
  char v6; // dl
  void *v7; // rcx
  __int64 v8; // rdi
  unsigned __int8 v9; // di
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)a1);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a1);
  }
  *(_BYTE *)(a1 + 8) = CurrentIrql;
  v6 = *(_BYTE *)(a1 + 128);
  v7 = *(void **)(a1 + 144);
  v8 = *(_QWORD *)(a1 + 160);
  BaseAddress = v7;
  if ( v6 )
  {
    if ( (unsigned __int64)(v8 + a2) > *(_QWORD *)(a1 + 168) )
      goto LABEL_13;
  }
  else if ( v8 + a2 > (unsigned __int64)v7 )
  {
    RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned __int64)v7 + RegionSize >= *(_QWORD *)(a1 + 152)
      || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
  }
  ++*(_DWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 160) = v8 + a2;
  v4 = v8;
LABEL_13:
  v9 = *(_BYTE *)(a1 + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)a1, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  __writecr8(v9);
  return v4;
}
