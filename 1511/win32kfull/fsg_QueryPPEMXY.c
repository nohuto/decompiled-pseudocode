/*
 * XREFs of fsg_QueryPPEMXY @ 0x1C00A339C
 * Callers:
 *     fs__NewTransformation @ 0x1C00A26A4 (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_QueryPPEMXY(__int64 a1, _DWORD *a2, _WORD *a3, _WORD *a4, __int16 *a5)
{
  int v5; // eax
  __int16 v6; // r10
  int v7; // eax
  bool v8; // sf
  __int64 result; // rax
  bool v10; // cc

  v5 = a2[4];
  v6 = 0;
  if ( !v5 && !a2[2] )
  {
    v7 = a2[1];
    v8 = v7 < 0;
    if ( v7 > 0 )
    {
      if ( (int)a2[5] > 0 )
        goto LABEL_5;
      v8 = v7 < 0;
    }
    if ( v8 && (int)a2[5] < 0 )
    {
      v6 = 2;
      goto LABEL_5;
    }
LABEL_11:
    v6 = 4;
    goto LABEL_5;
  }
  if ( a2[1] || a2[5] )
    goto LABEL_11;
  v10 = v5 <= 0;
  if ( v5 < 0 )
  {
    if ( (int)a2[2] > 0 )
    {
      v6 = 1;
      goto LABEL_5;
    }
    v10 = v5 <= 0;
  }
  if ( v10 )
    goto LABEL_11;
  v6 = 3;
  if ( (int)a2[2] >= 0 )
    goto LABEL_11;
LABEL_5:
  *a5 = v6;
  *a3 = (unsigned int)(*(_DWORD *)(a1 + 376) + 0x8000) >> 16;
  result = (unsigned int)((*(_DWORD *)(a1 + 380) + 0x8000) >> 16);
  *a4 = (unsigned int)(*(_DWORD *)(a1 + 380) + 0x8000) >> 16;
  return result;
}
