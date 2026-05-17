/*
 * XREFs of RtlLockModuleSection @ 0x180001DA0
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x180001AEC (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001B7C (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180001F48 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrEnumerateLoadedModules @ 0x18007A560 (LdrEnumerateLoadedModules.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  _QWORD *v3; // rbx
  _QWORD *Heap; // rax
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v3 = (_QWORD *)ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v5 = 0;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 40LL);
    v3 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      v8 = a1;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v8);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          v3[2] = v10;
          v3[3] = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_18014C628[0];
          if ( *(_UNKNOWN ***)off_18014C628[0] != &RtlpLockedSectionList )
            __fastfail(3u);
          *v3 = &RtlpLockedSectionList;
          v3[1] = v6;
          *v6 = v3;
          off_18014C628[0] = v3;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  return (unsigned int)v5;
}
