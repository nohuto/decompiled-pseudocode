/*
 * XREFs of MiProcessingPageExtendComplete @ 0x1401DEE34
 * Callers:
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

KIRQL __fastcall MiProcessingPageExtendComplete(__int64 a1, struct _KEVENT *a2, __int64 a3)
{
  bool v3; // zf
  volatile LONG *v5; // rcx
  KIRQL v7; // di

  v3 = (*(_BYTE *)(a1 + 79) & 4) == 0;
  v5 = (volatile LONG *)(a3 + 1664);
  if ( v3 )
  {
    v7 = ExAcquireSpinLockExclusive(v5);
    if ( *(_QWORD *)(a1 + 80) )
    {
      a2[1].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 40);
      KeSetEvent(a2 + 2, 0, 0);
    }
  }
  else
  {
    _InterlockedExchange(&a2[3].Header.Lock, 0);
    return ExAcquireSpinLockExclusive(v5);
  }
  return v7;
}
