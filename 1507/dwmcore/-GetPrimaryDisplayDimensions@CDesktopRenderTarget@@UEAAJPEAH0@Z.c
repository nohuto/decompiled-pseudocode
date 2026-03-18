/*
 * XREFs of ?GetPrimaryDisplayDimensions@CDesktopRenderTarget@@UEAAJPEAH0@Z @ 0x1800EB600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPrimaryDisplayDimensions(CDesktopRenderTarget *this, int *a2, int *a3)
{
  unsigned int v3; // ebx
  __m128i *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // xmm0_8

  v3 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    v5 = *(__m128i **)(**((_QWORD **)this + 1) + 80LL);
    v6 = v5[7].m128i_i64[0];
    v7 = _mm_srli_si128(v5[7], 8).m128i_u64[0];
    *a2 = v7 - v6;
    *a3 = HIDWORD(v7) - HIDWORD(v6);
  }
  else
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, -2003304307, 0x60Eu);
  }
  return v3;
}
