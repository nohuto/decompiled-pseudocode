/*
 * XREFs of MiSubsectionProtosCreated @ 0x1401EDAE0
 * Callers:
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 */

void __fastcall MiSubsectionProtosCreated(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v5; // al
  __int64 *v6; // rcx
  KIRQL v7; // r14
  __int64 *v8; // rbx
  int v9; // eax
  int v10; // eax

  v2 = *a1;
  KeAbPostRelease((ULONG_PTR)a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  v6 = (__int64 *)a1[3];
  v7 = v5;
  a1[3] = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = (__int64 *)*v6;
      if ( v6 != (__int64 *)a2 )
      {
        v9 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 3) = 1;
        if ( (v9 & 8) == 0 )
        {
          v10 = 1;
          if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
            v10 = 2;
          *((_DWORD *)v6 + 3) = v10;
          KeSignalGate((__int64)(v6 + 2), 1u);
        }
      }
      v6 = v8;
    }
    while ( v8 );
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), v7);
}
