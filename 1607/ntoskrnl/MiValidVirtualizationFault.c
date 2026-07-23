/*
 * XREFs of MiValidVirtualizationFault @ 0x1401EFB2C
 * Callers:
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF570 (MiCompleteSecureProcessFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiValidVirtualizationFault(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v10) >> 12) & 0xFFFFFFFFFLL;
  if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v6 = 48 * v4 - 0x58000000000LL;
    if ( *(__int64 *)(v6 + 8) >= 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx((__int64)(a2 << 25) >> 16, a2, -1LL, v5, 0) )
        return;
      v4 = MI_GET_PAGE_FRAME_FROM_PTE(a2);
      v6 = 48 * v4 - 0x58000000000LL;
    }
    MiCompleteSecureProcessFault(v6);
  }
  v7 = v10;
  *(_QWORD *)(a1 + 40) = v4;
  if ( (v7 & 0x20) == 0 )
  {
    v10 = v7 | 0x20;
    *(_QWORD *)a2 = v7 | 0x20;
    if ( MiPteInShadowRange(a2) )
      MiWritePteShadow(v9, v8);
  }
}
