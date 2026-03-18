/*
 * XREFs of ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180153B94
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1801104D4 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180110FA0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x180153A60 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall AnDestroyAnimation(struct Components::Animations::Animation *a1)
{
  if ( a1 )
  {
    (*(void (__fastcall **)(struct Components::Animations::Animation *))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(struct Components::Animations::Animation *, __int64))(*(_QWORD *)a1 + 8LL))(a1, 1LL);
  }
}
