/*
 * XREFs of CenterRectangles @ 0x1C00D5638
 * Callers:
 *     RemoveGaps @ 0x1C00D56D8 (RemoveGaps.c)
 *     RemoveOverlaps @ 0x1C00D59D8 (RemoveOverlaps.c)
 * Callees:
 *     UnionRect @ 0x1C00D5368 (UnionRect.c)
 */

void __fastcall CenterRectangles(_OWORD *a1, int a2)
{
  int *v2; // r8
  int *v4; // rbx
  int v5; // edi
  __int64 v6; // r8
  int v7; // ecx
  int v8; // r8d
  _DWORD *v9; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int *)(a1 + 1);
  v10 = *a1;
  v4 = (int *)&a1[a2];
  v5 = a2;
  while ( v2 < v4 )
  {
    UnionRect((__int64)&v10, (int *)&v10, v2);
    v2 = (int *)(v6 + 16);
  }
  if ( v5 )
  {
    v7 = -DWORD1(v10) - (HIDWORD(v10) - DWORD1(v10)) / 2;
    v8 = -(int)v10 - (DWORD2(v10) - (int)v10) / 2;
    v9 = (_DWORD *)a1 + 3;
    do
    {
      *(v9 - 3) += v8;
      *(v9 - 1) += v8;
      *v9 += v7;
      *(v9 - 2) += v7;
      v9 += 4;
      --v5;
    }
    while ( v5 );
  }
}
