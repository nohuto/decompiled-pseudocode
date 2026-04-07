/*
 * XREFs of ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x18008D7D4
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008DA04 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // edi
  int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  double v13; // xmm2_8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v21[4]; // [rsp+38h] [rbp-60h] BYREF

  v4 = *((_DWORD *)this + 14);
  if ( v4 <= 4 )
  {
    memset_0(v21, 0, sizeof(v21));
    v8 = 0;
    if ( v4 )
    {
      v9 = 0LL;
      do
      {
        if ( *((_DWORD *)this + 24) == v8 )
        {
          *(double *)&v21[v9] = a3;
        }
        else
        {
          v10 = *((unsigned int *)this + 24);
          v11 = *((_QWORD *)this + 5);
          v12 = *((_QWORD *)this + 6);
          v13 = *(double *)(v11 + 8 * v10) - *(double *)(v12 + 8 * v10);
          if ( COERCE_DOUBLE(*(_QWORD *)&v13 & _xmm) >= 0.0001 )
            *(double *)&v21[v9] = (*(double *)(v9 * 8 + v11) - *(double *)(v9 * 8 + v12))
                                * (a2 - *(double *)(v12 + 8 * v10))
                                / v13
                                + *(double *)(v9 * 8 + v12);
          else
            v21[v9] = *(_QWORD *)(v9 * 8 + v12);
        }
        ++v8;
        ++v9;
      }
      while ( v8 < v4 );
    }
    v14 = *((_QWORD *)this + 3);
    v20 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)v14 + 72LL))(
           v14,
           &v20,
           v21,
           v4,
           &v20);
    if ( v7 >= 0 )
    {
      v15 = *((_QWORD *)this + 2);
      v16 = v20;
      v17 = *((_QWORD *)this + 4);
      if ( *((_QWORD *)this + 16) == -1LL )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, v17, v20);
      }
      else
      {
        *((_QWORD *)this + 16) = -1LL;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, v17, v16);
      }
      v7 = v18;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v7;
}
