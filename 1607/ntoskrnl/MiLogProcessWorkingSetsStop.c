/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140088D38
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E12FC (_TlgWriteEx.c)
 */

void MiLogProcessWorkingSetsStop()
{
  EVENT_DATA_DESCRIPTOR *v0; // rbp
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  _QWORD *v3; // r10
  const GUID *v4; // [rsp+20h] [rbp-40h]
  const GUID *v5; // [rsp+28h] [rbp-38h]
  __int64 v6; // [rsp+60h] [rbp+0h] BYREF

  v0 = (EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 1uLL) )
    {
      v0->Ptr = v3[808];
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v3[904];
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v3[918];
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = (unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 8;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = ((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 16;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v6 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 8LL;
      TlgWriteEx(v2, &unk_14027C52B, v1, (ULONG)v2, v4, v5, 5u, v0 + 2);
    }
  }
}
