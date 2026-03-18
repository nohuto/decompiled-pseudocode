/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x140623B00
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401BF978 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

void MiLogCreateImageFileMapFailure()
{
  __int64 v0; // r9
  LPCGUID pActivityId; // r11
  TraceLoggingHProvider v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  _DWORD *v5; // [rsp+70h] [rbp-38h]
  __int64 v6; // [rsp+78h] [rbp-30h]
  __int64 v7; // [rsp+80h] [rbp-28h]
  _DWORD v8[2]; // [rsp+88h] [rbp-20h] BYREF

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000000uLL) )
    {
      TlgCreateSz(&pDesc, "SectionAlignmentIssue");
      v7 = *(_QWORD *)(v0 + 96);
      v8[0] = *(unsigned __int16 *)(v0 + 88);
      v5 = v8;
      v6 = 2LL;
      v8[1] = (_DWORD)pActivityId;
      TlgWriteEx(v2, &unk_140254382, 0LL, (_DWORD)pActivityId + 1, pActivityId, pActivityId, 5u, &pData);
    }
  }
}
