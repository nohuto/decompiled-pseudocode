/*
 * XREFs of ??1?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAA@XZ @ 0x1800E23F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CWatermarkStack<MilVisualRenderParameter *,8,2,4>::~CWatermarkStack<MilVisualRenderParameter *,8,2,4>(
        _QWORD *a1)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a1[2]);
}
