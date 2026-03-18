/*
 * XREFs of EvaluateSpline @ 0x1C00C0038
 * Callers:
 *     fsc_FillGlyph @ 0x1C00BFBAC (fsc_FillGlyph.c)
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 * Callees:
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 *     fsc_CheckEndPoint @ 0x1C00C02E4 (fsc_CheckEndPoint.c)
 *     fsc_CalcLine @ 0x1C00C03E0 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C00C075C (fsc_CalcSpline.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall EvaluateSpline(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7)
{
  int v8; // ebx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  bool v15; // sf
  bool v16; // sf
  __int64 result; // rax
  unsigned int v18; // ebx
  __int64 v19; // r10
  int v20; // r11d
  __int64 v21; // r10
  int v22; // eax
  int v23; // r11d
  __int64 v24; // r10
  int v25; // eax
  int v26; // r11d
  unsigned int v27; // ebx
  __int64 v28; // r10
  int v29; // r11d
  __int64 v30; // r10
  int v31; // eax
  int v32; // r11d
  __int64 v33; // r10
  int v34; // eax
  int v35; // r11d
  int v36; // r9d
  int v37; // r8d
  unsigned int v38; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+80h] [rbp+8h]
  unsigned int v42; // [rsp+88h] [rbp+10h]
  int v43; // [rsp+88h] [rbp+10h]
  int v44; // [rsp+90h] [rbp+18h]

  v44 = a3;
  v8 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v8 - a1;
        v12 = a5 - v8;
        v13 = a6 - a4;
        v38 = a5 - v8;
        v42 = a6 - a4;
        v14 = a4 - a2;
        v15 = a4 - a2 < 0;
        if ( a4 - a2 > 0 )
        {
          if ( v13 < 0 )
            goto LABEL_18;
          v15 = v14 < 0;
        }
        if ( !v15 || v13 <= 0 )
          break;
LABEL_18:
        v27 = v14 - v13;
        CompDiv((unsigned int)(v14 - v13), v14 * (__int64)v11);
        v44 += CompDiv(v27, v28 * (int)v38);
        v31 = CompDiv(v27, v30 * (v44 - v29));
        v40 = v32 + v31;
        v34 = CompDiv(v27, v33 * v33);
        a4 = a2 + v34;
        result = EvaluateSpline(a1, a2, v35, a2 + v34, v40, a2 + v34, a7);
        if ( (_DWORD)result )
          return result;
        a1 = v40;
        a2 = a4;
        v8 = v44;
      }
      v16 = v11 < 0;
      if ( v11 > 0 )
      {
        if ( v12 < 0 )
          goto LABEL_15;
        v16 = v11 < 0;
      }
      if ( !v16 || v12 <= 0 )
        break;
LABEL_15:
      v18 = v11 - v12;
      CompDiv((unsigned int)(v11 - v12), v11 * (__int64)v14);
      a4 += CompDiv(v18, v19 * (int)v42);
      v22 = CompDiv(v18, v21 * (a4 - v20));
      v39 = v23 + v22;
      v25 = CompDiv(v18, v24 * v24);
      v8 = a1 + v25;
      v44 = a1 + v25;
      result = EvaluateSpline(a1, a2, a1 + v25, v26, a1 + v25, v39, a7);
      if ( (_DWORD)result )
        return result;
      a2 = v39;
      a1 = v8;
    }
    if ( (int)abs32(a5 - a1) <= 3200 && (int)abs32(a6 - a2) <= 3200 )
      break;
    v36 = (a2 + a4) >> 1;
    v37 = (a1 + v8) >> 1;
    v8 = (int)(a5 + v8) >> 1;
    a4 = (int)(a6 + a4) >> 1;
    v44 = v8;
    v43 = (v8 + v37) >> 1;
    v41 = (v36 + a4) >> 1;
    result = EvaluateSpline(a1, a2, v37, v36, v43, v41, a7);
    if ( (_DWORD)result )
      return result;
    a2 = v41;
    a1 = v43;
  }
  result = fsc_CheckEndPoint(a5, a6, a7);
  if ( !(_DWORD)result )
  {
    if ( (v8 - a1) * v42 == v38 * (a4 - a2) )
      return fsc_CalcLine(a1, a2, a5, a6, a7);
    else
      return fsc_CalcSpline(a1, a2, v8, a4, a5, a6, a7);
  }
  return result;
}
