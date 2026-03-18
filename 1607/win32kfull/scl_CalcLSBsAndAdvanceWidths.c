/*
 * XREFs of scl_CalcLSBsAndAdvanceWidths @ 0x1C00FEE3C
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 * Callees:
 *     scl_CalcDevAdvanceWidth @ 0x1C00FEEE8 (scl_CalcDevAdvanceWidth.c)
 */

_QWORD *__fastcall scl_CalcLSBsAndAdvanceWidths(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r10
  __int16 v12; // dx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // esi
  _QWORD *result; // rax

  scl_CalcDevAdvanceWidth(a1, a4);
  v11 = a1[1];
  v12 = *(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1));
  v13 = *a1;
  v14 = (unsigned __int16)(v12 + 1);
  v15 = a2 - *(_DWORD *)(*a1 + 4 * v14);
  a5[1] = a3 - *(_DWORD *)(v11 + 4 * v14);
  v16 = (unsigned __int16)(v12 + 6);
  v17 = (unsigned __int16)(v12 + 5);
  *a5 = v15;
  v18 = a3 - *(_DWORD *)(v11 + 4 * v17) - *(_DWORD *)(v11 + 4 * v16);
  *a6 = *(_DWORD *)(v13 + 4 * v16) - *(_DWORD *)(v13 + 4 * v17);
  *a7 = *(_QWORD *)a5;
  result = a8;
  a6[1] = v18;
  *a8 = *(_QWORD *)a6;
  return result;
}
