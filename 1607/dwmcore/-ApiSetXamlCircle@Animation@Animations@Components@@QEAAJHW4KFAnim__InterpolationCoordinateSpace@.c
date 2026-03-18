/*
 * XREFs of ?ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x180192004
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlCircle(__int64 a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v8; // r8d
  __int64 v9; // rax
  void **v10; // rcx
  _DWORD *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = a2;
  v12[0] = 0LL;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((__int64 *)v12, 0LL);
        v4 = -2147024809;
        goto LABEL_18;
      }
      v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             24LL);
      if ( v9 )
      {
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        v10 = &Components::Animations::XamlCircleInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
LABEL_11:
        *(_DWORD *)(v9 + 8) = 1;
        *(_QWORD *)v9 = v10;
        goto LABEL_13;
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             24LL);
      if ( v9 )
      {
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        v10 = &Components::Animations::XamlCircleInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
        goto LABEL_11;
      }
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           24LL);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      v10 = &Components::Animations::XamlCircleInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
      goto LABEL_11;
    }
  }
  v9 = 0LL;
LABEL_13:
  if ( v9 )
  {
    v12[0] = (_DWORD *)v9;
    if ( a4 > 2 )
      a4 = 0;
    *(_DWORD *)(v9 + 16) = a4;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      (__int64 *)(**(_QWORD **)(a1 + 16) + 8 * (v5 + 2 * (v5 + 1))),
      v9);
  }
  else
  {
    v4 = -2147024882;
  }
LABEL_18:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(v12);
  return v4;
}
