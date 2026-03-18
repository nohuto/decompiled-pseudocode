/*
 * XREFs of bGrabXform @ 0x1C00C2554
 * Callers:
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C0242744 (ttfdQueryQuadTrueTypeOutline.c)
 * Callees:
 *     bSetXform @ 0x1C01126D0 (bSetXform.c)
 */

__int64 __fastcall bGrabXform(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int16 v9; // r10
  int v10; // edi
  int v11; // ebp
  int v12; // esi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx

  v7 = *(_QWORD *)(a1 + 176);
  v8 = 1;
  v9 = *(_WORD *)(v7 + 152);
  if ( (v9 & 3) == 1 )
    v10 = -1;
  else
    v10 = (v9 & 3) == 3;
  v11 = *(_DWORD *)(v7 + 164);
  v12 = ((unsigned __int8)v9 >> 4) & 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) != a1
    || *(_WORD *)(a1 + 402) != a2
    || v10 != a4
    || v12 != a5
    || a3 != *(unsigned __int8 *)(a1 + 116) >> 7
    || v11 != a6 )
  {
    *(_WORD *)(a1 + 402) = a2;
    v8 = bSetXform(a1, a3, a4, a5, a6);
    if ( v8 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v14 + 32) != a1 && (*(_DWORD *)(v14 + 400) & 0x10000000) != 0 )
      {
        v15 = *(_DWORD *)(a1 + 80);
        v16 = v15 * *(__int16 *)(v14 + 428);
        if ( v15 <= 0 )
          v17 = -(((-v16 >> 15) + 1) >> 1);
        else
          v17 = ((v16 >> 15) + 1) >> 1;
        *(_DWORD *)(a1 + 404) = v17;
      }
      *(_QWORD *)(v14 + 32) = a1;
    }
    else
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      if ( v18 )
        bSetXform(v18, *(unsigned __int8 *)(v18 + 116) >> 7, v10, v12, v11);
    }
  }
  return v8;
}
