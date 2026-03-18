/*
 * XREFs of KiWaitSatisfyMutant @ 0x1400DF104
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiWaitSatisfyMutant(int *a1, __int64 a2, __int64 a3)
{
  char v3; // r8
  bool v4; // zf
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *result; // rax
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
  v5 = a2 + 776;
  v6 = a1 + 6;
  result = *(_QWORD **)(v5 + 8);
  *v6 = v5;
  v6[1] = result;
  if ( *result != v5 )
    __fastfail(3u);
  *result = v6;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
