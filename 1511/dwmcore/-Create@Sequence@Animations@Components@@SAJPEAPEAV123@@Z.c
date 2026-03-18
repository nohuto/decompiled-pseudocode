/*
 * XREFs of ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016454C
 * Callers:
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x180160DF0 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ??1?$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1801608C0 (--1-$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ??1?$SmartPtr@V?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180160C48 (--1-$SmartPtr@V-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1801627E8 (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18016549C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 */

__int64 __fastcall Components::Animations::Sequence::Create(struct Components::Animations::Sequence **a1)
{
  int v2; // ebx
  Components::Animations::Input *v3; // rax
  __int64 v4; // rax
  Components::Animations::Sequence *v5; // rsi
  _QWORD *v6; // rax
  unsigned int v7; // edx
  Components::Animations::Input *v9; // [rsp+58h] [rbp+38h] BYREF
  _QWORD *v10; // [rsp+60h] [rbp+40h] BYREF
  Components::Animations::Sequence *v11; // [rsp+68h] [rbp+48h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !Components::Animations::Sequence::s_rpDefaultValue )
  {
    v9 = 0LL;
    v2 = Components::Animations::ConstantInput::CreateInstance(&v9);
    if ( v2 < 0 )
    {
      if ( v9 )
        Components::Animations::Input::Release(v9);
      goto LABEL_20;
    }
    v3 = v9;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_DWORD *)v3 + 3) = 18;
    Components::Animations::Sequence::s_rpDefaultValue = v3;
  }
  if ( !Components::Animations::Sequence::s_rpDefaultInterpolation )
  {
    v9 = 0LL;
    v2 = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create((__int64 *)&v9);
    if ( v2 < 0 )
    {
      Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v9);
      goto LABEL_20;
    }
    Components::Animations::Sequence::s_rpDefaultInterpolation = (__int64)v9;
    v9 = 0LL;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v9);
  }
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         264LL);
  v5 = (Components::Animations::Sequence *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = v4 + 32;
    *(_DWORD *)(v4 + 28) = 8;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 224) = 0LL;
    *(_QWORD *)(v4 + 232) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v11 = v5;
  if ( v5
    && ((v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          32LL)) == 0LL
      ? (v6 = 0LL)
      : (_QWORD *)(*v6 = 0LL, v6[1] = 0LL, v6[2] = 0LL, v6[3] = 0LL),
        (v10 = v6) != 0LL) )
  {
    *((_QWORD *)v5 + 29) = v6;
    v2 = 0;
    *a1 = v5;
    v10 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v2 = -2147024882;
  }
LABEL_20:
  Components::Animations::SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>::~SmartPtr<Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>>(&v10);
  Components::Animations::SmartPtr<Components::Animations::Sequence>::~SmartPtr<Components::Animations::Sequence>(
    &v11,
    v7);
  return (unsigned int)v2;
}
