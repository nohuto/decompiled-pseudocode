/*
 * XREFs of MiFlushRelease @ 0x1400A5E74
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140022774 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F5310 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  KIRQL v8; // bp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v11 = MiDecrementSubsections(a2, a2, 0);
    v6 = MiDecrementSubsections(a3, a3, 0) + v11;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v7) = v8;
  result = MiCheckControlArea(a1, v7, v9, v10);
  if ( v6 )
    return MiReturnSubsectionCharges(v6);
  return result;
}
