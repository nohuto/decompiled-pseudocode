/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14022AE08
 * Callers:
 *     EtwpFreeCompression @ 0x140085CBC (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x14022A074 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x14022A608 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x14022A834 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400ED1E0 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 960) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 960), 5u);
    *(_QWORD *)(a1 + 960) = 0LL;
  }
}
