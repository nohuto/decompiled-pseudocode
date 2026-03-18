/*
 * XREFs of AdjustBoundingBox @ 0x1C000B798
 * Callers:
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00291E0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdjustBoundingBox(__int64 a1, __int64 a2, int *a3, int *a4, int *a5, _DWORD *a6)
{
  _DWORD *v6; // r11
  _DWORD *v7; // rbx
  int v8; // ecx
  int v9; // r10d
  __int64 result; // rax
  int v11; // ecx

  v6 = *(_DWORD **)a1;
  v7 = *(_DWORD **)a2;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 312LL) - *(_DWORD *)(*(_QWORD *)a2 + 312LL);
  v9 = *(_DWORD *)(*(_QWORD *)a2 + 308LL) - v6[77];
  result = (unsigned int)(v9 + v8);
  if ( (_DWORD)result )
  {
    if ( v8 < 0 )
      v8 = 0;
    if ( v9 < 0 )
      v9 = 0;
    if ( v9 || v8 )
    {
      if ( v8 > *a4 )
      {
        *a4 = v8;
        *a6 = v7[82] - v6[82];
        a6[1] = v7[83] - v6[83];
      }
      if ( v9 > *a3 )
      {
        v11 = v7[80] - v6[80];
        *a3 = v9;
        *a5 = v11;
        a5[1] = v7[81] - v6[81];
      }
    }
  }
  return result;
}
