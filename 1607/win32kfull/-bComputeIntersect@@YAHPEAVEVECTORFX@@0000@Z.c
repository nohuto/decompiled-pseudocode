/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0015568
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00135B4 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 */

_BOOL8 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  _DWORD *v5; // r8
  _DWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r11
  struct EVECTORFX *v10; // rcx
  int v11; // edx
  int v12; // r9d
  _BOOL8 result; // rax
  float v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch] BYREF

  v14 = (float)((float)*(int *)a4 * (float)*((int *)a2 + 1)) + (float)((float)*(int *)a2 * (float)-*((_DWORD *)a4 + 1));
  result = 0;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v14) )
  {
    if ( (unsigned int)bFToL((unsigned int)(*v5 - *v6), &v14, 6LL) )
    {
      if ( (unsigned int)bFToL(v7, &v15, v8) )
      {
        if ( (unsigned int)(LODWORD(v14) + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v15 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v10 = a5;
          v11 = LODWORD(v14) + *v9;
          v12 = v15 + v9[1];
          *(_DWORD *)a5 = v11;
          *((_DWORD *)v10 + 1) = v12;
          if ( (unsigned int)(v11 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v12 + 0x3FFFFFFF) <= 0x7FFFFFFD )
            return 1;
        }
      }
    }
  }
  return result;
}
