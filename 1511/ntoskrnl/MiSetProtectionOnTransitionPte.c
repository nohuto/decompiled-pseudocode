/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1400EEBBC
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiSanitizePfnProtection @ 0x14005F5D0 (MiSanitizePfnProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx

  v8 = 0;
  v9 = MiLockTransitionLeafPage((ULONG_PTR)a2, 0LL);
  if ( !v9 )
    return 2LL;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  if ( a4 || !*(_WORD *)(v9 + 32) )
  {
    v13 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1F, a3) & 0x1F);
    v14 = v13 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(v9 + 16) = v13 | v12 & 0xFFFFFFFFFFFFFC1FuLL;
    *a2 = v14;
    if ( (unsigned int)MiPteInShadowRange(a2) )
      MiWritePteShadow(a2, v14);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
