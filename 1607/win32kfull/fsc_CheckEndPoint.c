/*
 * XREFs of fsc_CheckEndPoint @ 0x1C00C02E4
 * Callers:
 *     fsc_FillGlyph @ 0x1C00BFBAC (fsc_FillGlyph.c)
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 * Callees:
 *     CheckVertTopology @ 0x1C00BD6E0 (CheckVertTopology.c)
 *     CheckHorizTopology @ 0x1C00BD794 (CheckHorizTopology.c)
 */

__int64 __fastcall fsc_CheckEndPoint(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r9d
  int v5; // ecx
  __int64 result; // rax

  v3 = dword_1C03292F8;
  v5 = dword_1C03292FC;
  if ( (dword_1C03292FC & 0x3F) == 0x20 )
  {
    if ( dword_1C03292F8 == a1 && dword_1C03292FC == a2 )
      return 0LL;
    if ( State[0] == 0x7FFFFFFF )
    {
      dword_1C0329300 = a1;
      dword_1C0329304 = a2;
    }
    else
    {
      result = CheckHorizTopology(a1, a2, a3);
      if ( (_DWORD)result )
        return result;
      v5 = dword_1C03292FC;
      v3 = dword_1C03292F8;
    }
  }
  if ( (a3 & 2) != 0 || (v3 & 0x3F) != 0x20 )
    goto LABEL_4;
  if ( v3 == a1 && v5 == a2 )
    return 0LL;
  if ( State[0] == 0x7FFFFFFF )
  {
    dword_1C0329300 = a1;
    dword_1C0329304 = a2;
    goto LABEL_4;
  }
  result = CheckVertTopology(a1, a2, a3);
  if ( !(_DWORD)result )
  {
    v5 = dword_1C03292FC;
    v3 = dword_1C03292F8;
LABEL_4:
    State[0] = v3;
    dword_1C03292F4 = v5;
    dword_1C03292F8 = a1;
    dword_1C03292FC = a2;
    return 0LL;
  }
  return result;
}
