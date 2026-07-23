/*
 * XREFs of MiProtectSharedUserPage @ 0x14078FA44
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rcx
  _KPROCESS *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v8; // [rsp+24h] [rbp-D4h]
  __int64 v9; // [rsp+28h] [rbp-D0h]
  __int64 v10; // [rsp+30h] [rbp-C8h]
  __int64 v11; // [rsp+38h] [rbp-C0h]

  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_140326AE8 )
  {
    v9 = 20LL;
    v7 = 0;
    v8 = 0;
    v10 = 0LL;
    v11 = 0LL;
    *v1 = ~qword_1403A9350 & (v0 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403A9350 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100;
    if ( MiPteInShadowRange((unsigned __int64)v1) )
      MiWritePteShadow(v3, v2);
    MiInsertTbFlushEntry((__int64)&v7, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((__int64)&v7, v4, v5, v6);
  }
}
