/*
 * XREFs of KdpDeleteBreakpoint @ 0x1406F3704
 * Callers:
 *     KdpDeleteBreakpointRange @ 0x1406F26E0 (KdpDeleteBreakpointRange.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpRestoreBreakPointEx @ 0x1406F558C (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x1406F5BD0 (KdpWriteBreakPointEx.c)
 * Callees:
 *     KdpLowWriteContent @ 0x1406F62A4 (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&KdpBreakpointTable + 2 * v2 + 8) = 0;
  }
  return 1;
}
