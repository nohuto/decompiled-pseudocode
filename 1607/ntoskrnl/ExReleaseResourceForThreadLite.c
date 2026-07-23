/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1400A6780
 * Callers:
 *     CcUnpinDataForThread @ 0x1405F90A4 (CcUnpinDataForThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
}
