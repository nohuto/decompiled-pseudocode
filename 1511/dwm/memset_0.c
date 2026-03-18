/*
 * XREFs of memset_0 @ 0x140003F66
 * Callers:
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140001D00 (--0CDwmAppHost@@QEAA@XZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140002020 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002170 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002410 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     McGenControlCallbackV2 @ 0x140002C30 (McGenControlCallbackV2.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140005440 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
