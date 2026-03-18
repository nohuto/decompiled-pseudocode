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
