/*
 * XREFs of MiRemoveSecureEntry @ 0x140013F10
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404B47AC (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v3; // ebx
  int v4; // r15d
  _KPROCESS *Process; // rsi
  LONG *p_Blink; // rbp
  KIRQL v9; // al
  __int64 *i; // rdx

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v3 = 0;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) == 2 )
    p_Blink = &dword_140327CC0;
  else
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  v9 = ExAcquireSpinLockExclusive(p_Blink);
  p_Blink[1] = 0;
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 2) == 2 && v3 <= 1 )
      ++v3;
    if ( i == BugCheckParameter3 )
    {
      v4 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v3 > 1 && v4 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[2] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[2], BugCheckParameter3[3]);
  if ( v3 == 1 )
    *(_DWORD *)(BugCheckParameter2 + 48) &= ~0x4000u;
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
