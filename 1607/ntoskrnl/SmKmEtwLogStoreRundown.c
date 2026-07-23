/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x14056F6D8
 * Callers:
 *     SmEtwEnableCallback @ 0x14056F684 (SmEtwEnableCallback.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     SmKmEtwLogStoreChange @ 0x140697CA4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140697DD0 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a2, i);
    v6 = v5;
    if ( v5 )
    {
      SmKmEtwLogStoreStats(a1, v5);
      SmKmEtwLogStoreChange(a1, v6, &SmEventStoreRundown);
      SmKmStoreDereference(a2, i);
    }
  }
}
