/*
 * XREFs of xxxClientThreadSetup @ 0x1C00E7EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientThreadSetup(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(83LL);
  v2 = KeUserModeCallback(83LL, 0LL, 0LL, &v5, &v4);
  EtwTraceEndCallback(83LL);
  EnterCrit(1LL);
  return v2;
}
