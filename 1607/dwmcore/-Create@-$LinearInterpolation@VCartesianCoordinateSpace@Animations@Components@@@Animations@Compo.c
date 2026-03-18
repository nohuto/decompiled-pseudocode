/*
 * XREFs of ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x1800AB988
 * Callers:
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@Z @ 0x18008623C (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@@.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
        _QWORD *a1)
{
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v3; // rax
  unsigned int v4; // ecx

  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v2 == WPF::ProcessHeapImpl::AllocClear )
    v3 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x10uLL);
  else
    v3 = (_QWORD *)v2(WPF::g_pProcessHeap, 16LL);
  v4 = 0;
  if ( v3 )
  {
    v3[1] = 0LL;
    *v3 = &Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
    *((_DWORD *)v3 + 2) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    *a1 = v3;
  else
    return (unsigned int)-2147024882;
  return v4;
}
