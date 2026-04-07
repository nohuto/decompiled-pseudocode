/*
 * XREFs of ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x18008AE14
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008B094 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // ebp
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  double v13; // xmm2_8
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-70h] BYREF

  v4 = *((_DWORD *)this + 14);
  if ( v4 <= 4 )
  {
    memset_0(v19, 0, sizeof(v19));
    v8 = 0LL;
    if ( v4 )
    {
      v9 = 0LL;
      do
      {
        if ( *((_DWORD *)this + 24) == (_DWORD)v8 )
        {
          *(double *)&v19[v9] = a3;
        }
        else
        {
          v10 = *((unsigned int *)this + 24);
          v11 = *((_QWORD *)this + 5);
          v12 = *((_QWORD *)this + 6);
          v13 = *(double *)(v11 + 8 * v10) - *(double *)(v12 + 8 * v10);
          if ( COERCE_DOUBLE(*(_QWORD *)&v13 & _xmm) >= 0.0001 )
            *(double *)&v19[v9] = (*(double *)(v9 * 8 + v11) - *(double *)(v9 * 8 + v12))
                                * (a2 - *(double *)(v12 + 8 * v10))
                                / v13
                                + *(double *)(v9 * 8 + v12);
          else
            v19[v9] = *(_QWORD *)(v9 * 8 + v12);
        }
        v8 = (unsigned int)(v8 + 1);
        ++v9;
      }
      while ( (unsigned int)v8 < v4 );
    }
    v14 = *((_QWORD *)this + 3);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)v14 + 72LL))(
           v14,
           v8,
           v19,
           v4,
           &v18);
    if ( v7 >= 0 )
    {
      v15 = *((_QWORD *)this + 2);
      if ( *((_QWORD *)this + 16) == -1LL )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v15 + 24LL))(
                *((_QWORD *)this + 2),
                *((_QWORD *)this + 4),
                v18);
      }
      else
      {
        *((_QWORD *)this + 16) = -1LL;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 48LL))(
                v15,
                *((_QWORD *)this + 4),
                v18,
                -1LL);
      }
      v7 = v16;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v7;
}
