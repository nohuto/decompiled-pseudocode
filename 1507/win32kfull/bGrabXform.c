/*
 * XREFs of bGrabXform @ 0x1C00B1F98
 * Callers:
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C02465DC (ttfdQueryQuadTrueTypeOutline.c)
 * Callees:
 *     bSetXform @ 0x1C00ECDE8 (bSetXform.c)
 */

__int64 __fastcall bGrabXform(__int64 a1, __int16 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int16 v8; // ax
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx

  v6 = *(_QWORD *)(a1 + 176);
  v7 = 1;
  v8 = *(_WORD *)(v6 + 152) & 3;
  if ( v8 == 1 )
    v9 = -1;
  else
    v9 = v8 == 3;
  v10 = *(_DWORD *)(v6 + 164);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) != a1
    || *(_WORD *)(a1 + 402) != a2
    || v9 != a4
    || a3 != *(unsigned __int8 *)(a1 + 116) >> 7
    || v10 != a5 )
  {
    *(_WORD *)(a1 + 402) = a2;
    v7 = bSetXform(a1, a3, a4, a5);
    if ( v7 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v12 + 32) != a1 && (*(_DWORD *)(v12 + 400) & 0x10000000) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 80);
        v14 = v13 * *(__int16 *)(v12 + 428);
        if ( v13 <= 0 )
          v15 = -(((-v14 >> 15) + 1) >> 1);
        else
          v15 = ((v14 >> 15) + 1) >> 1;
        *(_DWORD *)(a1 + 404) = v15;
      }
      *(_QWORD *)(v12 + 32) = a1;
    }
    else
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      if ( v16 )
        bSetXform(v16, *(unsigned __int8 *)(v16 + 116) >> 7, v9, v10);
    }
  }
  return v7;
}
