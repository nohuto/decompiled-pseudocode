/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400F6734
 * Callers:
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
    {
      return 1;
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
    }
    else
    {
      _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
    }
  }
  return v1;
}
