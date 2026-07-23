/*
 * XREFs of KiWaitSatisfyMutant @ 0x140097970
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiWaitSatisfyMutant(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  bool v4; // zf
  _QWORD *result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // [rsp+0h] [rbp-28h]

  *(_WORD *)(a2 + 484) -= *((unsigned __int8 *)a1 + 49);
  if ( *(_QWORD *)(a3 + 8) == a2 )
    v3 = *(_BYTE *)(a3 + 11754);
  else
    v3 = 0;
  v8 = *a1;
  BYTE2(v8) = v3;
  *a1 = v8;
  v4 = *((_BYTE *)a1 + 48) == 0;
  *((_QWORD *)a1 + 5) = a2;
  if ( !v4 )
  {
    *((_BYTE *)a1 + 48) = 0;
    *(_QWORD *)(a2 + 200) |= 0x80uLL;
  }
  result = a1 + 6;
  v6 = a2 + 776;
  v7 = *(_QWORD **)(a2 + 784);
  if ( *v7 != v6 )
    __fastfail(3u);
  *result = v6;
  result[1] = v7;
  *v7 = result;
  *(_QWORD *)(v6 + 8) = result;
  return result;
}
