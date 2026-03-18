/*
 * XREFs of MiFreeOverlappedFlushEntry @ 0x1401DA230
 * Callers:
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 *v9; // rcx

  v2 = (struct _KEVENT *)P[4];
  v3 = **P;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v5 = MiDecrementSubsections((__int64)*P, (__int64)*P, 0);
  v6 = MiDecrementSubsections((__int64)P[1], (__int64)P[1], 0);
  --*(_QWORD *)(v3 + 40);
  LOBYTE(v7) = v4;
  v8 = v6 + v5;
  MiCheckControlArea(v3, v7);
  if ( v8 )
    MiReturnSubsectionCharges(v8);
  v9 = P[5];
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *(_DWORD *)P[3] = *((_DWORD *)P + 5);
  if ( *((int *)P + 5) < 0 )
    P[3][1] = 0LL;
  ExFreePoolWithTag(P, 0);
  return KeSetEvent(v2, 0, 0);
}
