/*
 * XREFs of MiZeroPageWorkMapping @ 0x14008AFA0
 * Callers:
 *     MiPageListCollision @ 0x14008A878 (MiPageListCollision.c)
 *     MiReleaseLargeZeroingVa @ 0x14008AB74 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x14008B0B4 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiZeroPageWorkMapping(unsigned int a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-D4h]
  __int64 v10; // [rsp+28h] [rbp-D0h]
  __int64 v11; // [rsp+30h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C0h]

  v10 = 20LL;
  v8 = 0;
  v2 = a2;
  v9 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a1 > 1 )
  {
    v3 = (__int64)((_QWORD)a2 << 25) >> 16;
    if ( a1 == -1 )
    {
      v4 = 1LL;
      MiInsertTbFlushEntry(&v8, v3, 1LL);
    }
    else if ( a1 == 2 )
    {
      v4 = 16LL;
      MiInsertTbFlushEntry(&v8, v3, 16LL);
    }
    else
    {
      v4 = 512LL;
    }
  }
  else
  {
    MiInsertLargeTbFlushEntry(&v8, 2 - a1, a2);
    v4 = 1LL;
  }
  if ( v2 < &v2[v4] )
  {
    do
    {
      *v2 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v2, v3) )
        MiWritePteShadow(v5, 0LL);
      ++v2;
    }
    while ( (unsigned __int64)v2 < v6 );
  }
  return MiFlushTbList(&v8);
}
