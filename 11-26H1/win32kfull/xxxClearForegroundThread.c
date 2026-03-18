/*
 * XREFs of xxxClearForegroundThread @ 0x14029DC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxClearForegroundThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944)
    || (_InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18944) + 520LL),
          0,
          0) & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4107);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v4);
  xxxSetForegroundThreadWithWindowHint(0LL, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
}
