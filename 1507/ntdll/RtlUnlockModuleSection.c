/*
 * XREFs of RtlUnlockModuleSection @ 0x1800757D0
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x18007541C (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800755A0 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800755E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180075670 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180075878 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     ZwUnlockVirtualMemory @ 0x1800953E0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock, a2, a3, a4);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v6 = 0;
  v7 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v9 = *(_QWORD *)ModuleSectionInLockedSectionList;
      v10 = *(_QWORD **)(ModuleSectionInLockedSectionList + 8);
      if ( *(_QWORD *)(v9 + 8) != v7 || *v10 != v7 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v6 = ZwUnlockVirtualMemory(-1LL, v7 + 16, v7 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    v6 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v6;
}
