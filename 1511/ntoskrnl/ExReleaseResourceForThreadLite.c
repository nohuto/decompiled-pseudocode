/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1400E84D0
 * Callers:
 *     CcUnpinDataForThread @ 0x1405DB67C (CcUnpinDataForThread.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x1406C9788 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int64 v2; // r8
  ULONG_PTR v3; // r9

  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId, v2, v3);
}
