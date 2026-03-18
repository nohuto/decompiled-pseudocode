/*
 * XREFs of MiRemoveWsleFromFreeList @ 0x140105920
 * Callers:
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 * Callees:
 *     MiPopFreeWsle @ 0x1400B97C8 (MiPopFreeWsle.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiRemoveWsleFromFreeList(__int64 a1, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // r10
  __int64 v3; // rbx
  __int64 v4; // r11
  ULONG_PTR v5; // r8
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // r9
  ULONG_PTR result; // rax
  ULONG_PTR v9; // r11
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v2 + 496);
  if ( *(_QWORD *)v2 == BugCheckParameter4 )
    return MiPopFreeWsle(a1);
  v4 = *(unsigned int *)(v2 + 64);
  v5 = BugCheckParameter4 - 1;
  if ( (!BugCheckParameter4 || (v6 = *(_QWORD *)(v4 * (BugCheckParameter4 - 1) + v3), (v6 & 1) != 0))
    && (BugCheckParameter4 == *(_QWORD *)(v2 + 32)
     || (v5 = BugCheckParameter4 + 1, v6 = *(_QWORD *)(v4 * (BugCheckParameter4 + 1) + v3), (v6 & 1) != 0))
    || v6 >> 28 != BugCheckParameter4
    || v5 == 0xFFFFFFFFFLL )
  {
    v5 = (*(_DWORD *)(BugCheckParameter4 * v4 + v3) >> 1) & 0x7FFFFFF;
    v11 = (_QWORD *)(v3 + v5 * v4);
    do
    {
      if ( (*v11 & 1) == 0 && *v11 >> 28 == BugCheckParameter4 )
        break;
      v5 += 0x8000000LL;
      v11 += 0x1000000 * v4;
    }
    while ( v5 <= *(_QWORD *)(v2 + 32) );
  }
  if ( *(_QWORD *)(v5 * v4 + v3) >> 28 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x5011uLL, v2, v5, BugCheckParameter4);
  v7 = *(_QWORD *)(BugCheckParameter4 * v4 + v3) >> 28;
  if ( v7 != 0xFFFFFFFFFLL )
  {
    v9 = v7 * v4;
    v10 = *(_QWORD *)(v9 + v3);
    if ( (v10 & 1) != 0 || ((BugCheckParameter4 ^ (v10 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5012uLL, v2, v5, v7);
    *(_QWORD *)(v9 + v3) = v10 ^ ((unsigned int)v10 ^ (2 * (_DWORD)v5)) & 0xFFFFFFE;
  }
  result = *(_QWORD *)(v2 + 496);
  *(_QWORD *)(v5 * *(unsigned int *)(v2 + 64) + result) = (v7 << 28) | *(_DWORD *)(v5 * *(unsigned int *)(v2 + 64) + v3) & 0xFFFFFFF;
  return result;
}
