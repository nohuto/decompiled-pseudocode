/*
 * XREFs of fsg_GridFit @ 0x1C00C7CF8
 * Callers:
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     fsg_InitializeGlyphData @ 0x1C00C79F0 (fsg_InitializeGlyphData.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 *     scl_PostTransformGlyph @ 0x1C01259BC (scl_PostTransformGlyph.c)
 *     fsg_Embold @ 0x1C02DF058 (fsg_Embold.c)
 */

__int64 __fastcall fsg_GridFit(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _WORD *a9,
        _DWORD *a10,
        _WORD *a11,
        int a12,
        int a13,
        int a14)
{
  __int16 v14; // di
  int v15; // ebx
  __int64 v18; // rcx
  __int64 v20; // rbp
  _DWORD *v21; // rax
  unsigned __int16 v22; // cx
  unsigned int v23; // edx
  int v24; // eax
  unsigned __int16 v25; // dx
  int v26; // ecx
  _QWORD *v27; // rsi
  _DWORD *v28; // rdi
  unsigned int v29; // r15d
  __int64 i; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rdi
  int v35; // r12d
  unsigned int v36; // ebp
  __int64 v37; // r8
  __int16 v38; // ax
  int v39; // r15d
  __int64 v40; // r10
  int v41; // edi
  int v42; // r8d
  __int16 v43; // dx
  __int64 v44; // rcx
  unsigned int v45; // edi
  int v46; // r8d
  __int64 v48; // r9
  int v49; // [rsp+70h] [rbp-48h] BYREF
  _DWORD v50[17]; // [rsp+74h] [rbp-44h] BYREF
  int v53; // [rsp+D8h] [rbp+20h] BYREF

  v14 = *(_WORD *)(a2 + 16);
  v15 = 0;
  v50[0] = 0;
  v49 = 0;
  v18 = a6;
  v53 = 0;
  v20 = a2;
  **(_WORD **)(a6 + 56) = 0;
  **(_WORD **)(v18 + 64) = v14 - 1;
  v21 = a10;
  *(_WORD *)(v18 + 80) = 1;
  *v21 = 0;
  v22 = *(_WORD *)(a2 + 30);
  v23 = v22;
  if ( v22 <= 1u )
    v23 = 1;
  v24 = 20;
  if ( v23 < 0x14 )
  {
    v24 = v22;
    if ( v22 <= 1u )
      v24 = 1;
  }
  v25 = *(_WORD *)(v20 + 28);
  v26 = 3;
  if ( v25 > 3u )
    v26 = v25;
  v27 = a5;
  v28 = (_DWORD *)a5[3];
  v29 = v26 + v24 + 1;
  if ( v29 )
  {
    for ( i = v29; i; --i )
      *v28++ = 1;
  }
  v31 = (_DWORD *)v27[3];
  LODWORD(v32) = 0;
  if ( *v31 )
  {
LABEL_13:
    v33 = (_DWORD)v32 == v29;
  }
  else
  {
    while ( 1 )
    {
      v33 = (_DWORD)v32 == v29;
      if ( (unsigned int)v32 >= v29 )
        break;
      v32 = (unsigned int)(v32 + 1);
      if ( v31[v32] )
        goto LABEL_13;
    }
  }
  if ( v33 )
  {
    return 5132;
  }
  else
  {
    v31[(unsigned int)v32] = 0;
    v34 = v27[4] + 224LL * (unsigned int)v32;
    fsg_InitializeGlyphData(v34, (__int64)v27, *(_WORD *)(a1 + 216), 0);
    v35 = a13;
    *(_DWORD *)(a4 + 408) = 10000000;
    if ( v34 )
    {
      while ( 1 )
      {
        v36 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64, _QWORD *, __int64, __int64, int, int *, _DWORD *, int *, int))fsg_ExecuteGlyph)(
                a1,
                v20,
                a3,
                v29,
                a4,
                v34,
                v27,
                a6,
                a7,
                a8,
                &v53,
                v50,
                &v49,
                v35);
        if ( v36 )
          break;
        *a10 |= v53;
        *a9 = *(_WORD *)(v34 + 160);
        v37 = *(_QWORD *)(v34 + 16);
        if ( v37 )
        {
          *(_QWORD *)(v34 + 16) = 0LL;
        }
        else
        {
          v37 = *(_QWORD *)(v34 + 8);
          *(_WORD *)v34 = 0;
          *(_DWORD *)(v27[3] + 4 * ((v34 - v27[4]) / 224)) = 1;
        }
        v38 = *(_WORD *)(v34 + 70);
        v34 = v37;
        v20 = a2;
        *a11 = v38;
        if ( !v37 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v36 = 0;
    }
    if ( !v36 )
    {
      v39 = a8;
      if ( a3[15] )
      {
        fsg_Embold((_DWORD)v27, a4, a8, a12, v35);
        if ( *a11 )
          *a11 += (2 * *(unsigned __int16 *)a3 - 1) / 100;
      }
      if ( (a3[14] & 0x2000) != 0 || *(_DWORD *)(a4 + 472) )
        scl_PostTransformGlyph(a4, v27[2], a3 + 1);
      v40 = v27[2];
      v41 = (a3[3] + 512) >> 10;
      v42 = (a3[6] + 512) >> 10;
      if ( v35 )
      {
        v41 *= 6;
        if ( a14 )
          v42 *= 5;
      }
      v43 = *(_WORD *)(*(_QWORD *)(v40 + 64) + 2LL * (*(__int16 *)(v40 + 80) - 1));
      v44 = (unsigned __int16)(v43 + 1);
      v45 = v41 - *(_DWORD *)(*(_QWORD *)v40 + 4 * v44);
      v46 = v42 - *(_DWORD *)(*(_QWORD *)(v40 + 8) + 4 * v44);
      if ( v39 && !*(_DWORD *)(a4 + 472) )
      {
        if ( v35 )
          v45 = (v45 + 2) & 0xFFFFFFFC;
        else
          v45 = (v45 + 32) & 0xFFFFFFC0;
      }
      if ( (v45 || v46) && v43 != -9 )
      {
        v48 = 0LL;
        do
        {
          ++v15;
          *(_DWORD *)(v48 + *(_QWORD *)v40) += v45;
          *(_DWORD *)(v48 + *(_QWORD *)(v40 + 8)) += v46;
          v48 += 4LL;
        }
        while ( v15 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v40 + 64) + 2LL * (*(__int16 *)(v40 + 80) - 1)) + 9) );
      }
    }
  }
  return v36;
}
