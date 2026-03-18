/*
 * XREFs of ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180135314
 * Callers:
 *     ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180142C30 (-GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateLinearGradientBrush(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        _QWORD *a4,
        __int64 *a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-31h] BYREF
  int v19; // [rsp+68h] [rbp-21h] BYREF
  __int128 v20; // [rsp+6Ch] [rbp-1Dh]
  float v21; // [rsp+7Ch] [rbp-Dh]
  __int128 v22; // [rsp+80h] [rbp-9h]

  v17 = 0LL;
  v9 = 1;
  if ( a6 == 2 )
    v9 = 2;
  v10 = *(_QWORD *)(a1 + 40);
  v20 = *a2;
  v11 = *a3;
  v19 = 0;
  v22 = v11;
  *(_QWORD *)&v11 = *a4;
  v21 = FLOAT_1_0;
  v12 = *a5;
  v18[0] = v11;
  v18[1] = v12;
  v13 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, unsigned int, int, _DWORD, _DWORD, __int64 *))(*(_QWORD *)v10 + 512LL))(
          v10,
          &v19,
          2LL,
          v9,
          v9,
          1,
          0,
          0,
          &v17);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(**(_QWORD **)(a1 + 40) + 80LL))(
            *(_QWORD *)(a1 + 40),
            v18,
            a7,
            v17,
            a8);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x8FBu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8F6u);
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v14;
}
