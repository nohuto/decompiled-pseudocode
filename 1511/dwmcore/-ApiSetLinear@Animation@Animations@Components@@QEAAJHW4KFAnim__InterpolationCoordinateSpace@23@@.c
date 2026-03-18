/*
 * XREFs of ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x1801617C8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800F7D98 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800BA634 (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180161C18 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1801627E8 (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetLinear(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  int v5; // r8d
  int v6; // ebx
  Components::Animations::Interpolation *v7; // rax
  void **v8; // rcx
  Components::Animations::Interpolation *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = a2;
  if ( !a3 )
  {
    v6 = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(&v10);
    if ( v6 < 0 )
      goto LABEL_17;
    v7 = v10;
    goto LABEL_16;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    v7 = (Components::Animations::Interpolation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                    WPF::g_pProcessHeap,
                                                    16LL);
    if ( v7 )
    {
      v8 = &Components::Animations::LinearInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
      goto LABEL_7;
    }
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
  if ( v5 == 1 )
  {
    v7 = (Components::Animations::Interpolation *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                    WPF::g_pProcessHeap,
                                                    16LL);
    if ( v7 )
    {
      v8 = &Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
LABEL_7:
      *((_DWORD *)v7 + 2) = 1;
      *(_QWORD *)v7 = v8;
LABEL_9:
      if ( !v7 )
      {
        v6 = -2147024882;
        goto LABEL_17;
      }
      v10 = v7;
LABEL_16:
      Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
        24 * v4 + 16 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL),
        v7);
      v6 = 0;
      goto LABEL_17;
    }
    goto LABEL_8;
  }
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(&v10, 0LL);
  v6 = -2147024809;
LABEL_17:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v10);
  return (unsigned int)v6;
}
