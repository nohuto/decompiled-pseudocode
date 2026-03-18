/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x18001A730
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7)
{
  __int64 (__fastcall *v11)(__int64, __int128 *, __int64); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int128 v16; // [rsp+40h] [rbp-68h] BYREF

  *a6 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 144LL);
  v16 = *a4;
  v12 = v11(a1, &v16, a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x16Au);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _OWORD *, __int64))(*(_QWORD *)a1 + 136LL))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x173u);
  }
  return v13;
}
