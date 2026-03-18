/*
 * XREFs of ?Create@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x1800B2160
 * Callers:
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x1800861A0 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float **a6)
{
  int v6; // r15d
  unsigned __int8 v7; // r12
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  unsigned __int8 v11; // r14
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *, size_t); // rax
  float *v13; // rax
  float *v14; // rsi

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a1 < 1 )
    v6 = 1;
  v10 = 0;
  if ( a2 < 0 )
  {
    v9 = 0;
  }
  else if ( a2 > v6 )
  {
    v9 = v6;
  }
  if ( a3 < v9 )
  {
    v8 = v9;
  }
  else if ( a3 > v6 )
  {
    v8 = v6;
  }
  v11 = a5;
  if ( v8 - v9 == 1 && a4 && a5 )
  {
LABEL_32:
    v11 = 0;
    goto LABEL_12;
  }
  if ( v8 == v9 )
  {
    if ( !a4 && !a5 )
      goto LABEL_16;
    v7 = 0;
    goto LABEL_32;
  }
LABEL_12:
  if ( v7 )
    ++v9;
  if ( v11 )
    --v8;
LABEL_16:
  v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v12 == WPF::ProcessHeapImpl::AllocClear )
    v13 = (float *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x28uLL);
  else
    v13 = (float *)v12(WPF::g_pProcessHeap, 40LL);
  v14 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, 0x28uLL);
    *((_DWORD *)v14 + 2) = 1;
    *(_QWORD *)v14 = &Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    *((_DWORD *)v14 + 7) = v7;
    *((_DWORD *)v14 + 8) = v11;
    v14[9] = 1.0 / (float)(v8 - v9 + 1);
    *((_DWORD *)v14 + 4) = v6;
    *((_DWORD *)v14 + 5) = v9;
    *((_DWORD *)v14 + 6) = v8;
    *a6 = v14;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
