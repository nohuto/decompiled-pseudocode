/*
 * XREFs of free_0 @ 0x18002B1A6
 * Callers:
 *     ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x18002AAE4 (--1-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180053D54 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_0(void *Block)
{
  free(Block);
}
