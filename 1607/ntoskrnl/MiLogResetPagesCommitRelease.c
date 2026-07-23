/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x1401DFB20
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void MiLogResetPagesCommitRelease()
{
  unsigned __int64 v0; // rbp
  __int64 v1; // r10
  __int64 v2; // r11
  ULONG64 v3; // r8
  TraceLoggingHProvider v4; // r9
  const GUID *v5; // [rsp+20h] [rbp-40h]
  const GUID *v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 4uLL) )
    {
      *(_DWORD *)v0 = *(_DWORD *)(v1 + 744);
      *(_QWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *(_QWORD *)(v1 + 1480);
      *(_QWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v2;
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v0 + 64), (LPCSTR)(v1 + 1104));
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
      *(_QWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 8;
      *(_QWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = (unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 16;
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 4;
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 8;
      *(_DWORD *)(((unsigned __int64)&v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 8;
      TlgWriteEx(v4, &unk_14027C2F7, v3, (ULONG)v4, v5, v6, 6u, (EVENT_DATA_DESCRIPTOR *)(v0 + 32));
    }
  }
}
