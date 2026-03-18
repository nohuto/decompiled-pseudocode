/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x140125CC4
 * Callers:
 *     CcUnpinDataForThread @ 0x14064FCC4 (CcUnpinDataForThread.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14074C3D4 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
}
