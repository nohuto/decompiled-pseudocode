/*
 * XREFs of ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78
 * Callers:
 *     ?ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x180018F68 (-ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x180086070 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x1801919D0 (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180191A88 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x180191B4C (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180191C28 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180191CE0 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180191DB4 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x1800AB7F4 (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeValue(
        Components::Animations::Sequence *this,
        int a2,
        struct Components::Animations::Input *a3)
{
  Components::Animations::RefPtr<Components::Animations::Input>::Assign(*(_QWORD *)this + 8 * (3LL * a2 + 1), a3);
  return 0LL;
}
