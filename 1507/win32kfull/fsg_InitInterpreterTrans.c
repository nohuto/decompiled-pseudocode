/*
 * XREFs of fsg_InitInterpreterTrans @ 0x1C00AB238
 * Callers:
 *     fs__NewTransformation @ 0x1C00AAC30 (fs__NewTransformation.c)
 * Callees:
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 *     mth_PositiveSquare @ 0x1C00AB880 (mth_PositiveSquare.c)
 *     mth_IsMatrixStretched @ 0x1C00ABD04 (mth_IsMatrixStretched.c)
 */

__int64 __fastcall fsg_InitInterpreterTrans(
        _DWORD *a1,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int16 v12; // bp
  __int16 v13; // r14
  int *v14; // rsi
  __int64 result; // rax
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+A0h] [rbp+8h] BYREF

  v12 = a8;
  v13 = a7;
  v14 = a1 + 1;
  result = scl_InitializeScaling(
             a2,
             a1[12],
             (int)a1 + 4,
             *(unsigned __int16 *)a1,
             a3,
             a4,
             a5,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a6,
             (__int64)&v20);
  v17 = 0;
  if ( !(_DWORD)result )
  {
    v18 = v20;
    a1[10] = 0;
    if ( v18 > 0xFF )
      a1[14] = 255;
    else
      a1[14] = v18;
    v19 = mth_PositiveSquare(v14);
    a1[11] = v19;
    if ( v14[1] || v14[3] || *v14 < 0 || v14[4] < 0 )
      a1[14] |= 0x2000u;
    if ( !v19 )
    {
      if ( (*v14 || v14[4]) && (v14[3] || v14[1]) )
        a1[14] |= 0x400u;
      a1[14] |= 0x1000u;
      a1[10] = mth_IsMatrixStretched();
    }
    if ( v13 || v12 )
      v17 = 1;
    a1[15] = v17;
    return 0LL;
  }
  return result;
}
