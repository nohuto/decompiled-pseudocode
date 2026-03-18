/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x1407A92C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x1407A916C (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x14013CE64 (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x1407A9388 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407A9410 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x1407A9498 (BapdpProcessHSTIResults.c)
 *     BapdpProcessWmdResults @ 0x1407A9520 (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x1407A9604 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1407A96D0 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x1407A979C (BapdpProcessSiData.c)
 *     BapdpRecordIumStatus @ 0x1407A9B94 (BapdpRecordIumStatus.c)
 *     BapdpProcessBootMetadata @ 0x1407A9C58 (BapdpProcessBootMetadata.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  PVOID *v2; // rbx
  PVOID *v3; // rax

  if ( (__int64 *)qword_140341428 != &qword_140341428 )
  {
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        BapdpProcessBootMetadata();
        BapdpRecordIumStatus();
        BapdpProcessEtwEvents(v1);
        BapdpProcessHSTIResults();
        v2 = (PVOID *)qword_140341430;
        v3 = (PVOID *)*((_QWORD *)qword_140341430 + 1);
        if ( *(__int64 **)qword_140341430 != &qword_140341428 || *v3 != qword_140341430 )
          __fastfail(3u);
        while ( 1 )
        {
          qword_140341430 = v3;
          *v3 = &qword_140341428;
          if ( v2 == (PVOID *)&qword_140341428 )
            break;
          ExFreePoolWithTag(v2[2], 0);
          ExFreePoolWithTag(v2, 0);
          v2 = (PVOID *)qword_140341430;
          v3 = (PVOID *)*((_QWORD *)qword_140341430 + 1);
          if ( *(__int64 **)qword_140341430 != &qword_140341428 || *v3 != qword_140341430 )
            __fastfail(3u);
        }
      }
    }
    else
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpProcessSiData();
      BapdpProcessEDrvHintInfo();
      BapdpProcessFwUpdateResults();
    }
  }
}
