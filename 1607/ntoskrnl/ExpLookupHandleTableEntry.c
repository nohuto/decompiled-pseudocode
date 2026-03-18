/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140451390
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140425940 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140447040 (ObpReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     ExEnumHandleTable @ 0x14045E4D0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x14045E6A0 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x14045E7E0 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointer @ 0x14050DF14 (ExMapHandleToPointer.c)
 *     AlpcpLookupMessage @ 0x14050E300 (AlpcpLookupMessage.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD554 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD594 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1406AD648 (ExpSnapShotHandleTables.c)
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
