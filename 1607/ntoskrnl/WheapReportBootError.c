/*
 * XREFs of WheapReportBootError @ 0x14022FDE8
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14014C94C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapAllocErrorRecord @ 0x140230334 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x1402306D4 (WheapGetErrorSource.c)
 *     WheapWorkQueueAddItem @ 0x1402310CC (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rbp
  __int64 ErrorSource; // rax
  __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // [rsp+40h] [rbp+8h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(unsigned int *)(a1 + 24));
  v4 = ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  v7 = 0;
  v6 = WheapAllocErrorRecord(ErrorSource, &v7);
  if ( !v6 )
    return 0;
  (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))&unk_140341640 + 6 * *(int *)(v4 + 40)))(
    v4 + 89,
    a1,
    v6 + 40,
    (unsigned int)(v7 - 40),
    *(_QWORD *)(v4 + 56));
  WheapWorkQueueAddItem(WheaInfo[2], v6);
  return 1;
}
