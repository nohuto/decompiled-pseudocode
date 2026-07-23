/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x1401EAC74
 * Callers:
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 * Callees:
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFreeOverlappedFlushEntry(__int64 **P)
{
  struct _KEVENT *v2; // r14
  __int64 v3; // rdi
  KIRQL v4; // bl
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx

  v2 = (struct _KEVENT *)P[4];
  v3 = **P;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v5 = MiDecrementSubsections((__int64)*P, (__int64)*P, 0);
  v6 = MiDecrementSubsections((__int64)P[1], (__int64)P[1], 0);
  --*(_QWORD *)(v3 + 40);
  LOBYTE(v7) = v4;
  v8 = v6 + v5;
  MiCheckControlArea(v3, v7, v9, v10);
  if ( v8 )
    MiReturnSubsectionCharges(v8);
  v11 = P[5];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v2, 0, 0);
}
