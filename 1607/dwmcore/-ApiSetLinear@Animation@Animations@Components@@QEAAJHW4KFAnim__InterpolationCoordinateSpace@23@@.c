/*
 * XREFs of ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x18008623C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1800AB988 (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetLinear(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  void ***v6; // rax
  int v8; // r8d
  void **v9; // rcx
  void ***v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = a2;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(&v10, 0LL);
        v5 = -2147024809;
        goto LABEL_5;
      }
      v6 = (void ***)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       16LL);
      if ( v6 )
      {
        v6[1] = 0LL;
        v9 = &Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
LABEL_11:
        *((_DWORD *)v6 + 2) = 1;
        *v6 = v9;
LABEL_13:
        if ( !v6 )
        {
          v5 = -2147024882;
          goto LABEL_5;
        }
        v10 = v6;
        goto LABEL_4;
      }
    }
    else
    {
      v6 = (void ***)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       16LL);
      if ( v6 )
      {
        v6[1] = 0LL;
        v9 = &Components::Animations::LinearInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
        goto LABEL_11;
      }
    }
    v6 = 0LL;
    goto LABEL_13;
  }
  v5 = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(&v10);
  if ( v5 >= 0 )
  {
    v6 = v10;
LABEL_4:
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      **(_QWORD **)(a1 + 16) + 8 * (v4 + 2 * (v4 + 1)),
      v6);
    v5 = 0;
  }
LABEL_5:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v10);
  return (unsigned int)v5;
}
