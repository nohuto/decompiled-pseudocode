/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x140002138
 * Callers:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140002128 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x14020ABC0 (VfUtilFreePoolDispatchLevel.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1406B966C (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x1406BD3E4 (ViFreeMapRegisterFile.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1406C4440 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1406C4510 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1406C8F7C (IovpSessionDataDereference.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
