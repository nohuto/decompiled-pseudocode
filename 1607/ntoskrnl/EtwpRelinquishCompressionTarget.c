/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14022AC34
 * Callers:
 *     EtwpFreeCompression @ 0x1400875AC (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140229EA0 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x14022A434 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
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
