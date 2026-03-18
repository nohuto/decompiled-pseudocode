/*
 * XREFs of KdpSysWriteControlSpace @ 0x1406AD478
 * Callers:
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi

  v5 = a1;
  *a5 = 0;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && KiProcessorBlock[v5] && a2 == 2 )
    return KdpCopyMemoryChunks(a3, 4, (__int64)a5);
  else
    return 3221225473LL;
}
