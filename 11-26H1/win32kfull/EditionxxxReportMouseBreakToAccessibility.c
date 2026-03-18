/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x1401731F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1401735F8 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 */

__int64 __fastcall EditionxxxReportMouseBreakToAccessibility(__int64 a1, const struct tagUIPI_INFO_INT *a2, int a3)
{
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v5 = a1;
  v6 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20612);
  if ( (v6 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    *(_WORD *)(UserSessionState + 20636) &= ~v5;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v7, v6) + 20604) & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a3 != 0, a2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
