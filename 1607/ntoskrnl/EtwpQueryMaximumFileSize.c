/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x140085898
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x14049146C (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
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
