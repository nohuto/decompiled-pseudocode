/*
 * XREFs of UpdateInputGlobalsEx @ 0x1C0084630
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 * Callees:
 *     KeepMachineUp @ 0x1C00847A4 (KeepMachineUp.c)
 *     ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C00944F0 (-TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdateInputGlobalsEx(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  union _LARGE_INTEGER v10; // [rsp+28h] [rbp-30h] BYREF
  int v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v6 = gpsi;
  v7 = a1;
  result = gpsi;
  if ( (*gpsi & 0x2000) == 0 )
  {
    LODWORD(glinp[4]) &= 0xFFFFFFEE;
    if ( (a3 & 0xFFFFFFFD) == 0 )
      LODWORD(glinp[4]) |= 1u;
    if ( !gbBlockSendInputResets || !a2 )
    {
      UpdateLastInput(a1, a3);
      v6 = gpsi;
      if ( (*gpsi & 0x4000) == 0 || a4 )
      {
        KeepMachineUp();
        v6 = gpsi;
      }
    }
    if ( gPowerAdaptiveState && ((**(_DWORD **)v6 & 0x4000) == 0 || a4) )
    {
      gPowerAdaptiveState = 0;
      v11[0] = 8;
      QueuePowerRequest(v11, 0LL);
      v6 = gpsi;
    }
    *(_DWORD *)(*(_QWORD *)v6 + 3984LL) = v7;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 3984LL) - *(_DWORD *)(*(_QWORD *)v6 + 7304LL)) > 0x3E8 )
    {
      MEMORY[0xFFFFF780000002E4] = *(_DWORD *)(*(_QWORD *)v6 + 3984LL);
      *(_DWORD *)(*(_QWORD *)v6 + 7304LL) = *(_DWORD *)(*(_QWORD *)v6 + 3984LL);
    }
    if ( (unsigned int)EtwTraceUserIsActive(&v9, &v10) )
      TraceLoggingUserIsActive(v9, v10);
    result = CitLastInputUpdate(a3, gMouseLastButtonFlags, v7);
    if ( a3 )
    {
      result = gpsi;
      *gpsi &= ~0x40u;
    }
  }
  return result;
}
