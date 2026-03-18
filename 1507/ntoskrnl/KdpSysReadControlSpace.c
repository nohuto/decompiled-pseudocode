/*
 * XREFs of KdpSysReadControlSpace @ 0x14072D444
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x14072B248 (KdpReadControlSpace.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(unsigned int a1, unsigned __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  int v5; // edx

  *a5 = 0;
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225473LL;
  if ( !KiProcessorBlock[a1] )
    return 3221225473LL;
  if ( a2 > 3 )
    return 3221225473LL;
  if ( (_DWORD)a2 && (v5 = a2 - 1) != 0 && (unsigned int)(v5 - 1) > 1 )
    return 3221225473LL;
  else
    return KdpCopyMemoryChunks(a3, 5, (__int64)a5);
}
