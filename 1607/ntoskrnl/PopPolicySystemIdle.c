/*
 * XREFs of PopPolicySystemIdle @ 0x1403F5874
 * Callers:
 *     PopPolicyWorkerThread @ 0x140009874 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007F48 (PopResetIdleTime.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140008CFC (PopGetConsoleDisplayRequestCount.c)
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopFilterCapabilities @ 0x1403F3CF4 (PopFilterCapabilities.c)
 *     PopIdleIsHibernateEnabled @ 0x1403F56BC (PopIdleIsHibernateEnabled.c)
 *     PopTraceSystemIdleUpdate @ 0x1403F56E4 (PopTraceSystemIdleUpdate.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
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
  if ( MEMORY[0xFFFFF780000002E4] != dword_140303390 )
  {
    dword_140303390 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1);
  }
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
  v3 = 0;
  if ( !v12 && dword_1403033C0 )
    v3 = dword_140303388 - dword_1403033C0 < (unsigned int)dword_140303E20;
  if ( dword_14030338C && dword_140303388 >= (unsigned int)dword_14030338C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v12 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_1403033A4 == 0;
    }
  }
  byte_1403033D0 = v0;
  if ( v12 && (_DWORD)qword_140303394 == 2 )
    v1 = dword_1403033A0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5);
    byte_1403033B5 = 0;
  }
  IsHibernateEnabled = PopIdleIsHibernateEnabled(v11);
  PopTraceSystemIdleUpdate(
    dword_140303388,
    v0,
    dword_1403033A4 != 0,
    v3,
    v6,
    IsHibernateEnabled,
    *((_DWORD *)PopPolicy + 22),
    v1,
    byte_1403033C4,
    qword_140303394,
    dword_1403033A0);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      xmmword_140328FF0();
      goto LABEL_12;
    }
    v7 = 7;
    LODWORD(v8) = 128;
    PopExecutePowerAction((unsigned int)&v7, 0, (unsigned int)&qword_140303394, dword_1403033A0, 1);
  }
  PopReleasePolicyLock();
LABEL_12:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
