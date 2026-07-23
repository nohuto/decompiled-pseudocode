/*
 * XREFs of MiStoreLogWriteDisabled @ 0x1401F492C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void MiStoreLogWriteDisabled()
{
  unsigned __int64 v0; // rbp
  int v1; // edx
  ULONG64 v2; // r8
  const struct _TlgProvider_t *v3; // r9
  int v4; // r10d
  int v5; // r11d
  const GUID *v6; // [rsp+20h] [rbp-40h]
  const GUID *v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 2uLL) )
    {
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
      *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = ((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 4;
      *(_DWORD *)v0 = v5;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v4;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v1 + 2;
      *(_DWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v1 + 2;
      TlgWriteEx(v3, &unk_14027CA6F, v2, (ULONG)v3, v6, v7, v1 + 2, (EVENT_DATA_DESCRIPTOR *)(v0 + 16));
    }
  }
}
