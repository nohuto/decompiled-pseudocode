/*
 * XREFs of KdpSysWriteControlSpace @ 0x1406F3668
 * Callers:
 *     KdSystemDebugControl @ 0x14064E858 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1406F2AAC (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x1406F2F08 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rdi
  __int64 v9; // rdx

  v6 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v9 = KiProcessorBlock[v6];
  if ( !v9 || a2 != 2 )
    return 3221225473LL;
  if ( a4 > 0xE0 )
    a4 = 224;
  return KdpCopyMemoryChunks(a3, v9 + 64, a4, 0, 4, a5);
}
