/*
 * XREFs of ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x18014D130
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // edi
  char v4; // r11
  unsigned int v5; // ebx
  bool v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax

  v3 = a2[3];
  v4 = 1;
  v5 = a1[1];
  v6 = v3 >= v5 && a2[1] <= a1[3] && *a2 <= *a1 && a1[2] <= a2[2];
  if ( a2[2] < *a1 || (v7 = *a2, *a2 > a1[2]) || a2[1] > v5 || a1[3] > v3 )
  {
    v4 = 0;
  }
  else if ( v7 < *a1 )
  {
    goto LABEL_15;
  }
  v7 = *a1;
LABEL_15:
  *a3 = v7;
  if ( !v6 || (v8 = a2[1], v8 >= a1[1]) )
    v8 = a1[1];
  a3[1] = v8;
  if ( !v4 || (v9 = a2[2], v9 <= a1[2]) )
    v9 = a1[2];
  a3[2] = v9;
  if ( !v6 || (result = a2[3], (unsigned int)result <= a1[3]) )
    result = a1[3];
  a3[3] = result;
  return result;
}
