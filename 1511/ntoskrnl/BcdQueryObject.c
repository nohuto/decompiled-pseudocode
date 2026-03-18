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

__int64 __fastcall BcdQueryObject(void *a1, int a2, _DWORD *a3, GUID *a4)
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
  LOBYTE(v7) = BiIsOfflineHandle((char)a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription((__int64)a1, a3), ObjectIdentifier >= 0) )
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
