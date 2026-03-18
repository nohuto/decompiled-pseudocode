/*
 * XREFs of MiValidVirtualizationFault @ 0x1401DEFD0
 * Callers:
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiCompleteSecureProcessFault @ 0x1401DECFC (MiCompleteSecureProcessFault.c)
 */

void __fastcall MiValidVirtualizationFault(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE((__int64 *)a2);
  v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL;
  if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    v8 = 0x8000000000000000uLL;
    v9 = 48 * v6 - 0x58000000000LL;
    if ( *(__int64 *)(v9 + 8) >= 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx(a2 << 25 >> 16, a2, -1LL, a3, 0) )
        return;
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(a2);
      v9 = 48 * v6 - 0x58000000000LL;
    }
    MiCompleteSecureProcessFault(v9, v8, v7);
  }
  *(_QWORD *)(a1 + 40) = v6;
  if ( (v11 & 0x20) == 0 )
  {
    v10 = v11 | 0x20;
    v11 = v10;
    *(_QWORD *)a2 = v10;
    if ( MiPteInShadowRange(a2) )
      MiWritePteShadow(a2, v10);
  }
}
