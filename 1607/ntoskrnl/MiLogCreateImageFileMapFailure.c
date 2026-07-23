/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x140659228
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void MiLogCreateImageFileMapFailure()
{
  __int64 v0; // r9
  LPCGUID pActivityId; // r11
  TraceLoggingHProvider v2; // r10
  EVENT_DATA_DESCRIPTOR v3; // [rsp+60h] [rbp+0h] BYREF

  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 0x400000000000uLL) )
    {
      TlgCreateSz(
        (PEVENT_DATA_DESCRIPTOR)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 32),
        "SectionAlignmentIssue");
      *(_QWORD *)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(v0 + 96);
      *(_DWORD *)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = *(unsigned __int16 *)(v0 + 88);
      *(_QWORD *)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = ((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 72;
      *(_QWORD *)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 2LL;
      *(_DWORD *)(((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = (_DWORD)pActivityId;
      TlgWriteEx(
        v2,
        &unk_14027C45D,
        0LL,
        (_DWORD)pActivityId + 1,
        pActivityId,
        pActivityId,
        5u,
        (EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&v3 & 0xFFFFFFFFFFFFFFE0uLL));
    }
  }
}
