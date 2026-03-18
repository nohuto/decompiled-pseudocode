/*
 * XREFs of vConvertXformToMatrix @ 0x1C0025560
 * Callers:
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0027BB0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0027C6C (-bIs1@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(float *a1, float *a2)
{
  float *v2; // rbx
  float v3; // xmm0_4
  _DWORD *v4; // rdx
  char v5; // r8
  __int64 v6; // r11
  _DWORD *v7; // rdx
  __int64 v8; // r11
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // r11
  EFLOAT *v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11

  v2 = a2 + 5;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  v3 = a1[4];
  a2[4] = v3;
  a2[5] = a1[5];
  if ( !(unsigned int)bFToL(v3, (_DWORD *)a2 + 6, 6) )
    *v4 = 0;
  if ( !(unsigned int)bFToL(*v2, (_DWORD *)(v6 + 28), v5) )
    *v7 = 0;
  v9 = *(float *)(v8 + 16) == *v2;
  *(_DWORD *)(v8 + 32) = 32;
  if ( v9 && (unsigned int)EFLOAT::bIsZero((EFLOAT *)v2) )
    *(_DWORD *)(v8 + 32) = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(v8 + 4));
  if ( (_DWORD)result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(v11 + 8));
    if ( (_DWORD)result )
    {
      *((_DWORD *)v12 + 8) |= 1u;
      result = EFLOAT::bIs1(v12);
      if ( (_DWORD)result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(v13 + 12));
        if ( (_DWORD)result )
          *(_DWORD *)(v14 + 32) |= 2u;
      }
    }
  }
  return result;
}
