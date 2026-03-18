/*
 * XREFs of ??9CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18001A074
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800199A0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 */

char __fastcall CExpressionValue::operator!=(_QWORD *a1, _QWORD *a2)
{
  int v2; // r8d
  char v3; // al
  char v4; // bl
  int v5; // r8d
  int v6; // r8d
  bool v7; // zf
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int64 v16; // r8

  v2 = *((_DWORD *)a1 + 16);
  if ( v2 != *((_DWORD *)a2 + 16) )
    return 1;
  v3 = *((_BYTE *)a1 + 68);
  if ( v3 != *((_BYTE *)a2 + 68) )
    return 1;
  v4 = 0;
  if ( v3 )
  {
    v5 = v2 - 17;
    if ( !v5 )
    {
      v7 = *(_BYTE *)a1 == *(_BYTE *)a2;
      goto LABEL_7;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = *(float *)a1 == *(float *)a2;
      goto LABEL_7;
    }
    v9 = v6 - 17;
    if ( !v9 )
    {
      v7 = *a1 == *a2;
      goto LABEL_7;
    }
    v10 = v9 - 17;
    if ( v10 )
    {
      v11 = v10 - 17;
      if ( v11 && (v12 = v11 - 1) != 0 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( *(float *)a1 != *(float *)a2
            || *((float *)a1 + 1) != *((float *)a2 + 1)
            || *((float *)a1 + 2) != *((float *)a2 + 2) )
          {
            return 1;
          }
          v7 = *((float *)a1 + 3) == *((float *)a2 + 3);
          goto LABEL_7;
        }
        v14 = v13 - 33;
        if ( v14 )
        {
          if ( v14 != 161 )
            return 1;
          v7 = memcmp_0(a1, a2, 0x40uLL) == 0;
LABEL_7:
          if ( v7 )
            return v4;
          return 1;
        }
        v15 = *a1 - *a2;
        if ( *a1 == *a2 )
        {
          v15 = a1[1] - a2[1];
          if ( !v15 )
            v15 = a1[2] - a2[2];
        }
      }
      else
      {
        v15 = *a1 - *a2;
        if ( *a1 == *a2 )
          v15 = a1[1] - a2[1];
      }
      v7 = v15 == 0;
      goto LABEL_7;
    }
    v16 = *a1 - *a2;
    if ( *a1 == *a2 )
      v16 = *((unsigned int *)a1 + 2) - (unsigned __int64)*((unsigned int *)a2 + 2);
    v7 = v16 == 0;
    goto LABEL_7;
  }
  return v4;
}
