/*
 * XREFs of MiLogWsEmptyControl @ 0x14013459C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiFillLogProcessInfo @ 0x14010C3EC (MiFillLogProcessInfo.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiLogWsEmptyControl(__int64 a1)
{
  unsigned __int64 v1; // rbp
  const struct _TlgProvider_t *v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  const CHAR *v5; // rdx
  char v6; // al
  ULONG64 v7; // r8
  TraceLoggingHProvider v8; // r9
  const GUID *v9; // [rsp+20h] [rbp-40h]
  const GUID *v10; // [rsp+28h] [rbp-38h]
  _BYTE v11[4]; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 )
  {
    MiFillLogProcessInfo(a1, (_DWORD *)(v1 + 4), (_QWORD *)(v1 + 16));
    if ( v2->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v2, 0x10uLL) )
      {
        v5 = *(const CHAR **)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v6 = *(_BYTE *)(v3 + 184) & 7;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
        *(_BYTE *)v1 = v6;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 4);
        *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v4;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 1;
        TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v1 + 80), v5);
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
        *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 4;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 4;
        *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 4;
        *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 8;
        TlgWriteEx(v8, &unk_14027CB14, v7, (ULONG)v8, v9, v10, 6u, (EVENT_DATA_DESCRIPTOR *)(v1 + 32));
      }
    }
  }
}
