/*
 * XREFs of MiReleaseZeroingVa @ 0x1400E4ABC
 * Callers:
 *     MiZeroLargePage @ 0x1400E4A68 (MiZeroLargePage.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiReleaseZeroingVa(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rbp
  _KPROCESS *v7; // rdx
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-D4h]
  int v10; // [rsp+28h] [rbp-D0h]
  int v11; // [rsp+2Ch] [rbp-CCh]
  __int64 v12; // [rsp+30h] [rbp-C8h]
  __int64 v13; // [rsp+38h] [rbp-C0h]

  if ( *(_BYTE *)(a1 + 24) == 1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL) + ((v1 + (*(_QWORD *)a1 << 9)) << 21);
    *(_QWORD *)(a1 + 8) = v1 + 1;
    v3 = (_QWORD *)(((v2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v3 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v3) )
      MiWritePteShadow(v3, 0LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = (__int64)(v4 << 25) >> 16;
    v6 = (_QWORD *)(v4 + 4096);
    while ( v4 < (unsigned __int64)v6 )
    {
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4) )
        MiWritePteShadow(v4, 0LL);
      v4 += 8LL;
    }
    v11 = 0;
    v8 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v9 = 0;
    v10 = 20;
    MiInsertTbFlushEntry((__int64)&v8, v5, 512LL, 0);
    MiFlushTbList((__int64)&v8, v7);
  }
}
