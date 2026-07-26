/*
 * XREFs of PplGenericAllocateFunction @ 0x1C0006C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall PplGenericAllocateFunction(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  unsigned __int64 Alignment; // rbx
  PSLIST_ENTRY result; // rax

  Alignment = Lookaside[1].L.ListHead.Alignment;
  ++*(_DWORD *)(Alignment + 20);
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)Alignment);
  if ( !result )
  {
    ++*(_DWORD *)(Alignment + 24);
    return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(Alignment + 48))(
                           *(unsigned int *)(Alignment + 36),
                           *(unsigned int *)(Alignment + 44),
                           *(unsigned int *)(Alignment + 40),
                           Alignment);
  }
  return result;
}
