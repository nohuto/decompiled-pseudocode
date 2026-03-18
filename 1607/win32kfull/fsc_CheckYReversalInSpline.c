/*
 * XREFs of fsc_CheckYReversalInSpline @ 0x1C00C1AB8
 * Callers:
 *     fsc_CheckYReversalInSpline @ 0x1C00C1AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C00C3070 (fsc_MeasureGlyph.c)
 * Callees:
 *     fsc_CheckYReversalInSpline @ 0x1C00C1AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_CheckYReversal @ 0x1C00C1C40 (fsc_CheckYReversal.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall fsc_CheckYReversalInSpline(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // edi
  int i; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  bool v19; // sf
  bool v20; // sf
  __int64 result; // rax
  unsigned int v22; // ebp
  __int64 v23; // r10
  int v24; // r11d
  __int64 v25; // r10
  int v26; // eax
  int v27; // r11d
  int v28; // ebx
  __int64 v29; // r10
  int v30; // eax
  int v31; // r11d
  __int64 v32; // r10
  int v33; // r11d
  __int64 v34; // r10
  int v35; // eax
  int v36; // r11d
  __int64 v37; // r10
  int v38; // eax
  int v39; // r11d
  int v44; // [rsp+B0h] [rbp+38h]
  unsigned int v45; // [rsp+B8h] [rbp+40h]

  v12 = a8;
  for ( i = a5; ; i = v44 )
  {
    while ( 1 )
    {
      v14 = a7 - i;
      v15 = a9 - a7;
      v16 = v12;
      v17 = a10 - a8;
      v18 = v16 - a6;
      v19 = v18 < 0;
      if ( v18 > 0 )
      {
        if ( v17 < 0 )
          break;
        v19 = v18 < 0;
      }
      if ( v19 && v17 > 0 )
        break;
      v20 = v14 < 0;
      if ( v14 > 0 )
      {
        if ( v15 < 0 )
          goto LABEL_15;
        v20 = v14 < 0;
      }
      if ( !v20 || v15 <= 0 )
        return fsc_CheckYReversal(a1, a6, a10, a2, a3, a4);
LABEL_15:
      v22 = v14 - v15;
      if ( v14 == v15 )
        return 4870LL;
      CompDiv(v22, v14 * (__int64)v18);
      a8 += CompDiv(v22, v23 * v17);
      v12 = a8;
      v26 = CompDiv(v22, v25 * (a8 - v24));
      v28 = v27 + v26;
      v30 = CompDiv(v22, v29 * v29);
      a7 = a5 + v30;
      result = fsc_CheckYReversalInSpline(a1, a2, a3, a4, a5, a6, a5 + v30, v31, a5 + v30, v28);
      if ( (_DWORD)result )
        return result;
      i = a7;
      a6 = v28;
      a5 = a7;
    }
    v45 = v18 - v17;
    if ( v18 == v17 )
      break;
    CompDiv((unsigned int)(v18 - v17), v18 * (__int64)v14);
    a7 += CompDiv(v45, v32 * v15);
    v35 = CompDiv(v45, v34 * (a7 - v33));
    v44 = v36 + v35;
    v38 = CompDiv(v45, v37 * v37);
    v12 = a6 + v38;
    a8 = a6 + v38;
    result = fsc_CheckYReversalInSpline(a1, a2, a3, a4, a5, a6, v39, a6 + v38, v44, a6 + v38);
    if ( (_DWORD)result )
      return result;
    a6 = v12;
    a5 = v44;
  }
  return 4870LL;
}
