/*
 * XREFs of BcdQueryObject @ 0x14056F12C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140569D2C (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406BD5E4 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     BiGetObjectIdentifier @ 0x1405693A0 (BiGetObjectIdentifier.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
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
