/*
 * XREFs of BcdQueryObject @ 0x14053D33C
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14053C72C (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     BiGetObjectIdentifier @ 0x140532888 (BiGetObjectIdentifier.c)
 *     BiGetObjectDescription @ 0x14053D854 (BiGetObjectDescription.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, __int64 a3, GUID *a4)
{
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int ObjectIdentifier; // ebx

  if ( a3 )
  {
    if ( a2 == 1 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( !a4 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(a1, a3), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(a1, a4);
    }
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return (unsigned int)ObjectIdentifier;
  }
  return result;
}
