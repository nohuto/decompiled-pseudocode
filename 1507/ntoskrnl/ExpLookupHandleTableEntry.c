/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140498B20
 * Callers:
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     RtlQueryAtomInAtomTable @ 0x140504970 (RtlQueryAtomInAtomTable.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x140521F54 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1406F02E4 (ExpSnapShotHandleTables.c)
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
