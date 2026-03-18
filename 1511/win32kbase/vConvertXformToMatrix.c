/*
 * XREFs of vConvertXformToMatrix @ 0x1C0014000
 * Callers:
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014FDC (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0015098 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 */

__int64 __fastcall vConvertXformToMatrix(_DWORD *a1, _DWORD *a2)
{
  EFLOAT *v2; // rbx
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r11
  _DWORD *v7; // rdx
  __int64 v8; // r11
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // r11
  EFLOAT *v12; // r11
  __int64 v13; // r11
  __int64 v14; // r11

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = a1[4];
  a2[5] = a1[5];
  if ( !(unsigned int)bFToL(a1, a2 + 6, 6LL) )
    *v3 = 0;
  if ( !(unsigned int)bFToL(v4, v6 + 28, v5) )
    *v7 = 0;
  v9 = *(float *)(v8 + 16) == *(float *)v2;
  *(_DWORD *)(v8 + 32) = 32;
  if ( v9 && (unsigned int)EFLOAT::bIsZero(v2) )
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
