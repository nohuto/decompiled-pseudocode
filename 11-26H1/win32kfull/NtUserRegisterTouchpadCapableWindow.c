/*
 * XREFs of NtUserRegisterTouchpadCapableWindow @ 0x1402BA7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserRegisterTouchpadCapableWindow(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v5 = ValidateHwndStrict(a1);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( v8 != v4 )
    {
LABEL_3:
      UserSetLastError(87);
      goto LABEL_17;
    }
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = *(_DWORD *)(v7 + 380) | 0x800;
      if ( !a2 )
        v10 = *(_DWORD *)(v7 + 380) & 0xFFFFF7FF;
      *(_DWORD *)(v7 + 380) = v10;
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 380);
      if ( a2 )
      {
        if ( (v9 & 0x800) == 0 )
        {
          if ( *(_WORD *)(v8 + 1264) == 0xFFFF )
            goto LABEL_3;
          *(_DWORD *)(v7 + 380) = v9 | 0x800;
          ++*(_WORD *)(v8 + 1264);
        }
      }
      else if ( (v9 & 0x800) != 0 )
      {
        *(_DWORD *)(v7 + 380) = v9 & 0xFFFFF7FF;
        if ( !*(_WORD *)(v8 + 1264) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 21086);
        --*(_WORD *)(v8 + 1264);
      }
    }
    v6 = 1LL;
  }
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
