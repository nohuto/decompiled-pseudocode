/*
 * XREFs of fsc_CheckEndPoint @ 0x1C00A884C
 * Callers:
 *     fsc_FillGlyph @ 0x1C00A809C (fsc_FillGlyph.c)
 *     EvaluateSpline @ 0x1C00A8524 (EvaluateSpline.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C00A6840 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C00A6CF4 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_CheckEndPoint(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r9d
  int v5; // ecx
  __int64 result; // rax

  v3 = dword_1C0323BF8;
  v5 = dword_1C0323BFC;
  if ( (dword_1C0323BFC & 0x3F) == 0x20 )
  {
    if ( dword_1C0323BF8 == a1 && dword_1C0323BFC == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0323C00 = a1;
      dword_1C0323C04 = a2;
    }
    else
    {
      result = CheckHorizTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
      v5 = dword_1C0323BFC;
      v3 = dword_1C0323BF8;
    }
  }
  if ( (a3 & 2) != 0 || (v3 & 0x3F) != 0x20 )
    goto LABEL_4;
  if ( v3 == a1 && v5 == a2 )
    return 0LL;
  if ( State[0] == 0x7FFFFFFF )
  {
    dword_1C0323C00 = a1;
    dword_1C0323C04 = a2;
    goto LABEL_4;
  }
  result = CheckVertTopology(a1, a2, a3);
  if ( !(_DWORD)result )
  {
    v5 = dword_1C0323BFC;
    v3 = dword_1C0323BF8;
LABEL_4:
    State[0] = v3;
    dword_1C0323BF4 = v5;
    dword_1C0323BF8 = a1;
    dword_1C0323BFC = a2;
    return 0LL;
  }
  return result;
}
