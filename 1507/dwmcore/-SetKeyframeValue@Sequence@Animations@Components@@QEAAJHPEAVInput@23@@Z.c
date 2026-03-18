/*
 * XREFs of ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180155778
 * Callers:
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180154414 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801544E0 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180154624 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x1801546D0 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180154798 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x180154844 (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
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
