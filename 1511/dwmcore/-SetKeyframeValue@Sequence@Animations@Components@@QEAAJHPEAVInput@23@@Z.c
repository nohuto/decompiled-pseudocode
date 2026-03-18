/*
 * XREFs of ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180163448
 * Callers:
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x180161480 (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180161628 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801616F4 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801618EC (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x1801619BC (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180161A68 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180161B30 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x180161BDC (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeValue(
        Components::Animations::Sequence *this,
        int a2,
        struct Components::Animations::Input *a3)
{
  Components::Animations::RefPtr<Components::Animations::Input>::Assign(
    (Components::Animations::Input **)(*((_QWORD *)this + 2) + 8 * (3LL * a2 + 1)),
    a3);
  return 0LL;
}
