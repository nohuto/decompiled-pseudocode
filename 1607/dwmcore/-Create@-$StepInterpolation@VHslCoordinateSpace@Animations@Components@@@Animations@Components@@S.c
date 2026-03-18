/*
 * XREFs of ?Create@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x180192D20
 * Callers:
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x1800861A0 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4KFAnim__InterpolationCoordinateSpace@23@HHH.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::Create(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float **a6)
{
  int v6; // r14d
  unsigned __int8 v7; // r12
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  unsigned __int8 v11; // r15
  float *v12; // rax
  float *v13; // rsi

  v6 = a1;
  v7 = a4;
  v8 = a3;
  if ( a1 < 1 )
    v6 = 1;
  v9 = a2;
  v10 = 0;
  if ( a2 >= 0 )
  {
    if ( a2 > v6 )
      v9 = v6;
  }
  else
  {
    v9 = 0;
  }
  if ( a3 >= v9 )
  {
    if ( a3 > v6 )
      v8 = v6;
  }
  else
  {
    v8 = v9;
  }
  v11 = a5;
  if ( v8 - v9 == 1 && a4 && a5 )
  {
LABEL_18:
    v11 = 0;
    goto LABEL_19;
  }
  if ( v8 == v9 )
  {
    if ( !a4 && !a5 )
      goto LABEL_23;
    v7 = 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( v7 )
    ++v9;
  if ( v11 )
    --v8;
LABEL_23:
  v12 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   40LL);
  v13 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x28uLL);
    *((_DWORD *)v13 + 2) = 1;
    *(_QWORD *)v13 = &Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    *((_DWORD *)v13 + 7) = v7;
    *((_DWORD *)v13 + 8) = v11;
    v13[9] = 1.0 / (float)(v8 - v9 + 1);
    *((_DWORD *)v13 + 4) = v6;
    *((_DWORD *)v13 + 5) = v9;
    *((_DWORD *)v13 + 6) = v8;
    *a6 = v13;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
