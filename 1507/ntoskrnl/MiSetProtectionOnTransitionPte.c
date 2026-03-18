/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x140129CD0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x14005E6A0 (MiSanitizePfnProtection.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, _KPROCESS *a2, unsigned int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 PteShadow; // rbx
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx

  v8 = 0;
  v9 = MiLockTransitionLeafPage(a2, 0LL);
  if ( !v9 )
    return 2LL;
  PteShadow = *(_QWORD *)&a2->Header.Lock;
  if ( (unsigned __int64)&a2[0x32BC88773LL].ReadyListHead <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)&a2->Header.Lock);
  if ( a4 || !*(_WORD *)(v9 + 32) )
  {
    if ( (a3 & 2) != 0 && (BYTE2(MiFlags) & 3u) > 1 )
    {
      v12 = 0;
      if ( ((*(_QWORD *)(v9 + 40) >> 54) & 7) != 3 )
        v12 = 2;
      if ( (a3 & 4) != 0 && (a3 & 5) != 5 )
        v12 |= 1u;
      if ( v12 )
        MiMarkPfnVerified(v9, v12 | 4);
    }
    v14 = 32 * (MiSanitizePfnProtection(a1, (*(_QWORD *)(v9 + 16) >> 5) & 0x1F, a3) & 0x1F);
    v15 = v14 | PteShadow & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(v9 + 16) = v14 | v13 & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)&a2->Header.Lock = v15;
    if ( (unsigned __int64)&a2[0x32BC88773LL].ReadyListHead <= 0x7F8 )
      MiWritePteShadow(a2, v15);
  }
  else
  {
    v8 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}
