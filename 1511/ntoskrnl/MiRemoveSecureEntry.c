/*
 * XREFs of MiRemoveSecureEntry @ 0x1400383F0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404ABF3C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(__int64 a1, __int64 *a2)
{
  __int64 **v2; // rsi
  unsigned int v4; // ebx
  int v6; // r14d
  _KPROCESS *Process; // rbp
  KIRQL v8; // al
  __int64 *i; // r8

  v2 = (__int64 **)(a1 + 56);
  v4 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 2 && v4 <= 1 )
      ++v4;
    if ( i == a2 )
    {
      v6 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v4 > 1 && v6 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v8);
  if ( (a2[2] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(a1, a2[2], a2[3]);
  if ( v4 == 1 )
    *(_DWORD *)(a1 + 48) &= ~0x4000u;
  ExFreePoolWithTag(a2, 0);
}
