/*
 * XREFs of EvaluateSpline @ 0x1C00B01D0
 * Callers:
 *     fsc_FillGlyph @ 0x1C00AFD48 (fsc_FillGlyph.c)
 *     EvaluateSpline @ 0x1C00B01D0 (EvaluateSpline.c)
 * Callees:
 *     fsc_CalcLine @ 0x1C00AF9CC (fsc_CalcLine.c)
 *     EvaluateSpline @ 0x1C00B01D0 (EvaluateSpline.c)
 *     fsc_CheckEndPoint @ 0x1C00B04F8 (fsc_CheckEndPoint.c)
 *     fsc_CalcSpline @ 0x1C00B05F4 (fsc_CalcSpline.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
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
  int v17; // eax
  int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // ebx
  __int64 v21; // r10
  int v22; // r11d
  __int64 v23; // r10
  int v24; // eax
  int v25; // r11d
  __int64 v26; // r10
  int v27; // eax
  int v28; // r11d
  unsigned int v29; // ebx
  __int64 v30; // r10
  int v31; // r11d
  __int64 v32; // r10
  int v33; // eax
  int v34; // r11d
  __int64 v35; // r10
  int v36; // eax
  int v37; // r11d
  int v38; // r9d
  int v39; // r8d
  signed int v40; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+80h] [rbp+8h]
  int v42; // [rsp+80h] [rbp+8h]
  int v43; // [rsp+80h] [rbp+8h]
  signed int v44; // [rsp+88h] [rbp+10h]
  int v45; // [rsp+88h] [rbp+10h]
  int v46; // [rsp+90h] [rbp+18h]

  v46 = a3;
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
        v40 = a5 - v8;
        v44 = a6 - a4;
        v14 = a4 - a2;
        v15 = a4 - a2 < 0;
        if ( a4 - a2 > 0 )
        {
          if ( v13 < 0 )
            goto LABEL_22;
          v15 = v14 < 0;
        }
        if ( !v15 || v13 <= 0 )
          break;
LABEL_22:
        v29 = v14 - v13;
        CompDiv((unsigned int)(v14 - v13), v14 * (__int64)v11);
        v46 += CompDiv(v29, v30 * v40);
        v33 = CompDiv(v29, v32 * (v46 - v31));
        v42 = v34 + v33;
        v36 = CompDiv(v29, v35 * v35);
        a4 = a2 + v36;
        result = EvaluateSpline(a1, a2, v37, a2 + v36, v42, a2 + v36, a7);
        if ( (_DWORD)result )
          return result;
        a1 = v42;
        a2 = a4;
        v8 = v46;
      }
      v16 = v11 < 0;
      if ( v11 > 0 )
      {
        if ( v12 < 0 )
          goto LABEL_19;
        v16 = v11 < 0;
      }
      if ( !v16 || v12 <= 0 )
        break;
LABEL_19:
      v20 = v11 - v12;
      CompDiv((unsigned int)(v11 - v12), v11 * (__int64)v14);
      a4 += CompDiv(v20, v21 * v44);
      v24 = CompDiv(v20, v23 * (a4 - v22));
      v41 = v25 + v24;
      v27 = CompDiv(v20, v26 * v26);
      v8 = a1 + v27;
      v46 = a1 + v27;
      result = EvaluateSpline(a1, a2, a1 + v27, v28, a1 + v27, v41, a7);
      if ( (_DWORD)result )
        return result;
      a2 = v41;
      a1 = v8;
    }
    v17 = a6 - a2;
    v18 = a5 - a1;
    if ( (int)(a5 - a1) < 0 )
      v18 = a1 - a5;
    if ( v17 < 0 )
      v17 = a2 - a6;
    if ( v18 <= 3200 && v17 <= 3200 )
      break;
    v38 = (a2 + a4) >> 1;
    v39 = (a1 + v8) >> 1;
    v8 = (int)(a5 + v8) >> 1;
    a4 = (int)(a6 + a4) >> 1;
    v46 = v8;
    v45 = (v8 + v39) >> 1;
    v43 = (v38 + a4) >> 1;
    result = EvaluateSpline(a1, a2, v39, v38, v45, v43, a7);
    if ( (_DWORD)result )
      return result;
    a2 = v43;
    a1 = v45;
  }
  result = fsc_CheckEndPoint(a5, a6, a7);
  if ( !(_DWORD)result )
  {
    if ( (v8 - a1) * v44 == v40 * (a4 - a2) )
      return fsc_CalcLine(a1, a2, a5, a6, a7);
    else
      return fsc_CalcSpline(a1, a2, v8, a4, a5, a6, a7);
  }
  return result;
}
