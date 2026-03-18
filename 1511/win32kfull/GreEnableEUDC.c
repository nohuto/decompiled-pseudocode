/*
 * XREFs of GreEnableEUDC @ 0x1C000EC48
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C000D930 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x1C000EC40 (NtGdiEnableEudc.c)
 * Callees:
 *     bDeleteAllFlEntry @ 0x1C000DE58 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C028A674 (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx

  if ( ghsemEUDC1 && ghsemEnableEUDC )
  {
    GreAcquireSemaphore(ghsemEnableEUDC);
    if ( a1 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
        bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
      v2 = bAddAllFlEntry(1LL);
    }
    else
    {
      v2 = bDeleteAllFlEntry();
    }
    v3 = v2;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
    GreReleaseSemaphoreInternal(ghsemEnableEUDC);
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    return v3;
  }
  else
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    return 1LL;
  }
}
