/*
 * XREFs of BcdQueryObject @ 0x1404FC68C
 * Callers:
 *     PopBcdSetPendingResume @ 0x1404F57FC (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14063D040 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     BiGetObjectIdentifier @ 0x1404F4F98 (BiGetObjectIdentifier.c)
 *     BiGetObjectDescription @ 0x1404FB254 (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdQueryObject(
        HANDLE BcdObjectHandle,
        ULONG BcdVersion,
        BCD_OBJECT_DESCRIPTION Description,
        PGUID Identifier)
{
  __int64 v7; // rcx
  char v8; // r14
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectIdentifier; // ebx

  if ( Description )
  {
    if ( BcdVersion == 1 )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Identifier )
    return -1073741811;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !*(_QWORD *)&Description
      || (ObjectIdentifier = BiGetObjectDescription((__int64)BcdObjectHandle, *(_DWORD **)&Description),
          ObjectIdentifier >= 0) )
    {
      if ( Identifier )
        ObjectIdentifier = BiGetObjectIdentifier(BcdObjectHandle, Identifier);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return ObjectIdentifier;
  }
  return result;
}
