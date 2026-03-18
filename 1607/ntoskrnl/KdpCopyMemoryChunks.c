/*
 * XREFs of KdpCopyMemoryChunks @ 0x1406F2F08
 * Callers:
 *     KdpSetCommonState @ 0x140083548 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x14064E858 (KdSystemDebugControl.c)
 *     KdpPrintString @ 0x1406F2000 (KdpPrintString.c)
 *     KdLogDbgPrint @ 0x1406F2230 (KdLogDbgPrint.c)
 *     KdpCreateRemoteFile @ 0x1406F2438 (KdpCreateRemoteFile.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1406F2934 (KdpReportLoadSymbolsStateChange.c)
 *     KdpSendWaitContinue @ 0x1406F2AAC (KdpSendWaitContinue.c)
 *     KdpReadVirtualMemory @ 0x1406F2E54 (KdpReadVirtualMemory.c)
 *     KdpSysReadControlSpace @ 0x1406F343C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1406F3668 (KdpSysWriteControlSpace.c)
 *     KdpReportCommandStringStateChange @ 0x1406F3CE0 (KdpReportCommandStringStateChange.c)
 *     KdpReadPhysicalMemory @ 0x1406F3F6C (KdpReadPhysicalMemory.c)
 *     KdpFillMemory @ 0x1406F5320 (KdpFillMemory.c)
 *     KdpRestoreBreakPointEx @ 0x1406F558C (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x1406F5BD0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1406F5D74 (KdpWritePhysicalMemory.c)
 *     KdpCopyCodeStream @ 0x1406F5FA4 (KdpCopyCodeStream.c)
 *     KdpPromptString @ 0x1406F65C4 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140083624 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(char *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v13; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v13 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v13 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
