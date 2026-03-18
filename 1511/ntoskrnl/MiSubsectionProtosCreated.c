/*
 * XREFs of MiSubsectionProtosCreated @ 0x1401E3B64
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 */

void __fastcall MiSubsectionProtosCreated(__int64 *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rsi
  __int64 v5; // r8
  _QWORD *v6; // rbx

  v1 = *a1;
  KeAbPostRelease((ULONG_PTR)a1);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72));
  v4 = (_QWORD *)a1[3];
  a1[3] = 0LL;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v3);
  if ( v4 == (_QWORD *)1 )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      KeSignalGate((__int64)(v4 + 1), 1LL, v5);
      v4 = v6;
    }
    while ( v6 );
  }
}
