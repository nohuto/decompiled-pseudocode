/*
 * XREFs of MiFlushRelease @ 0x140098554
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  KIRQL v8; // bp
  __int64 v9; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v9 = MiDecrementSubsections(a2, a2, 0LL);
    v6 = MiDecrementSubsections(a3, a3, 0LL) + v9;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v7) = v8;
  result = MiCheckControlArea(a1, v7);
  if ( v6 )
    return MiReturnSubsectionCharges(v6);
  return result;
}
