/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140768658
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140768610 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14013E6F8 (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  PVOID *v1; // rbx
  PVOID *v2; // rax

  if ( (__int64 *)qword_14031BB68 != &qword_14031BB68 )
  {
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        BapdpProcessEtwEvents(a1);
        BapdpProcessHSTIResults();
        v1 = (PVOID *)qword_14031BB70;
        v2 = (PVOID *)*((_QWORD *)qword_14031BB70 + 1);
        if ( *(__int64 **)qword_14031BB70 != &qword_14031BB68 || *v2 != qword_14031BB70 )
          __fastfail(3u);
        while ( 1 )
        {
          qword_14031BB70 = v2;
          *v2 = &qword_14031BB68;
          if ( v1 == (PVOID *)&qword_14031BB68 )
            break;
          ExFreePoolWithTag(v1[2], 0);
          ExFreePoolWithTag(v1, 0);
          v1 = (PVOID *)qword_14031BB70;
          v2 = (PVOID *)*((_QWORD *)qword_14031BB70 + 1);
          if ( *(__int64 **)qword_14031BB70 != &qword_14031BB68 || *v2 != qword_14031BB70 )
            __fastfail(3u);
        }
      }
    }
    else
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpProcessSecureBootPolicy();
      BapdpProcessSiData();
      BapdpProcessSystemIntegrityPolicy();
      BapdpProcessEDrvHintInfo();
      BapdpProcessFwUpdateResults();
      BapdpProcessBootMetadata();
    }
  }
}
