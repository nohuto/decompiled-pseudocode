/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x1404C5578
 * Callers:
 *     PopUserPresentSetWorker @ 0x1404C552C (PopUserPresentSetWorker.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 *     PopDispatchFullWake @ 0x1404F5684 (PopDispatchFullWake.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     PopSensorActiveInput @ 0x14063C618 (PopSensorActiveInput.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopNotifyConsoleUserPresent(char a1, char a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-30h] BYREF
  char v5; // [rsp+24h] [rbp-2Ch]
  int v6; // [rsp+28h] [rbp-28h]
  char *v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+68h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+28h] BYREF
  char v12; // [rsp+79h] [rbp+29h]
  int v13; // [rsp+7Ch] [rbp+2Ch]

  LOBYTE(v10) = a2;
  if ( PsWin32CalloutsEstablished )
  {
    result = MEMORY[0xFFFFF780000002D8];
    v10 = MEMORY[0xFFFFF780000002D8];
    if ( MEMORY[0xFFFFF780000002D8] != -1 )
    {
      v13 = a3;
      v11 = a1;
      v12 = 0;
      v5 = 0;
      v8 = 0;
      v9 = 0LL;
      v4 = 1;
      v6 = 8;
      v7 = &v11;
      return PsInvokeWin32Callout((_KPROCESS *)5, (__int64)&v4, 1, (int)&v10);
    }
  }
  return result;
}
