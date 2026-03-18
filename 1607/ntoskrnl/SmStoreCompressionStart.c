/*
 * XREFs of SmStoreCompressionStart @ 0x14054BD68
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14054BAF8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400C75D8 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4E50 (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x1403E3434 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 v1; // rax
  __int64 v2; // rbx
  _KPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process;
  v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_1403BF150, &v4, 0, 0);
  v2 = v1;
  if ( v1 || dword_1403BF178 != -1 )
  {
    LODWORD(v1) = MmStoreFlushOutstandingEvictions();
    if ( v2 )
    {
      LODWORD(v1) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v5);
      if ( (int)v1 >= 0 )
        LODWORD(v1) = SmSwapStore(0);
    }
  }
  return v1;
}
