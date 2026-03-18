/*
 * XREFs of KdEnableDebugger @ 0x1401FDC58
 * Callers:
 *     KdpStub @ 0x140127B74 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14079A2A0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14079AA3C (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1401FDCD4 (KdEnableDebuggerWithLock.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  bool v0; // zf
  bool v1; // bl
  NTSTATUS v2; // r9d
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax

  v0 = KeEnableWatchdogTimeout == 0;
  KeEnableWatchdogTimeout = 0;
  v1 = v0;
  v2 = KdEnableDebuggerWithLock(1);
  if ( v1 )
  {
    KeEnableWatchdogTimeout = 0;
  }
  else
  {
    if ( !KeEnableWatchdogTimeout && (_DWORD)KeNumberProcessors_0 )
    {
      v3 = KiProcessorBlock;
      v4 = (unsigned int)KeNumberProcessors_0;
      do
      {
        v5 = *v3++;
        *(_DWORD *)(v5 + 22636) = 0;
        *(_DWORD *)(v5 + 23328) = 0;
        --v4;
      }
      while ( v4 );
    }
    KeEnableWatchdogTimeout = 1;
  }
  return v2;
}
