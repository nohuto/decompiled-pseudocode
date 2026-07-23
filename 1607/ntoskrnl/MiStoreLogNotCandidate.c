/*
 * XREFs of MiStoreLogNotCandidate @ 0x140116194
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiStoreLogNotCandidate(int a1)
{
  unsigned __int64 v1; // rbp
  ULONG64 v2; // r8
  const struct _TlgProvider_t *v3; // r9
  int v4; // r10d
  int v5; // r11d
  const GUID *v6; // [rsp+20h] [rbp-40h]
  const GUID *v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && a1 != -1073741401 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 0x400000000002uLL) )
    {
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
      *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 4;
      *(_DWORD *)v1 = v4;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v5;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 4;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 4;
      TlgWriteEx(v3, &unk_14027CAAE, v2, (ULONG)v3, v6, v7, 4u, (EVENT_DATA_DESCRIPTOR *)(v1 + 16));
    }
  }
}
