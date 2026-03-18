/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180106DD0
 * Callers:
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E04C (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1801377A0 (--1CTargetMapEntry@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1);
}
