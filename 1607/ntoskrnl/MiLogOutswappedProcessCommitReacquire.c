/*
 * XREFs of MiLogOutswappedProcessCommitReacquire @ 0x1401DF8B8
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiLogOutswappedProcessCommitReacquire(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // r11
  ULONG64 v7; // r8
  ULONG v8; // r9d
  const struct _TlgProvider_t *v9; // r10
  const void *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r11
  const GUID *v13; // [rsp+20h] [rbp-40h]
  const GUID *v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+60h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( qword_1403277E0->LevelPlus1 > 5 && TlgKeywordOn(qword_1403277E0, 4uLL) )
        {
          *(_DWORD *)v4 = *(_DWORD *)(v11 + 744);
          *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a2;
          TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v4 + 48), (LPCSTR)(v11 + 1104));
          v10 = &unk_14027C2A3;
          goto LABEL_13;
        }
      }
      else if ( qword_1403277E0->LevelPlus1 > 5 && TlgKeywordOn(qword_1403277E0, 4uLL) )
      {
        *(_DWORD *)v4 = *(_DWORD *)(v12 + 744);
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a2;
        TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v4 + 48), (LPCSTR)(v12 + 1104));
        v10 = &unk_14027C1FF;
        goto LABEL_13;
      }
    }
    else if ( qword_1403277E0->LevelPlus1 > 5 && TlgKeywordOn(qword_1403277E0, 4uLL) )
    {
      *(_DWORD *)v4 = *(_DWORD *)(v6 + 744);
      *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a2;
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v4 + 48), (LPCSTR)(v6 + 1104));
      v10 = &unk_14027C253;
LABEL_13:
      *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
      *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
      *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 8;
      *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v8;
      *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 8;
      TlgWriteEx(v9, v10, v7, v8, v13, v14, 5u, (EVENT_DATA_DESCRIPTOR *)(v4 + 16));
    }
  }
}
