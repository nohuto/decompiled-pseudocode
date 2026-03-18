/*
 * XREFs of PopPolicySystemIdle @ 0x140456A94
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopResetIdleTime @ 0x1400F1E98 (PopResetIdleTime.c)
 *     PopGetConsoleDisplayRequestCount @ 0x1401F392C (PopGetConsoleDisplayRequestCount.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x1404571FC (PopTraceSystemIdleUpdate.c)
 *     PopIdleIsDozeS4Enabled @ 0x140457388 (PopIdleIsDozeS4Enabled.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // ebp
  bool v3; // si
  int v4; // r9d
  int v5; // edx
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
  if ( MEMORY[0xFFFFF780000002E4] != dword_1402DEAD0 )
  {
    dword_1402DEAD0 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1);
  }
  PopFilterCapabilities(&PopCapabilities, v11);
  v3 = 0;
  if ( !v12 && dword_1402DEB00 )
    v3 = dword_1402DEAC8 - dword_1402DEB00 < (unsigned int)dword_1402DE2A0;
  if ( dword_1402DEACC && dword_1402DEAC8 >= (unsigned int)dword_1402DEACC && !v3 && !PopUserShutdownInProgress )
  {
    if ( v12 )
    {
      if ( !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_1402DEAE4 == 0;
    }
  }
  byte_1402DEB10 = v0;
  if ( v12 && (_DWORD)qword_1402DEAD4 == 2 )
    v1 = dword_1402DEAE0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5);
    byte_1402DEAF1 = 0;
  }
  PopIdleIsDozeS4Enabled(v11);
  LOBYTE(v4) = v3;
  v5 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v5) = v0;
  PopTraceSystemIdleUpdate(dword_1402DEAC8, v5, dword_1402DEAE4 != 0, v4);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      (*(&xmmword_1402DE010 + 1))();
      goto LABEL_25;
    }
    v7 = 7;
    LODWORD(v8) = 128;
    PopExecutePowerAction((unsigned int)&v7, 0, (unsigned int)&qword_1402DEAD4, dword_1402DEAE0, 1);
  }
  PopReleasePolicyLock();
LABEL_25:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
