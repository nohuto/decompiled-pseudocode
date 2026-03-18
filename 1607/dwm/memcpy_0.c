/*
 * XREFs of memcpy_0 @ 0x140003EF6
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001640 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140004FC0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
