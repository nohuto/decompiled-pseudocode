/*
 * XREFs of RemoveOverlaps @ 0x1C00D59D8
 * Callers:
 *     AlignRects @ 0x1C0056D78 (AlignRects.c)
 * Callees:
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     CenterRectangles @ 0x1C00D5638 (CenterRectangles.c)
 *     RemoveOverlap @ 0x1C00D5804 (RemoveOverlap.c)
 */

void __fastcall RemoveOverlaps(int *a1, unsigned int a2)
{
  __int64 v2; // rbp
  int *v4; // rbx
  int *v5; // rbp
  int *v6; // rdi
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  CenterRectangles(a1, a2);
  v4 = a1 + 4;
  v5 = &a1[4 * v2];
  while ( v4 < v5 )
  {
    v6 = a1;
    if ( a1 >= v4 )
    {
LABEL_6:
      v4 += 4;
    }
    else
    {
      while ( !(unsigned int)IntersectRect(v7, v6, v4) )
      {
        v6 += 4;
        if ( v6 >= v4 )
          goto LABEL_6;
      }
      v4 = RemoveOverlap(v6, v4, v7);
    }
  }
}
