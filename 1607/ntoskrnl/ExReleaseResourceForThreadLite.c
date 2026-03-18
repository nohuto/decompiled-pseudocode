/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1400A8208
 * Callers:
 *     CcUnpinDataForThread @ 0x1405F8FF0 (CcUnpinDataForThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
}
