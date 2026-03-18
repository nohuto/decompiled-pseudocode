/*
 * XREFs of vGetVertNotionalMetrics @ 0x1C02479F4
 * Callers:
 *     vFillGLYPHDATA @ 0x1C00AAC68 (vFillGLYPHDATA.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall vGetVertNotionalMetrics(__int64 a1, unsigned int a2, __int16 a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // r11
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int16 v12; // dx
  __int16 v13; // r8
  __int16 v14; // dx
  __int16 v15; // dx
  _DWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned __int16 *)(v5 + 280);
  if ( *(_WORD *)(v5 + 280)
    && (a2 >= v8 ? (v9 = 2 * (v8 + a2) + 2) : (v9 = 4 * a2 + 4), v9 <= *(_DWORD *)(*(_QWORD *)(a1 + 192) + 140LL)) )
  {
    v10 = *(_QWORD *)(v5 + 64) + *(unsigned int *)(v5 + 248);
    if ( a2 >= v8 )
    {
      v13 = __ROR2__(*(_WORD *)(4 * v8 - 4 + v10), 8);
      v12 = *(_WORD *)(v10 + 4 * v8 + 2LL * (a2 - v8));
    }
    else
    {
      v11 = 4 * a2;
      v12 = *(_WORD *)((unsigned int)(v11 + 2) + v10);
      v13 = __ROR2__(*(_WORD *)(v11 + v10), 8);
    }
    v14 = __ROR2__(v12, 8);
  }
  else
  {
    v15 = *(_WORD *)(v5 + 412);
    v13 = v15 + *(_WORD *)(v5 + 414);
    v14 = a3 + v15;
    if ( v14 < 0 )
      v14 = 0;
  }
  *a4 = v13;
  result = a5;
  *a5 = v14;
  return result;
}
