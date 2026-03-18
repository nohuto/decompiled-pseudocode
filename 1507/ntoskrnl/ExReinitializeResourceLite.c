/*
 * XREFs of ExReinitializeResourceLite @ 0x140113E08
 * Callers:
 *     VerifierExReinitializeResourceLite @ 0x140741BF4 (VerifierExReinitializeResourceLite.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14025F6BC (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rbp
  unsigned int v3; // r15d
  unsigned int TableSize; // esi
  ERESOURCE_THREAD v5; // rax
  void *v6; // rdi
  char *ExclusiveWaiters; // rax
  POWNER_ENTRY v9; // r14
  __int64 v10; // r12
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v11; // edx
  void *OwnerThread; // rdi
  _QWORD *v13; // rax

  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v9 = Resource->OwnerTable;
    if ( TableSize > 1 )
    {
      v10 = TableSize - 1;
      do
      {
        ++v9;
        v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v9->TableSize;
        if ( (*(_BYTE *)&v11 & 2) != 0 )
        {
          OwnerThread = (void *)(v9->OwnerThread & 0xFFFFFFFFFFFFFFFCuLL);
        }
        else
        {
          OwnerThread = 0LL;
          if ( (v9->OwnerThread & 3) == 0 )
            OwnerThread = (void *)v9->OwnerThread;
        }
        if ( OwnerThread )
        {
          ++v3;
          if ( (*(_BYTE *)&v11 & 1) != 0 )
            PsBoostThreadIoEx((__int64)OwnerThread, 1, 0, 0LL);
          if ( (v9->TableSize & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(OwnerThread, 0x746C6644u);
        }
        --v10;
      }
      while ( v10 );
    }
    memset(&OwnerTable[1], 0, 16LL * (OwnerTable->TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  v5 = Resource->OwnerEntry.OwnerThread;
  if ( v5 )
  {
    ++TableSize;
    if ( (v5 & 3) == 0 )
      ++v3;
  }
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    v6 = (void *)(Resource->OwnerEntry.OwnerThread & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    v6 = 0LL;
    if ( (Resource->OwnerEntry.OwnerThread & 3) == 0 )
      v6 = (void *)Resource->OwnerEntry.OwnerThread;
  }
  if ( v6 )
  {
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx((__int64)v6, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag(v6, 0x746C6644u);
  }
  ExclusiveWaiters = (char *)Resource->ExclusiveWaiters;
  *(_DWORD *)&Resource->ActiveCount = 0;
  Resource->ActiveEntries = 0;
  Resource->SharedWaiters = 0LL;
  if ( ExclusiveWaiters )
  {
    *(_WORD *)ExclusiveWaiters = 1;
    ExclusiveWaiters[2] = 6;
    *((_DWORD *)ExclusiveWaiters + 1) = 0;
    v13 = ExclusiveWaiters + 8;
    v13[1] = v13;
    *v13 = v13;
  }
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource->ContentionCount = 0LL;
  Resource->NumberOfExclusiveWaiters = 0;
  __incgsdword(0x631Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
