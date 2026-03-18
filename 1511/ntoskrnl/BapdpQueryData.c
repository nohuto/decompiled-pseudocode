/*
 * XREFs of BapdpQueryData @ 0x140768D64
 * Callers:
 *     BapdpProcessEtwEvents @ 0x14013E6F8 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x140768724 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407687AC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140768834 (BapdpProcessHSTIResults.c)
 *     BapdpProcessSystemIntegrityPolicy @ 0x1407688BC (BapdpProcessSystemIntegrityPolicy.c)
 *     BapdpProcessWmdResults @ 0x140768950 (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x140768A34 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140768B00 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSecureBootPolicy @ 0x140768BCC (BapdpProcessSecureBootPolicy.c)
 *     BapdpProcessSiData @ 0x140768C98 (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x1407691E8 (BapdpProcessBootMetadata.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // r8
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_14031BB68;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_14031BB68 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v12 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    return 0LL;
  }
  else
  {
    *a5 = v12;
    return 3221225507LL;
  }
}
