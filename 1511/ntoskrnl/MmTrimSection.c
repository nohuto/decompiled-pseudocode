/*
 * XREFs of MmTrimSection @ 0x1400E8FF0
 * Callers:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E8F04 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiComputeFlushRange @ 0x14000C66C (MiComputeFlushRange.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  KIRQL v9; // bl
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = (a4 & 1) << 19;
  if ( a2 )
  {
    v5 = *a2;
    a2 = &v18;
    v18 = v5;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (__int64)a2, a3, (__int64)v15) )
    return 0LL;
  v6 = MiTrimSection(v15, 0, v4);
  v7 = v15[0];
  v8 = v6;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v15[0] + 72LL));
  v10 = MiDecrementSubsections(v16, v16, 0);
  v11 = MiDecrementSubsections(v17, v17, 0);
  --*(_QWORD *)(v7 + 40);
  LOBYTE(v12) = v9;
  v13 = v11 + v10;
  MiCheckControlArea(v7, v12);
  if ( v13 )
    MiReturnSubsectionCharges(v13);
  return v8;
}
