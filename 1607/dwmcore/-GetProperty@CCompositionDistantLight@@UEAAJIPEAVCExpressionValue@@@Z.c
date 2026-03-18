/*
 * XREFs of ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801506C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::GetProperty(
        CCompositionDistantLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // eax

  v3 = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *((_OWORD *)this + 11);
    goto LABEL_6;
  }
  if ( v4 == 2 )
  {
    v5 = *((_DWORD *)this + 52);
    *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 50), (__m128)*((unsigned int *)this + 51)).m128_u64[0];
    *((_DWORD *)a3 + 2) = v5;
    *((_DWORD *)a3 + 16) = 52;
LABEL_6:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Eu);
  return v3;
}
