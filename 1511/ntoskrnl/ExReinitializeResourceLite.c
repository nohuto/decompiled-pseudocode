/*
 * XREFs of ExReinitializeResourceLite @ 0x1400D9F40
 * Callers:
 *     VerifierExReinitializeResourceLite @ 0x1406C0400 (VerifierExReinitializeResourceLite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpOwnerEntryToThread @ 0x1400DA08C (ExpOwnerEntryToThread.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14021034C (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rdi
  unsigned int v3; // ebp
  unsigned int TableSize; // esi
  ERESOURCE_THREAD OwnerThread; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // eax
  ERESOURCE_THREAD v7; // rdi
  char *ExclusiveWaiters; // rax
  NTSTATUS result; // eax
  ULONG *p_TableSize; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  void *v13; // r12
  _QWORD *v14; // rax

  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    if ( TableSize > 1 )
    {
      p_TableSize = &OwnerTable->TableSize;
      v11 = TableSize - 1;
      do
      {
        p_TableSize += 4;
        v12 = ExpOwnerEntryToThread(p_TableSize - 2);
        v13 = (void *)v12;
        if ( v12 )
        {
          ++v3;
          if ( (*p_TableSize & 1) != 0 )
            PsBoostThreadIoEx(v12, 1, 0, 0LL);
          if ( (*p_TableSize & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
        }
        --v11;
      }
      while ( v11 );
    }
    memset(&OwnerTable[1], 0, 16LL * (OwnerTable->TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v3;
  }
  v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  v7 = Resource->OwnerEntry.OwnerThread;
  if ( (*(_BYTE *)&v6 & 2) != 0 )
  {
    v7 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v7 & 3) != 0 )
  {
    goto LABEL_13;
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)&v6 & 1) != 0 )
      PsBoostThreadIoEx(v7, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  }
LABEL_13:
  ExclusiveWaiters = (char *)Resource->ExclusiveWaiters;
  *(_DWORD *)&Resource->ActiveCount = 0;
  Resource->ActiveEntries = 0;
  Resource->SharedWaiters = 0LL;
  if ( ExclusiveWaiters )
  {
    *(_WORD *)ExclusiveWaiters = 1;
    ExclusiveWaiters[2] = 6;
    *((_DWORD *)ExclusiveWaiters + 1) = 0;
    v14 = ExclusiveWaiters + 8;
    v14[1] = v14;
    *v14 = v14;
  }
  result = 0;
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  Resource->NumberOfExclusiveWaiters = 0;
  *(_QWORD *)&Resource->ContentionCount = 0LL;
  __incgsdword(0x631Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
    return 0;
  }
  return result;
}
