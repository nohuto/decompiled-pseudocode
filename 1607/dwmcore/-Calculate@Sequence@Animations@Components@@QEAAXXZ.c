/*
 * XREFs of ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Compute@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180005A30 (-Compute@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x180019380 (-GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z.c)
 *     ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019ED0 (-Compute@-$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Compute@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180031C50 (-Compute@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1800836F0 (-Compute@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::Calculate(Components::Animations::Sequence *this)
{
  char v1; // r8
  int v3; // r9d
  int v4; // ecx
  double v5; // xmm6_8
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  Components::Animations::StartingValueInput *v11; // rcx
  __int64 (__fastcall *v12)(Components::Animations::ConstantInput *__hidden, struct Components::Animations::Value *); // rax
  Components::Animations::ConstantInput *v13; // rcx
  __int64 (__fastcall *v14)(Components::Animations::ConstantInput *__hidden, struct Components::Animations::Value *); // rax
  float *v15; // rcx
  __int64 v16; // r8
  void (__fastcall *v17)(float *, __int128 *, __int64, __int128 *, __int128 *, __int128 *); // rax
  _OWORD *v18; // rax
  int *v19; // r11
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  _DWORD *v23; // r10
  int Value; // eax
  int v25; // eax
  __int128 v26; // [rsp+40h] [rbp-39h] BYREF
  __int128 v27; // [rsp+50h] [rbp-29h]
  __int128 v28; // [rsp+60h] [rbp-19h] BYREF
  __int128 v29; // [rsp+70h] [rbp-9h]
  __int128 v30; // [rsp+80h] [rbp+7h] BYREF
  __int128 v31; // [rsp+90h] [rbp+17h]

  v1 = *((_BYTE *)this + 264);
  v3 = *((_DWORD *)this + 56);
  if ( (v1 & 8) != 0 )
    v3 = *((_DWORD *)this + 61) - v3;
  v4 = v3 - *((_DWORD *)this + 62);
  v5 = 0.0;
  if ( *((_BYTE *)this + 228) && v4 >= 0 && v4 <= *((_DWORD *)this + 63) && (v1 & 0x10) == 0 )
    goto LABEL_7;
  if ( (float)((float)*((int *)this + 56) / (float)*((int *)this + 55)) == 0.0 )
  {
    if ( (v1 & 8) != 0 )
      goto LABEL_41;
    goto LABEL_44;
  }
  if ( (float)((float)*((int *)this + 56) / (float)*((int *)this + 55)) == 1.0 )
  {
    if ( (v1 & 8) == 0 )
    {
LABEL_41:
      v25 = *((_DWORD *)this + 2) - 1;
      *((_DWORD *)this + 63) = 0;
      *((_DWORD *)this + 60) = v25;
      *((_DWORD *)this + 62) = *((_DWORD *)this + 61);
      *((_BYTE *)this + 264) = v1 & 0xEF;
      goto LABEL_7;
    }
LABEL_44:
    *((_DWORD *)this + 60) = 0;
    *((_BYTE *)this + 264) = v1 & 0xEF;
    *((_QWORD *)this + 31) = 0LL;
    goto LABEL_7;
  }
  v19 = *(int **)this;
  v20 = 0;
  v21 = *((_DWORD *)this + 2) - 1;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  v22 = *v19;
  if ( v21 > 0 )
  {
    v23 = v19 + 6;
    while ( *v23 <= v22 + v3 )
    {
      ++v20;
      v23 += 6;
      if ( v20 >= v21 )
        goto LABEL_33;
    }
    *((_DWORD *)this + 60) = v20;
    *((_DWORD *)this + 62) = v19[6 * v20] - v22;
    *((_DWORD *)this + 63) = *v23 - v19[6 * v20];
  }
LABEL_33:
  v4 = v3 - *((_DWORD *)this + 62);
  *((_BYTE *)this + 264) = v1 & 0xEF;
LABEL_7:
  v6 = *((_DWORD *)this + 63);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( v6 <= 0 )
  {
    if ( *((_DWORD *)this + 60) )
      *(_QWORD *)&v5 = LODWORD(FLOAT_1_0);
  }
  else
  {
    *(_QWORD *)&v5 = COERCE_UNSIGNED_INT((float)v4);
    *(float *)&v5 = *(float *)&v5 / (float)v6;
  }
  v7 = *((int *)this + 60);
  v8 = *(_QWORD *)this;
  if ( (int)v7 >= *((_DWORD *)this + 2) - 1 )
  {
    v10 = v8 + 24 * v7;
    v9 = v8 + 24LL * ((int)v7 - 1);
  }
  else
  {
    v9 = v8 + 24 * v7;
    v10 = v8 + 24LL * ((int)v7 + 1);
  }
  v11 = *(Components::Animations::StartingValueInput **)(v9 + 8);
  v12 = *(__int64 (__fastcall **)(Components::Animations::ConstantInput *__hidden, struct Components::Animations::Value *))(*(_QWORD *)v11 + 16LL);
  if ( v12 == Components::Animations::ConstantInput::GetValue )
  {
    v26 = *((_OWORD *)v11 + 1);
    v27 = *((_OWORD *)v11 + 2);
  }
  else
  {
    if ( v12 == Components::Animations::StartingValueInput::GetValue )
      Value = Components::Animations::StartingValueInput::GetValue(v11, (struct Components::Animations::Value *)&v26);
    else
      Value = v12(v11, (struct Components::Animations::Value *)&v26);
    if ( Value < 0 )
      return;
  }
  v13 = *(Components::Animations::ConstantInput **)(v10 + 8);
  v14 = *(__int64 (__fastcall **)(Components::Animations::ConstantInput *__hidden, struct Components::Animations::Value *))(*(_QWORD *)v13 + 16LL);
  if ( v14 == Components::Animations::ConstantInput::GetValue )
  {
    v28 = *((_OWORD *)v13 + 1);
    v29 = *((_OWORD *)v13 + 2);
  }
  else if ( (int)v14(v13, (struct Components::Animations::Value *)&v28) < 0 )
  {
    return;
  }
  v15 = *(float **)(v10 + 16);
  v16 = *(unsigned int *)(*(_QWORD *)(v9 + 8) + 12LL);
  v17 = **(void (__fastcall ***)(float *, __int128 *, __int64, __int128 *, __int128 *, __int128 *))v15;
  if ( (char *)v17 == (char *)Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      (__int64)v15,
      *(float *)&v5,
      v16,
      (__int64)&v26,
      (__int64)&v28,
      &v30);
  }
  else if ( (char *)v17 == (char *)Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      (__int64)v15,
      v5,
      v16,
      (__int64)&v26,
      (__int64)&v28,
      &v30);
  }
  else if ( (char *)v17 == (char *)Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      v15,
      *(float *)&v5,
      v16,
      (__int64)&v26,
      (__int64)&v28,
      &v30);
  }
  else if ( (char *)v17 == (char *)Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute )
  {
    Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
      v15,
      (__int64)Components::Animations::XamlInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute,
      v16,
      (__int64)&v26,
      (__int64)&v28,
      (__int64)&v30);
  }
  else
  {
    v17(v15, &v28, v16, &v26, &v28, &v30);
  }
  if ( *((_BYTE *)this + 229) )
    *((_BYTE *)this + 264) &= ~2u;
  v18 = (_OWORD *)*((_QWORD *)this + 29);
  *v18 = v30;
  v18[1] = v31;
}
