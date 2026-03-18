/*
 * XREFs of ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015B7D0
 * Callers:
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C015CBE0 (GreGetTextExtentExW.c)
 * Callees:
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  int v4; // eax
  bool v6; // zf
  __int64 v8; // rax
  int v10; // r8d
  _DWORD *v11; // r11
  __m128i v12; // xmm0
  __int64 v13; // rcx
  _DWORD *v14; // r11
  int *v15; // r11
  int v16; // eax
  int v17; // edx
  int v19; // [rsp+30h] [rbp+10h] BYREF

  v4 = *((_DWORD *)this + 16);
  v19 = 0;
  v6 = (v4 & 8) == 0;
  v8 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    bFToL((float)*((int *)this + 30) * *(float *)(*(_QWORD *)v8 + 404LL), &v19, 0);
    *v14 = v19;
    v13 = **((_QWORD **)this + 7);
    v12 = _mm_cvtsi32_si128(16 * *(_DWORD *)(v13 + 344));
  }
  else
  {
    bFToL((float)(*((_DWORD *)this + 28) - *((_DWORD *)this + 26)) * *(float *)(*(_QWORD *)v8 + 404LL), &v19, 0);
    *v11 = v19;
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 27) - *((_DWORD *)this + 29));
    v13 = **((_QWORD **)this + 7);
  }
  v19 &= v10;
  bFToL(_mm_cvtepi32_ps(v12).m128_f32[0] * *(float *)(v13 + 424), &v19, v10);
  v15[1] = v19;
  if ( gbDBCSCodePage )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 200LL) == 1 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)a2 + 488LL);
      if ( (v16 & 0x10) == 0 && (v16 & 4) == 0 && (v16 & 0x200000) != 0 && (a3 == 900 || a3 == 2700) )
      {
        v17 = *v15;
        *v15 = v15[1];
        v15[1] = v17;
      }
    }
  }
  return 1LL;
}
