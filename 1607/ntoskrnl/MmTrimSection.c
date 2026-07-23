/*
 * XREFs of MmTrimSection @ 0x14008EBB0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14008EAC4 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiComputeFlushRange @ 0x1400213D4 (MiComputeFlushRange.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rdi
  unsigned int v7; // ebp
  KIRQL v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v4 = (a4 & 1) << 18;
  if ( a2 )
  {
    v16 = *a2;
    a2 = &v20;
    v20 = v16;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (__int64)a2, a3, (__int64)v17) )
    return 0LL;
  v5 = MiTrimSection(v17, 0LL, v4);
  v6 = v17[0];
  v7 = v5;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17[0] + 72LL));
  v9 = MiDecrementSubsections(v18, v18, 0);
  v10 = MiDecrementSubsections(v19, v19, 0);
  --*(_QWORD *)(v6 + 40);
  LOBYTE(v11) = v8;
  v12 = v10 + v9;
  MiCheckControlArea(v6, v11, v13, v14);
  if ( v12 )
    MiReturnSubsectionCharges(v12);
  return v7;
}
