/*
 * XREFs of MiProtectSharedUserPage @ 0x1407E8138
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void MiProtectSharedUserPage()
{
  int v0; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v1; // [rsp+24h] [rbp-D4h]
  __int64 v2; // [rsp+28h] [rbp-D0h]
  __int64 v3; // [rsp+30h] [rbp-C8h]
  __int64 v4; // [rsp+38h] [rbp-C0h]

  if ( MEMORY[0xFFFFF6FBC0000000] >= 0 || (MEMORY[0xFFFFF6FBC0000001] & 1) != (_BYTE)word_14034EC18 )
  {
    v0 = 0;
    v1 = 0;
    v3 = 0LL;
    v4 = 0LL;
    v2 = 20LL;
    MEMORY[0xFFFFF6FBC0000000] = ~qword_1403D0220 & (MEMORY[0xFFFFF6FBC0000000] | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403D0220 ^ (unsigned __int16)((unsigned __int8)word_14034EC18 << 8)) & 0x100;
    MiInsertTbFlushEntry((__int64)&v0, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)&v0);
  }
}
