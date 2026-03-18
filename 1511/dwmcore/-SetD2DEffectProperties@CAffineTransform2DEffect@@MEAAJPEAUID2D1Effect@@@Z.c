/*
 * XREFs of ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x180134DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CAffineTransform2DEffect::SetD2DEffectProperties(
        CAffineTransform2DEffect *this,
        struct ID2D1Effect *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 (__fastcall *v13)(struct ID2D1Effect *, __int64, _QWORD, _DWORD *, int); // rbx
  float v14; // xmm0_4
  int v15; // eax
  int v16; // eax
  _DWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  float v19; // [rsp+38h] [rbp-30h]
  float v20; // [rsp+3Ch] [rbp-2Ch]
  float v21; // [rsp+40h] [rbp-28h]
  float v22; // [rsp+44h] [rbp-24h]

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 192,
         4);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 196,
           4);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = *((float *)this + 57);
      v8 = *((float *)this + 50);
      v9 = *((float *)this + 51);
      v10 = *((float *)this + 53);
      v11 = *((float *)this + 58);
      v12 = *(_QWORD *)a2;
      v19 = *((float *)this + 52);
      v13 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _DWORD *, int))(v12 + 72);
      *(float *)v18 = v8;
      *(float *)&v18[1] = v9;
      v20 = v10;
      v14 = *((float *)this + 58);
      v21 = (float)((float)((float)(v11 * v19) + (float)(v7 * v8)) + *((float *)this + 54)) - v7;
      v22 = (float)((float)((float)(v14 * v10) + (float)(v7 * v9)) + *((float *)this + 55)) - *((float *)this + 58);
      v15 = v13(a2, 2LL, 0LL, v18, 24);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 224,
                4);
        v5 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x82u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x81u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x55u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x54u);
  }
  return v5;
}
