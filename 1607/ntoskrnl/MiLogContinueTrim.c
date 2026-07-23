/*
 * XREFs of MiLogContinueTrim @ 0x1401E980C
 * Callers:
 *     MiCheckSystemTrimEndCriteria @ 0x1401E9150 (MiCheckSystemTrimEndCriteria.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void MiLogContinueTrim()
{
  unsigned __int64 v0; // rbp
  int v1; // edx
  char *v2; // r9
  const struct _TlgProvider_t *v3; // r10
  __int64 v4; // r11
  char v5; // al
  int v6; // [rsp+50h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 1uLL) )
    {
      v5 = *v2;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = 0;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x7C) = 0;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C) = 0;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x9C) = 0;
      *(_DWORD *)v0 = v5 & 0x7F;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *((_QWORD *)v2 + 11);
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *((_QWORD *)v2 + 9);
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = *((_QWORD *)v2 + 8);
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = *(_QWORD *)(v4 + 6464);
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = (unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 8;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 16;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 24;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 32;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 4;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v1 + 7;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = v1 + 7;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = v1 + 7;
      *(_DWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = v1 + 7;
      TlgWrite(v3, &unk_14027C5C1, 0LL, 0LL, 7u, (EVENT_DATA_DESCRIPTOR *)(v0 + 48));
    }
  }
}
