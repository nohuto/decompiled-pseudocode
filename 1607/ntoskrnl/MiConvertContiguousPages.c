/*
 * XREFs of MiConvertContiguousPages @ 0x140104754
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140104D48 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiConvertContiguousPages(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r9
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  result = MiSetOriginalPtePfnFromFreeList(&v10);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      result = MiPageAttributeBatchChangeNeeded(a1, a3);
      if ( (_DWORD)result )
      {
        result = MiPfnZeroingNeeded(a1, a3);
        a1[2] = v6;
        v6 = a1;
        *a1 = (_DWORD)result != 0;
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch((__int64)v6, a3, -1LL);
      do
      {
        v9 = (_QWORD *)v6[2];
        result = -*v6;
        v6[2] = v10 & -(__int64)(*v6 != 0LL);
        v6 = v9;
      }
      while ( v9 );
    }
  }
  return result;
}
