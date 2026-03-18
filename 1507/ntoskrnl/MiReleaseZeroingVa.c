/*
 * XREFs of MiReleaseZeroingVa @ 0x1400FC378
 * Callers:
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiReleaseZeroingVa(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  int v9; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+24h] [rbp-D4h]
  int v11; // [rsp+28h] [rbp-D0h]
  int v12; // [rsp+2Ch] [rbp-CCh]
  __int64 v13; // [rsp+30h] [rbp-C8h]
  __int64 v14; // [rsp+38h] [rbp-C0h]

  if ( *(_BYTE *)(a1 + 32) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL) + ((v2 + (*(_QWORD *)(a1 + 8) << 9)) << 21);
    *(_QWORD *)(a1 + 16) = v2 + 1;
    v4 = (_QWORD *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v4 = 0LL;
    if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v4, 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = (__int64)(v5 << 25) >> 16;
    v7 = v5 + 4096;
    if ( v5 < v5 + 4096 )
    {
      v8 = v5 + 0x90482413000LL;
      do
      {
        *(_QWORD *)v5 = 0LL;
        if ( v8 <= 0x7F8 )
          MiWritePteShadow(v5, 0LL);
        v5 += 8LL;
        v8 += 8LL;
      }
      while ( v5 < v7 );
    }
    v12 = 0;
    v9 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v10 = 0;
    v11 = 20;
    MiInsertTbFlushEntry((__int64)&v9, v6, 512LL, 0);
    MiFlushTbList((__int64)&v9);
  }
}
