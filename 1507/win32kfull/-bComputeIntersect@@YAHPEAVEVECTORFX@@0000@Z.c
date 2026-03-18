/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C01133AC
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

_BOOL8 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  _DWORD *v9; // r8
  _DWORD *v10; // r11
  float v11; // xmm5_4
  char v12; // r8
  float v13; // xmm4_4
  _DWORD *v14; // r11
  struct EVECTORFX *v15; // rcx
  int v16; // edx
  int v17; // r9d
  _BOOL8 result; // rax
  float v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+44h] [rbp+Ch] BYREF

  v5 = (float)*(int *)a4;
  v6 = (float)-*((_DWORD *)a4 + 1);
  v7 = (float)*((int *)a2 + 1);
  v8 = (float)(v5 * v7) + (float)((float)*(int *)a2 * v6);
  v19 = v8;
  result = 0;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v19) )
  {
    if ( (unsigned int)bFToL(
                         v11
                       * (float)((float)((float)((float)(v9[1] - v10[1]) * v5) + (float)((float)(*v9 - *v10) * v6)) / v8),
                         &v19,
                         6) )
    {
      if ( (unsigned int)bFToL(v7 * v13, &v20, v12) )
      {
        if ( (unsigned int)(LODWORD(v19) + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v20 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v15 = a5;
          v16 = LODWORD(v19) + *v14;
          v17 = v20 + v14[1];
          *(_DWORD *)a5 = v16;
          *((_DWORD *)v15 + 1) = v17;
          if ( (unsigned int)(v16 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v17 + 0x3FFFFFFF) <= 0x7FFFFFFD )
            return 1;
        }
      }
    }
  }
  return result;
}
