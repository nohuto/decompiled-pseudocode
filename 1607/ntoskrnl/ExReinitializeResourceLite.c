/*
 * XREFs of ExReinitializeResourceLite @ 0x14010C490
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpOwnerEntryToThread @ 0x14010CA8C (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140227F84 (PerfLogExecutiveResourceInitialize.c)
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
  unsigned int v10; // r14d
  ULONG *p_TableSize; // r15
  struct _KTHREAD *v12; // rax
  volatile signed __int32 *p_Lock; // r12
  _QWORD *v14; // rax

  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v10 = 1;
    if ( TableSize > 1 )
    {
      p_TableSize = &OwnerTable->TableSize;
      do
      {
        p_TableSize += 4;
        v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        p_Lock = &v12->Header.Lock;
        if ( v12 )
        {
          ++v3;
          if ( ExpResourceEnforceOwnerTransfer && (*p_TableSize & 2) == 0 && v12 != KeGetCurrentThread() )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 3uLL);
          if ( (*p_TableSize & 1) != 0 )
            PsBoostThreadIoEx((__int64)v12, 1, 0, 0LL);
          if ( (*p_TableSize & 4) != 0 )
            _InterlockedDecrement(p_Lock + 447);
          if ( (*p_TableSize & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag((PVOID)p_Lock, 0x746C6644u);
        }
        ++v10;
      }
      while ( v10 < TableSize );
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
    goto LABEL_16;
  }
  if ( v7 )
  {
    if ( ExpResourceEnforceOwnerTransfer && (*(_BYTE *)&v6 & 2) == 0 && (struct _KTHREAD *)v7 != KeGetCurrentThread() )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v7, 4uLL);
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(v7, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 1788));
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  }
LABEL_16:
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
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource->ContentionCount = 0LL;
  Resource->NumberOfExclusiveWaiters = 0;
  __incgsdword(0x639Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
