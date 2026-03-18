/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8
 * Callers:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ @ 0x1C0019AD0 (-ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C0019D60 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001A4E0 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0016EE8 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *this)
{
  CLegacyTokenBuffer::Reset(this);
  Win32FreePool(this);
  return this;
}
