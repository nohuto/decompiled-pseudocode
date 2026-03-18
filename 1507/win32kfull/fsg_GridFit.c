/*
 * XREFs of fsg_GridFit @ 0x1C00B56AC
 * Callers:
 *     fs__Contour @ 0x1C00B4F90 (fs__Contour.c)
 * Callees:
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 *     fsg_InitializeGlyphData @ 0x1C00B7F88 (fsg_InitializeGlyphData.c)
 *     scl_PostTransformGlyph @ 0x1C00FA5AC (scl_PostTransformGlyph.c)
 *     fsg_Embold @ 0x1C0116F9C (fsg_Embold.c)
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
        int a13)
{
  __int16 v13; // di
  int v14; // ebx
  __int64 v17; // rcx
  __int64 v19; // rbp
  _DWORD *v20; // rax
  unsigned __int16 v21; // cx
  unsigned int v22; // edx
  int v23; // eax
  unsigned __int16 v24; // dx
  int v25; // ecx
  _QWORD *v26; // rsi
  _DWORD *v27; // rdi
  unsigned int v28; // r15d
  __int64 i; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rdi
  int v34; // r12d
  unsigned int v35; // ebp
  __int64 v36; // r8
  __int16 v37; // ax
  int v38; // r15d
  __int64 v39; // r9
  int v40; // edi
  __int16 v41; // dx
  __int64 v42; // rcx
  unsigned int v43; // edi
  int v44; // r8d
  __int64 v46; // r10
  int v47; // [rsp+70h] [rbp-48h] BYREF
  _DWORD v48[17]; // [rsp+74h] [rbp-44h] BYREF
  int v51; // [rsp+D8h] [rbp+20h] BYREF

  v13 = *(_WORD *)(a2 + 16);
  v14 = 0;
  v48[0] = 0;
  v47 = 0;
  v17 = a6;
  v51 = 0;
  v19 = a2;
  **(_WORD **)(a6 + 56) = 0;
  **(_WORD **)(v17 + 64) = v13 - 1;
  v20 = a10;
  *(_WORD *)(v17 + 80) = 1;
  *v20 = 0;
  v21 = *(_WORD *)(a2 + 30);
  v22 = v21;
  if ( v21 <= 1u )
    v22 = 1;
  v23 = 20;
  if ( v22 < 0x14 )
  {
    v23 = v21;
    if ( v21 <= 1u )
      v23 = 1;
  }
  v24 = *(_WORD *)(v19 + 28);
  v25 = 3;
  if ( v24 > 3u )
    v25 = v24;
  v26 = a5;
  v27 = (_DWORD *)a5[3];
  v28 = v25 + v23 + 1;
  if ( v28 )
  {
    for ( i = v28; i; --i )
      *v27++ = 1;
  }
  v30 = (_DWORD *)v26[3];
  LODWORD(v31) = 0;
  if ( *v30 )
  {
LABEL_13:
    v32 = (_DWORD)v31 == v28;
  }
  else
  {
    while ( 1 )
    {
      v32 = (_DWORD)v31 == v28;
      if ( (unsigned int)v31 >= v28 )
        break;
      v31 = (unsigned int)(v31 + 1);
      if ( v30[v31] )
        goto LABEL_13;
    }
  }
  if ( v32 )
  {
    return 5132;
  }
  else
  {
    v30[(unsigned int)v31] = 0;
    v33 = v26[4] + 224LL * (unsigned int)v31;
    fsg_InitializeGlyphData(v33, v26, *(unsigned __int16 *)(a1 + 216), 0LL);
    v34 = a13;
    *(_DWORD *)(a4 + 408) = 10000000;
    if ( v33 )
    {
      while ( 1 )
      {
        v35 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64, _QWORD *, __int64, __int64, int, int *, _DWORD *, int *, int))fsg_ExecuteGlyph)(
                a1,
                v19,
                a3,
                v28,
                a4,
                v33,
                v26,
                a6,
                a7,
                a8,
                &v51,
                v48,
                &v47,
                v34);
        if ( v35 )
          break;
        *a10 |= v51;
        *a9 = *(_WORD *)(v33 + 160);
        v36 = *(_QWORD *)(v33 + 16);
        if ( v36 )
        {
          *(_QWORD *)(v33 + 16) = 0LL;
        }
        else
        {
          v36 = *(_QWORD *)(v33 + 8);
          *(_WORD *)v33 = 0;
          *(_DWORD *)(v26[3] + 4 * ((v33 - v26[4]) / 224)) = 1;
        }
        v37 = *(_WORD *)(v33 + 70);
        v33 = v36;
        v19 = a2;
        *a11 = v37;
        if ( !v36 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v35 = 0;
    }
    if ( !v35 )
    {
      v38 = a8;
      if ( a3[15] )
      {
        fsg_Embold((_DWORD)v26, a4, a8, a12, v34);
        if ( *a11 )
          *a11 += (2 * *(unsigned __int16 *)a3 - 1) / 100;
      }
      if ( (a3[14] & 0x2000) != 0 || *(_DWORD *)(a4 + 472) )
        scl_PostTransformGlyph(a4, v26[2], a3 + 1);
      v39 = v26[2];
      v40 = (a3[3] + 512) >> 10;
      if ( v34 )
        v40 *= 6;
      v41 = *(_WORD *)(*(_QWORD *)(v39 + 64) + 2LL * *(__int16 *)(v39 + 80) - 2);
      v42 = (unsigned __int16)(v41 + 1);
      v43 = v40 - *(_DWORD *)(*(_QWORD *)v39 + 4 * v42);
      v44 = ((a3[6] + 512) >> 10) - *(_DWORD *)(*(_QWORD *)(v39 + 8) + 4 * v42);
      if ( v38 && !*(_DWORD *)(a4 + 472) )
      {
        if ( v34 )
          v43 = (v43 + 2) & 0xFFFFFFFC;
        else
          v43 = (v43 + 32) & 0xFFFFFFC0;
      }
      if ( (v43 || v44) && v41 != -9 )
      {
        v46 = 0LL;
        do
        {
          ++v14;
          *(_DWORD *)(v46 + *(_QWORD *)v39) += v43;
          *(_DWORD *)(v46 + *(_QWORD *)(v39 + 8)) += v44;
          v46 += 4LL;
        }
        while ( v14 < (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v39 + 64) + 2LL * *(__int16 *)(v39 + 80) - 2) + 9) );
      }
    }
  }
  return v35;
}
