/*
 * XREFs of ExpLookupHandleTableEntry @ 0x14040BF60
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140424D60 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     ObpReferenceObjectByHandle @ 0x140436BA0 (ObpReferenceObjectByHandle.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     RtlQueryAtomInAtomTable @ 0x14045FFD0 (RtlQueryAtomInAtomTable.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x140480FB0 (ExpGetNextHandleTableEntry.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14066CAC8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
  {
    v4 = *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1);
    return v4 + 4 * (v2 & 0x3FF);
  }
  if ( (v3 & 3) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF));
    return v4 + 4 * (v2 & 0x3FF);
  }
  return v3 + 4 * v2;
}
