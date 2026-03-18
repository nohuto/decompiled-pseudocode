/*
 * XREFs of ?SetD2DEffectProperties@CGaussianBlurEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18001A280
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetD2DEffectProperties(CGaussianBlurEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         (char *)this + 192,
         4);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           1LL,
           0LL,
           (char *)this + 196,
           4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x18u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             (char *)this + 200,
             4);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1Du);
    }
  }
  return v5;
}
