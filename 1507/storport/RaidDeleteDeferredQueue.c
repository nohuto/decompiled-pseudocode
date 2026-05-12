/*
 * XREFs of RaidDeleteDeferredQueue @ 0x1C0025E00
 * Callers:
 *     RaidAdapterInitializeWmi @ 0x1C0010670 (RaidAdapterInitializeWmi.c)
 *     RaidDeleteAdapter @ 0x1C0023B14 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidDeleteDeferredQueue(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY result; // rax

  v1 = a1 + 5;
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v1);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0x66446152u);
  }
  return result;
}
