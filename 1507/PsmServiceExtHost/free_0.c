/*
 * XREFs of free_0 @ 0x180024406
 * Callers:
 *     ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x180023D40 (--1-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004D158 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_0(void *Block)
{
  free(Block);
}
