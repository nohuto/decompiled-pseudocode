/*
 * XREFs of KdpSysWriteControlSpace @ 0x14072D4EC
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(unsigned int a1, __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  *a5 = 0;
  if ( a1 < (unsigned int)KeNumberProcessors_0 && KiProcessorBlock[a1] && a2 == 2 )
    return KdpCopyMemoryChunks(a3, 4, (__int64)a5);
  else
    return 3221225473LL;
}
