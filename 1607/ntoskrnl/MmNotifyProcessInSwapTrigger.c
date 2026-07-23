/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1400CCC44
 * Callers:
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  unsigned __int64 v1; // rbp
  char result; // al
  __int64 v3; // r10
  ULONG64 v4; // r8
  TraceLoggingHProvider v5; // r9
  const GUID *v6; // [rsp+20h] [rbp-40h]
  const GUID *v7; // [rsp+28h] [rbp-38h]
  _DWORD v8[4]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFE0uLL;
  result = *(_BYTE *)(a1 + 1467) & 0xC0;
  if ( result == (char)0x80 && qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(qword_1403277E0, 8uLL);
    if ( result )
    {
      *(_DWORD *)v1 = *(_DWORD *)(v3 + 744);
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v1 + 48), (LPCSTR)(v3 + 1104));
      *(_DWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
      *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_DWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 4;
      return TlgWriteEx(v5, &unk_14027C1BB, v4, (ULONG)v5, v6, v7, 4u, (EVENT_DATA_DESCRIPTOR *)(v1 + 16));
    }
  }
  return result;
}
