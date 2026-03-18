/*
 * XREFs of NtUserSetWindowFNID @ 0x14014C640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v5 + 456) != CurrentProcessWin32Process )
    {
      v10 = 5;
      goto LABEL_15;
    }
    if ( a2 == 0x4000 )
      goto LABEL_11;
    if ( !(unsigned int)IsWindowBeingDestroyed(v7) )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_14;
      }
      else if ( a2 != 666 && (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_14;
      }
      v5 = *(_QWORD *)(v7 + 40);
      if ( (*(_WORD *)(v5 + 42) & 0x2FFF) == 0 )
      {
        if ( !*(_DWORD *)(v5 + 248) )
        {
LABEL_11:
          v6 = 1LL;
          *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) |= a2;
          goto LABEL_12;
        }
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 8727LL);
      }
    }
LABEL_14:
    v10 = 87;
LABEL_15:
    UserSetLastError(v10);
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
