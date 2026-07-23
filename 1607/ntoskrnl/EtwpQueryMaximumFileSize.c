/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x140087188
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x140491EFC (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 292);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
