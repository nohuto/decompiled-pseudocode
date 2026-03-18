/*
 * XREFs of ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524
 * Callers:
 *     _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultValue__ @ 0x1800BFBB0 (_dynamic_atexit_destructor_for__Components--Animations--Sequence--s_rpDefaultValue__.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x180161480 (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180161628 (-ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__An.c)
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x1801616F4 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x1801618EC (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x1801619BC (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180161A68 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180161B30 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x180161BDC (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016454C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1801647E8 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall Components::Animations::Input::Release(Components::Animations::Input *this)
{
  if ( (*((_DWORD *)this + 2))-- == 1 )
    (*(void (__fastcall **)(Components::Animations::Input *))(*(_QWORD *)this + 56LL))(this);
}
