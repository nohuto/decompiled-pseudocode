/*
 * XREFs of MiRemoveWsleFromFreeList @ 0x1400AE8AC
 * Callers:
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPopFreeWsle @ 0x1400FCB90 (MiPopFreeWsle.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveWsleFromFreeList(__int64 a1)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v3; // r10
  ULONG_PTR v4; // rbx
  __int64 v5; // r11
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // r9
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r11
  unsigned __int64 v13; // rax
  __int64 result; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v3 = (ULONG_PTR)SharedWorkingSetList;
  v4 = SharedWorkingSetList[10];
  if ( *SharedWorkingSetList == BugCheckParameter4 )
    return MiPopFreeWsle();
  v5 = *((unsigned int *)SharedWorkingSetList + 8);
  v6 = BugCheckParameter4 - 1;
  if ( !BugCheckParameter4
    || (v7 = *(_QWORD *)(v5 * (BugCheckParameter4 - 1) + v4), (v7 & 1) != 0)
    || v7 >> 28 != BugCheckParameter4
    || BugCheckParameter4 == 0x1000000000LL )
  {
    v8 = SharedWorkingSetList[3];
    if ( BugCheckParameter4 == v8
      || (v6 = BugCheckParameter4 + 1, v9 = *(_QWORD *)(v5 * (BugCheckParameter4 + 1) + v4), (v9 & 1) != 0)
      || v9 >> 28 != BugCheckParameter4
      || BugCheckParameter4 == 0xFFFFFFFFELL )
    {
      v6 = (*(_DWORD *)(BugCheckParameter4 * v5 + v4) >> 1) & 0x7FFFFFF;
      v10 = (_QWORD *)(v4 + v6 * v5);
      do
      {
        if ( (*v10 & 1) == 0 && *v10 >> 28 == BugCheckParameter4 )
          break;
        v6 += 0x8000000LL;
        v10 += 0x1000000 * v5;
      }
      while ( v6 <= v8 );
    }
  }
  if ( *(_QWORD *)(v6 * v5 + v4) >> 28 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x5011uLL, v3, v6, BugCheckParameter4);
  v11 = *(_QWORD *)(BugCheckParameter4 * v5 + v4) >> 28;
  if ( v11 != 0xFFFFFFFFFLL )
  {
    v12 = v11 * v5;
    v13 = *(_QWORD *)(v12 + v4);
    if ( (v13 & 1) != 0 || ((BugCheckParameter4 ^ (v13 >> 1)) & 0x7FFFFFF) != 0 )
      KeBugCheckEx(0x1Au, 0x5012uLL, v3, v6, v11);
    *(_QWORD *)(v12 + v4) = v13 ^ ((unsigned int)v13 ^ (2 * (_DWORD)v6)) & 0xFFFFFFE;
  }
  result = *(_QWORD *)(v3 + 80);
  *(_QWORD *)(v6 * *(unsigned int *)(v3 + 32) + result) = (v11 << 28) | *(_DWORD *)(v6 * *(unsigned int *)(v3 + 32) + v4) & 0xFFFFFFF;
  return result;
}
