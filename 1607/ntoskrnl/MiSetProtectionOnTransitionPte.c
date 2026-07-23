/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1400B6D28
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiSanitizePfnProtection @ 0x1400DF630 (MiSanitizePfnProtection.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9

  v8 = 0;
  if ( !MiLockTransitionLeafPage((ULONG_PTR)a2) )
    return 2LL;
  MI_READ_PTE_LOCK_FREE(a2);
  if ( a4 || !*(_WORD *)(v10 + 32) )
  {
    v12 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v10 + 16) >> 5) & 0x1FLL, a3) & 0x1F);
    *(_QWORD *)(v14 + 16) = v12 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    *a2 = v12 | v13 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (unsigned int)MiPteInShadowRange(a2, v15) )
      MiWritePteShadow(v16, v17);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
