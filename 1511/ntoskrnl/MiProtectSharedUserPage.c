/*
 * XREFs of MiProtectSharedUserPage @ 0x140771744
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void MiProtectSharedUserPage()
{
  __int64 v0; // rax
  unsigned __int8 v1; // r8
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  _KPROCESS *v4; // rdx
  int v5; // [rsp+40h] [rbp+0h] BYREF

  v0 = MI_READ_PTE_LOCK_FREE((__int64 *)0xFFFFF6FBC0000000LL);
  v1 = word_1402FE760;
  if ( v0 >= 0 || (BYTE1(v0) & 1) != (_BYTE)word_1402FE760 )
  {
    v2 = qword_140381310;
    *(_DWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
    *(_DWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) = 0;
    *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
    *(_WORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    *(_DWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 20;
    v3 = ~v2 & (v0 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)v2 ^ (unsigned __int16)(v1 << 8)) & 0x100;
    MEMORY[0xFFFFF6FBC0000000] = v3;
    if ( MiPteInShadowRange(0xFFFFF6FBC0000000uLL) )
      MiWritePteShadow(0xFFFFF6FBC0000000uLL, v3);
    MiInsertTbFlushEntry((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL, 0xFFFFF78000000000uLL, 1LL, 0);
    MiFlushTbList((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL, v4);
  }
}
