/*
 * XREFs of SepInitSingletonEntry @ 0x140006DD0
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x140008104 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber();
  v4 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v5 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 1) = a2;
    ExReleaseSpinLockExclusive(v4, v5);
  }
}
