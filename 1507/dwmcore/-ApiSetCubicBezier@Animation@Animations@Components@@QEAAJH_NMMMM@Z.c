/*
 * XREFs of ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJH_NMMMM@Z @ 0x180154388
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180110FA0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180097930 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180154880 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Create@CubicBezierInterpolation@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x180157840 (-Create@CubicBezierInterpolation@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetCubicBezier(
        Components::Animations::Animation *this,
        int a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v8; // rdi
  int v9; // ebx
  struct Components::Animations::Interpolation *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v8 = a2;
  v9 = Components::Animations::CubicBezierInterpolation::Create(a4, a5, a6, a7, v11);
  if ( v9 >= 0 )
  {
    *((_BYTE *)v11[0] + 12) &= ~1u;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                            + 16LL)
                                                                                + 24 * v8 + 16);
    v9 = 0;
  }
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v11);
  return (unsigned int)v9;
}
