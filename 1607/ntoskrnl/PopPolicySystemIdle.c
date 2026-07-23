/*
 * XREFs of PopPolicySystemIdle @ 0x1403F4738
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400093E8 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007ABC (PopResetIdleTime.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140008870 (PopGetConsoleDisplayRequestCount.c)
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopIdleIsHibernateEnabled @ 0x1403F4580 (PopIdleIsHibernateEnabled.c)
 *     PopTraceSystemIdleUpdate @ 0x1403F45A8 (PopTraceSystemIdleUpdate.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 */

__int64 PopPolicySystemIdle()
{
  unsigned __int8 v0; // bl
  char v1; // di
  int ConsoleDisplayRequestCount; // ebp
  char v3; // si
  char IsHibernateEnabled; // al
  int v6; // [rsp+20h] [rbp-B8h]
  int v7; // [rsp+60h] [rbp-78h] BYREF
  __int64 v8; // [rsp+64h] [rbp-74h]
  __int64 v9; // [rsp+6Ch] [rbp-6Ch]
  int v10; // [rsp+74h] [rbp-64h]
  _BYTE v11[20]; // [rsp+80h] [rbp-58h] BYREF
  char v12; // [rsp+94h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  v0 = 0;
  v9 = 0LL;
  v1 = 0;
  v10 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock();
  if ( MEMORY[0xFFFFF780000002E4] != dword_1403032D0 )
  {
    dword_1403032D0 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1);
  }
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
  v3 = 0;
  if ( !v12 && dword_140303300 )
    v3 = dword_1403032C8 - dword_140303300 < (unsigned int)dword_140303D60;
  if ( dword_1403032CC && dword_1403032C8 >= (unsigned int)dword_1403032CC && !v3 && !PopUserShutdownInProgress )
  {
    if ( v12 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_1403032E4 == 0;
    }
  }
  byte_140303310 = v0;
  if ( v12 && (_DWORD)qword_1403032D4 == 2 )
    v1 = dword_1403032E0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5);
    byte_1403032F5 = 0;
  }
  IsHibernateEnabled = PopIdleIsHibernateEnabled(v11);
  PopTraceSystemIdleUpdate(
    dword_1403032C8,
    v0,
    dword_1403032E4 != 0,
    v3,
    v6,
    IsHibernateEnabled,
    *((_DWORD *)PopPolicy + 22),
    v1,
    byte_140303304,
    qword_1403032D4,
    dword_1403032E0);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      xmmword_140329030();
      goto LABEL_12;
    }
    v7 = 7;
    LODWORD(v8) = 128;
    PopExecutePowerAction((unsigned int)&v7, 0, (unsigned int)&qword_1403032D4, dword_1403032E0, 1);
  }
  PopReleasePolicyLock();
LABEL_12:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
