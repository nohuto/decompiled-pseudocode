/*
 * XREFs of RaFreeRaidResources @ 0x1C0034B48
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 *     RaInitializeRaidResources @ 0x1C00100A0 (RaInitializeRaidResources.c)
 *     RaidAdapterReleaseResources @ 0x1C0053008 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeRaidResources(PSLIST_HEADER ListHead, __int64 a2, char a3)
{
  __int64 v3; // rdi
  PSLIST_ENTRY v6; // rax
  PSLIST_ENTRY v7; // rax
  __int64 v8; // rdi

  v3 = 0LL;
  if ( LODWORD(ListHead[4].Alignment) )
  {
    do
    {
      while ( 1 )
      {
        v7 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8 * v3));
        if ( !v7 )
          break;
        if ( a3 )
          MmFreeContiguousMemory(v7);
        else
          ExFreePoolWithTag(v7, 0x53526152u);
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < LODWORD(ListHead[4].Alignment) );
  }
  else if ( *((_DWORD *)&ListHead[4].HeaderX64 + 2) )
  {
    do
    {
      v6 = ExpInterlockedPopEntrySList(ListHead);
      if ( !v6 )
        break;
      if ( a3 )
        MmFreeContiguousMemory(v6);
      else
        ExFreePoolWithTag(v6, 0x53526152u);
      LODWORD(v3) = v3 + 1;
    }
    while ( (unsigned int)v3 < *((_DWORD *)&ListHead[4].HeaderX64 + 2) );
  }
  *((_DWORD *)&ListHead[4].HeaderX64 + 2) = 0;
  if ( LODWORD(ListHead[4].Alignment) )
  {
    v8 = 0LL;
    do
    {
      ExFreePoolWithTag(*(PVOID *)(ListHead->Alignment + 8 * v8), 0x53526152u);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < LODWORD(ListHead[4].Alignment) );
    ExFreePoolWithTag((PVOID)ListHead->Alignment, 0x53526152u);
    LODWORD(ListHead[4].Alignment) = 0;
  }
}
