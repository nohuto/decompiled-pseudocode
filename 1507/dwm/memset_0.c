/*
 * XREFs of memset_0 @ 0x140003EB6
 * Callers:
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140001D90 (--0CDwmAppHost@@QEAA@XZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020B0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1400024A0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     McGenControlCallbackV2 @ 0x140002B80 (McGenControlCallbackV2.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x1400053C0 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
