/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x1401DFA2C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiLogOutswappedProcessCommitRelease(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // r10
  __int64 v5; // r11
  ULONG64 v6; // r8
  TraceLoggingHProvider v7; // r9
  const GUID *v8; // [rsp+20h] [rbp-40h]
  const GUID *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 4uLL) )
    {
      *(_DWORD *)v2 = *(_DWORD *)(v4 + 744);
      *(_QWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a2;
      *(_QWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v5;
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v2 + 64), (LPCSTR)(v4 + 1104));
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
      *(_QWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 8;
      *(_QWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = (unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 16;
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 4;
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 8;
      *(_DWORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 8;
      TlgWriteEx(v7, &unk_14027C35D, v6, (ULONG)v7, v8, v9, 6u, (EVENT_DATA_DESCRIPTOR *)(v2 + 32));
    }
  }
}
