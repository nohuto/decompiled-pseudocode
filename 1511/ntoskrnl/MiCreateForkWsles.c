/*
 * XREFs of MiCreateForkWsles @ 0x14009A6E4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCreateForkWsle @ 0x14009A798 (MiCreateForkWsle.c)
 */

__int64 MiCreateForkWsles()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rsi
  __int64 v2; // rax
  volatile LONG *v3; // rbp
  int v4; // edx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8

  v0 = 0xFFFFF68000000000uLL;
  v1 = 0xFFFFF6BFFFFFFFF8uLL;
  v2 = 3LL;
  v3 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = ExAcquireSpinLockExclusive(v3);
  v5 = v4;
  MiCreateForkWsle((_DWORD)v3, v4, v0, v1, 3);
  LOBYTE(v6) = v5;
  return MiUnlockWorkingSetExclusive((__int64)v3, v6, v7);
}
