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

NTSTATUS __cdecl RtlUnlockModuleSection(PVOID Address)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  NTSTATUS v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  RtlAcquireSRWLockExclusive(&RtlpLockedSectionListLock);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(Address);
  v3 = 0;
  v4 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    if ( (*(_DWORD *)(ModuleSectionInLockedSectionList + 32))-- == 1 )
    {
      v6 = *(_QWORD *)ModuleSectionInLockedSectionList;
      v7 = *(_QWORD **)(ModuleSectionInLockedSectionList + 8);
      if ( *(_QWORD *)(v6 + 8) != v4 || *v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 16), (PSIZE_T)(v4 + 24), 1u);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  return v3;
}
