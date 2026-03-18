/*
 * XREFs of PopPolicySystemIdle @ 0x1404E3E64
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400D0054 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140241B68 (PopGetConsoleDisplayRequestCount.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleUpdate @ 0x1404E4068 (PopTraceSystemIdleUpdate.c)
 *     PopIdleIsDozeS4Enabled @ 0x1404E41F4 (PopIdleIsDozeS4Enabled.c)
 *     PopIdleCheckForUserInput @ 0x1404E420C (PopIdleCheckForUserInput.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1406BCE88 (PopIdleArmAoAcDozeS4Timer.c)
 */

__int64 PopPolicySystemIdle()
{
  unsigned __int8 v0; // di
  bool v1; // bl
  __int64 v2; // rdx
  char v3; // bp
  bool v4; // si
  char IsDozeS4Enabled; // al
  int v6; // r8d
  int v7; // r9d
  int v9; // [rsp+60h] [rbp-78h] BYREF
  __int64 v10; // [rsp+64h] [rbp-74h]
  __int64 v11; // [rsp+6Ch] [rbp-6Ch]
  int v12; // [rsp+74h] [rbp-64h]
  _BYTE v13[20]; // [rsp+80h] [rbp-58h] BYREF
  char v14; // [rsp+94h] [rbp-44h]

  v9 = 0;
  v10 = 0LL;
  v0 = 0;
  v11 = 0LL;
  v1 = 0;
  v12 = 0;
  PopAcquirePolicyLock();
  PopIdleCheckForUserInput();
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v13);
  v3 = v14;
  v4 = 0;
  if ( !v14 && dword_14032E1D8 )
    v4 = dword_14032E1A8 - dword_14032E1D8 < (unsigned int)dword_14032E860;
  if ( !dword_14032E1AC || dword_14032E1A8 < (unsigned int)dword_14032E1AC || v4 || PopUserShutdownInProgress )
    goto LABEL_13;
  if ( v14 )
  {
    if ( (unsigned int)PopGetConsoleDisplayRequestCount() )
      goto LABEL_13;
  }
  else if ( dword_14032E1C4 )
  {
    goto LABEL_20;
  }
  v0 = 1;
LABEL_13:
  if ( v3 && (_DWORD)qword_14032E1B4 == 2 )
    v1 = dword_14032E1C0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5u, v2);
    byte_14032E1C9 = 0;
  }
LABEL_20:
  IsDozeS4Enabled = PopIdleIsDozeS4Enabled(v13);
  if ( v0 && v1 && IsDozeS4Enabled )
    PopIdleArmAoAcDozeS4Timer();
  LOBYTE(v7) = v4;
  LOBYTE(v6) = dword_14032E1C4 != 0;
  PopTraceSystemIdleUpdate(dword_14032E1A8, v0, v6, v7);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      (*(&xmmword_14032E5D0 + 1))();
      goto LABEL_28;
    }
    v9 = 7;
    LODWORD(v10) = 128;
    PopExecutePowerAction((unsigned int)&v9, 0, (unsigned int)&qword_14032E1B4, dword_14032E1C0, 1);
  }
  PopReleasePolicyLock();
LABEL_28:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
