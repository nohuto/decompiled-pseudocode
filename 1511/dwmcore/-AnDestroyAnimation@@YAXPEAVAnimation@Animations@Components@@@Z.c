/*
 * XREFs of ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180160B7C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18012B8D8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180160A20 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall AnDestroyAnimation(struct Components::Animations::Animation *a1)
{
  if ( a1 )
  {
    (*(void (__fastcall **)(struct Components::Animations::Animation *))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(struct Components::Animations::Animation *, __int64))(*(_QWORD *)a1 + 8LL))(a1, 1LL);
  }
}
