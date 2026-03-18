/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x1407DC974
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x1407DC92C (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14016C1C0 (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x1407DCA40 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407DCAC8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x1407DCB50 (BapdpProcessHSTIResults.c)
 *     BapdpProcessSystemIntegrityPolicy @ 0x1407DCBD8 (BapdpProcessSystemIntegrityPolicy.c)
 *     BapdpProcessWmdResults @ 0x1407DCC6C (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x1407DCD50 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1407DCE1C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSecureBootPolicy @ 0x1407DCEE8 (BapdpProcessSecureBootPolicy.c)
 *     BapdpProcessSiData @ 0x1407DCFB4 (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x1407DD504 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  PVOID *v1; // rbx
  PVOID *v2; // rax

  if ( (__int64 *)qword_14036BE68 != &qword_14036BE68 )
  {
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        BapdpProcessEtwEvents(a1);
        BapdpProcessHSTIResults();
        v1 = (PVOID *)qword_14036BE70;
        v2 = (PVOID *)*((_QWORD *)qword_14036BE70 + 1);
        if ( *(__int64 **)qword_14036BE70 != &qword_14036BE68 || *v2 != qword_14036BE70 )
          __fastfail(3u);
        while ( 1 )
        {
          qword_14036BE70 = v2;
          *v2 = &qword_14036BE68;
          if ( v1 == (PVOID *)&qword_14036BE68 )
            break;
          ExFreePoolWithTag(v1[2], 0);
          ExFreePoolWithTag(v1, 0);
          v1 = (PVOID *)qword_14036BE70;
          v2 = (PVOID *)*((_QWORD *)qword_14036BE70 + 1);
          if ( *(__int64 **)qword_14036BE70 != &qword_14036BE68 || *v2 != qword_14036BE70 )
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
