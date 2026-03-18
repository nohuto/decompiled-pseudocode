/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x1400F4C28
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x1404CB248 (EtwpFlushBufferToLogfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 308);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
