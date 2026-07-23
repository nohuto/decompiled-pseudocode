/*
 * XREFs of RtlLockModuleSection @ 0x180002040
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x180001D8C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001E1C (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x1800021E8 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x180003D80 (LdrEnumerateLoadedModules.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  _QWORD *v3; // rbx
  _QWORD *Heap; // rax
  int v5; // edi
  _UNKNOWN ***v6; // rax
  PVOID Context; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v3 = (_QWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      Context = Address;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, (PLDR_ENUM_CALLBACK)RtlpModuleEnumeratorCallback, &Context);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          v3[2] = v10;
          v3[3] = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = (_UNKNOWN ***)off_1801422A8;
          *v3 = &RtlpLockedSectionList;
          v3[1] = v6;
          if ( *v6 != &RtlpLockedSectionList )
            __fastfail(3u);
          *v6 = (_UNKNOWN **)v3;
          off_1801422A8 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
