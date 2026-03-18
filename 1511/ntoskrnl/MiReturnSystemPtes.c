/*
 * XREFs of MiReturnSystemPtes @ 0x1400153A0
 * Callers:
 *     MiReplenishBitMap @ 0x140013C80 (MiReplenishBitMap.c)
 *     MiAttemptCoalesce @ 0x140015270 (MiAttemptCoalesce.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnSystemPtes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r11
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v14; // [rsp+24h] [rbp-E4h]
  __int64 v15; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]

  v5 = a3;
  v7 = ~(unsigned __int8)*(_DWORD *)(a1 + 24) & 2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    a3 *= 16LL;
    a2 *= 16LL;
  }
  v8 = *(_QWORD *)(a1 + 16) + 8 * a2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -v5);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), -v5);
  v8 <<= 25;
  v13 = v7;
  v9 = v8 >> 16;
  v15 = 20LL;
  v10 = (v8 + (a3 << 28)) >> 16;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  MiInsertTbFlushEntry(&v13, v8 >> 16, a3, 0LL);
  v11 = *(unsigned int *)(a1 + 28);
  if ( a4 == 1 )
    v11 = 15LL;
  return MiReturnSystemVa(v9, v10, v11, &v13);
}
