/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x1400257A0
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14025A124 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x14025A134 (VfUtilFreePoolDispatchLevel.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140739CA0 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140745CF4 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140745DD4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x14074BB7C (IovpSessionDataDereference.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  unsigned int v3; // edi

  if ( a2 > 1
    || (v2 = (unsigned __int16 *)((char *)&VfPoolDelayFreeData + 64 * (__int64)(int)a2),
        ++*((_DWORD *)v2 + 13),
        !*((_DWORD *)v2 + 12)) )
  {
    ExFreePoolWithTag(ListEntry, 0);
    return;
  }
  v3 = *v2;
  if ( v3 >= 0x200 )
  {
    ++*((_DWORD *)v2 + 14);
    ExFreePoolWithTag(ListEntry, 0);
LABEL_7:
    KeSetEvent((PRKEVENT)(v2 + 8), 1, 0);
    return;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
  if ( v3 >= 0x40 )
    goto LABEL_7;
}
