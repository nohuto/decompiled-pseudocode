/*
 * XREFs of ?UpdateOpacity@CImage@@MEAAJXZ @ 0x180071230
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CImage::UpdateOpacity(CImage *this)
{
  CResource *v1; // rax
  unsigned int v2; // ebx
  int v3; // eax
  __m128i si128; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CResource *)*((_QWORD *)this + 37);
  v2 = 0;
  if ( v1 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    si128.m128i_i64[1] = *((_QWORD *)this + 22);
    v3 = CResource::Send(v1, &si128, 0x10u);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x11Eu);
  }
  return v2;
}
