/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x14014C9B4
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpPrintString @ 0x1406F2F8C (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v0; // rax
  char v1; // di
  BOOLEAN v2; // bl
  __int64 v3; // rcx
  __int16 v5; // [rsp+20h] [rbp-18h] BYREF
  const char *v6; // [rsp+28h] [rbp-10h]

  if ( KdPitchDebugger )
    return 1;
  v0 = -1LL;
  v6 = "KDTARGET: Refreshing KD connection\n";
  do
    ++v0;
  while ( aKdtargetRefres[v0] );
  v5 = v0;
  v1 = KdEnterDebugger(0LL);
  KdpPrintString(&v5);
  v2 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v3) = v1;
  KdExitDebugger(v3);
  return v2;
}
