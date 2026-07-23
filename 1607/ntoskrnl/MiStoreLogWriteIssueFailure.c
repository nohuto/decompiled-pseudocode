/*
 * XREFs of MiStoreLogWriteIssueFailure @ 0x1401F49D0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiStoreLogWriteIssueFailure(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // rbp
  ULONG64 v9; // r8
  ULONG v10; // r9d
  const struct _TlgProvider_t *v11; // r10
  __int64 *v12; // r11
  __int64 v13; // rax
  const GUID *v14; // [rsp+20h] [rbp-40h]
  const GUID *v15; // [rsp+28h] [rbp-38h]
  int v16; // [rsp+60h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 0x400000000002uLL) )
    {
      v13 = *v12;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x9C) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xAC) = 0;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xBC) = 0;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v13;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v12[1];
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = a5;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = a6;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = (unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 24;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 32;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 4;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 8;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 12;
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 16;
      *(_DWORD *)v6 = a1;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = a3;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v10;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 4;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 8;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 8;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 4;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 4;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 4;
      *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = 4;
      TlgWriteEx(v11, &unk_14027C95C, v9, v10, v14, v15, 9u, (EVENT_DATA_DESCRIPTOR *)(v6 + 48));
    }
  }
}
