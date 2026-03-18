/*
 * XREFs of KdpCopyMemoryChunks @ 0x1406AD60C
 * Callers:
 *     KdpSetCommonState @ 0x1401C22D0 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x1406AAF6C (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x1406AB290 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x1406AB478 (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x1406AB528 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1406AB758 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x1406AB864 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x1406AC8F0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1406ACA94 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x1406ACB20 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x1406AD3A0 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1406AD478 (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x1406AD514 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x1406ADEAC (KdpPrintString.c)
 *     KdpPromptString @ 0x1406ADF84 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x1406AE498 (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1401DE338 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(
        char *BaseAddress,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  ULONG i; // ebx
  unsigned int v12; // edx

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
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)BaseAddress) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(BaseAddress, a2, i, i, a5) < 0 )
      break;
    BaseAddress += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
