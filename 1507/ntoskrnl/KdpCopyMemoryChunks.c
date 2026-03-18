/*
 * XREFs of KdpCopyMemoryChunks @ 0x14072D658
 * Callers:
 *     KdpSetCommonState @ 0x1401FDFFC (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x14072AFB0 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x14072B2D8 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x14072B4C0 (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x14072B570 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x14072B7A0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x14072B8AC (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x14072C9AC (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x14072CB50 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x14072CBDC (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x14072D444 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x14072D4EC (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x14072D560 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x14072DEF8 (KdpPrintString.c)
 *     KdpPromptString @ 0x14072DFD8 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x14072E4EC (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140223948 (MmDbgCopyMemory.c)
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
