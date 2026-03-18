/*
 * XREFs of ?ApiSetLinear@Animation@Animations@Components@@QEAAJH_N@Z @ 0x1801545B4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180110FA0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180097930 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180154880 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Create@LinearInterpolation@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x180157904 (-Create@LinearInterpolation@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetLinear(Components::Animations::Animation *this, int a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  struct Components::Animations::Interpolation *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = a2;
  v4 = Components::Animations::LinearInterpolation::Create(&v6);
  if ( v4 >= 0 )
  {
    *((_BYTE *)v6 + 12) &= ~1u;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                            + 16LL)
                                                                                + 24 * v3 + 16);
    v4 = 0;
  }
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v6);
  return (unsigned int)v4;
}
