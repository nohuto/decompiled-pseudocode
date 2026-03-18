/*
 * XREFs of ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C
 * Callers:
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@VDwm__Rendering__AsyncAnimationCallback@23@@Z @ 0x1800866A8 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4 (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ??1?$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x1800AB6E4 (--1-$SmartPtr@VValue@Animations@Components@@@Animations@Components@@QEAA@XZ.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890 (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1800AB988 (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Sequence::Create(struct Components::Animations::Sequence **a1)
{
  Components::Animations::Sequence *v2; // rbx
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v7; // rax
  int v8; // edi
  struct Components::Animations::ConstantInput *v10; // rax
  struct Components::Animations::ConstantInput *v11; // rcx
  struct Components::Animations::ConstantInput *v13; // [rsp+58h] [rbp+38h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp+40h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  if ( !Components::Animations::Sequence::s_rpDefaultValue )
  {
    v13 = 0LL;
    v8 = Components::Animations::ConstantInput::CreateInstance(&v13);
    if ( v8 < 0 )
    {
      v11 = v13;
      if ( v13 )
      {
        if ( (*((_DWORD *)v13 + 2))-- == 1 )
          (*(void (__fastcall **)(struct Components::Animations::ConstantInput *))(*(_QWORD *)v11 + 48LL))(v11);
      }
      goto LABEL_14;
    }
    v10 = v13;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_DWORD *)v10 + 3) = 18;
    Components::Animations::Sequence::s_rpDefaultValue = v10;
  }
  if ( !Components::Animations::Sequence::s_rpDefaultInterpolation )
  {
    v13 = 0LL;
    v8 = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(&v13);
    if ( v8 < 0 )
    {
      Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v13);
      goto LABEL_14;
    }
    Components::Animations::Sequence::s_rpDefaultInterpolation = (__int64)v13;
    v13 = 0LL;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Release(&v13);
  }
  v3 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x110uLL);
  else
    v4 = (_DWORD *)v3(WPF::g_pProcessHeap, 272LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x110uLL);
    v5[3] = 8;
    *(_QWORD *)v5 = v5 + 4;
    v5[2] = 0;
    *((_QWORD *)v5 + 29) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v2 = (Components::Animations::Sequence *)v5;
  if ( v5
    && ((v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL),
         v6 != WPF::ProcessHeapImpl::AllocClear)
      ? (v7 = (_QWORD *)v6(WPF::g_pProcessHeap, 32LL))
      : (v7 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL)),
        !v7 ? (v7 = 0LL) : (_QWORD *)(*v7 = 0LL, v7[1] = 0LL, v7[2] = 0LL, v7[3] = 0LL),
        (v14 = v7) != 0LL) )
  {
    *((_QWORD *)v5 + 29) = v7;
    v2 = 0LL;
    v5[64] = 0;
    v5[65] = 1065353216;
    *a1 = (struct Components::Animations::Sequence *)v5;
    v8 = 0;
    v14 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_14:
  Components::Animations::SmartPtr<Components::Animations::Value>::~SmartPtr<Components::Animations::Value>(&v14);
  if ( v2 )
    Components::Animations::Sequence::`scalar deleting destructor'(v2);
  return (unsigned int)v8;
}
