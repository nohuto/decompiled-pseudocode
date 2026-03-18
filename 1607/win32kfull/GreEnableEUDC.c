/*
 * XREFs of GreEnableEUDC @ 0x1C0107E88
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0107CD8 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x1C0107E80 (NtGdiEnableEudc.c)
 * Callees:
 *     bDeleteAllFlEntry @ 0x1C0021D74 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1C01082A8 (bAddAllFlEntry.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01BF4A8 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C0288FC4 (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     ?EUDCEnsureUmfdHost@@YAHXZ @ 0x1C02892A0 (-EUDCEnsureUmfdHost@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  __int64 result; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemEUDC1 && ghsemEnableEUDC )
  {
    if ( !a1 || (result = EUDCEnsureUmfdHost(), (_DWORD)result) )
    {
      SEMOBJ::SEMOBJ((SEMOBJ *)&v5, ghsemGreLock);
      GreAcquireSemaphore(ghsemEnableEUDC);
      if ( a1 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
          bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        v3 = bAddAllFlEntry(1LL);
      }
      else
      {
        v3 = bDeleteAllFlEntry();
      }
      v4 = v3;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
      GreReleaseSemaphoreInternal(ghsemEnableEUDC);
      if ( !gbAttemptedEnableEUDC )
        gbAttemptedEnableEUDC = 1;
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v5);
      return v4;
    }
  }
  else
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    return 1LL;
  }
  return result;
}
