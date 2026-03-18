/*
 * XREFs of HmgNextOwned @ 0x1C0037530
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C004562C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

unsigned __int64 __fastcall HmgNextOwned(__int64 a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rsi
  unsigned __int16 v5; // di
  int v6; // r9d
  __int64 v7; // rdx
  char *v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx

  v3 = ghsemHmgr;
  v5 = a1;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    v3 = ghsemHmgr;
  }
  v6 = gbLockEtw;
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    Template_pqz(a1, a2, a3, (_DWORD)v3, 16, (__int64)L"ghsemHmgr");
    v6 = gbLockEtw;
    v3 = ghsemHmgr;
  }
  v7 = (unsigned int)v5 + 1;
  if ( (unsigned int)v7 >= gcMaxHmgr )
  {
LABEL_9:
    v9 = 0LL;
  }
  else
  {
    a1 = 3 * v7;
    v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v7 + 8;
    while ( 1 )
    {
      if ( v8[6] )
      {
        a1 = *(_DWORD *)v8 ^ a2 & 0xFFFFFFFD;
        if ( (a1 & 0xFFFFFFFE) == 0 )
          break;
      }
      LODWORD(v7) = v7 + 1;
      v8 += 24;
      if ( (unsigned int)v7 >= gcMaxHmgr )
        goto LABEL_9;
    }
    a1 = *((unsigned __int16 *)v8 + 2) << 16;
    v9 = (int)v7 | (unsigned __int64)(int)a1;
  }
  if ( v6 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    Template_pz(a1, &LockRelease, (unsigned int)gcMaxHmgr, v3, L"ghsemHmgr");
    v3 = ghsemHmgr;
  }
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v10);
  }
  return v9;
}
