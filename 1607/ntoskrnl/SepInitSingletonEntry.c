/*
 * XREFs of SepInitSingletonEntry @ 0x14007CEA4
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CEE4 (SepGetSingletonEntryFromIndexNumber.c)
 */

void __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v4 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v5 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 1) = a2;
    ExReleaseSpinLockExclusive(v4, v5);
  }
}
