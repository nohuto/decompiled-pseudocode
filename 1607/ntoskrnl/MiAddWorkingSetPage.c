/*
 * XREFs of MiAddWorkingSetPage @ 0x1400FFE80
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAddWorkingSetPage(__int64 a1)
{
  __int64 v1; // r9
  ULONG_PTR *SharedWorkingSetList; // r14
  ULONG_PTR v3; // r12
  unsigned int v4; // r8d
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // rbp
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // r15
  _QWORD *v12; // r9
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  __int64 result; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v3 = SharedWorkingSetList[10];
  v4 = *((_DWORD *)SharedWorkingSetList + 8);
  v5 = SharedWorkingSetList[3];
  v6 = 0x1000 / v4;
  if ( v5 > 0xFFFFFFFFELL - v6 )
    return 0LL;
  v7 = v4;
  v8 = (__int64)((((v3 << 16) + ((v5 * v4) << 16)) & 0xFFFFFFFFF0000000uLL) + 0x10000000) >> 16;
  if ( v8 + 4096 >= SharedWorkingSetList[8] && v8 <= SharedWorkingSetList[9]
    || !(unsigned int)MiMapNewWorkingSetPage(v1, v8, 1LL) )
  {
    return 0LL;
  }
  v9 = *SharedWorkingSetList;
  v10 = SharedWorkingSetList[3];
  v11 = v10 + 1;
  if ( *SharedWorkingSetList != 0xFFFFFFFFFLL )
  {
    if ( v9 < SharedWorkingSetList[1] || v9 > v10 )
      KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)SharedWorkingSetList, v9, SharedWorkingSetList[3]);
    if ( (*(_QWORD *)(v9 * *((unsigned int *)SharedWorkingSetList + 8) + v3) & 0xFFFFFFELL) != 268435454
      || (*(_QWORD *)(v9 * *((unsigned int *)SharedWorkingSetList + 8) + v3) & 1) != 0 )
    {
      KeBugCheckEx(
        0x1Au,
        0x5006uLL,
        (ULONG_PTR)SharedWorkingSetList,
        v9,
        *(_QWORD *)(v9 * *((unsigned int *)SharedWorkingSetList + 8) + v3));
    }
  }
  v12 = (_QWORD *)v8;
  SharedWorkingSetList[3] = (v8 - v3 + 4096) / v7 - 1;
  LOBYTE(v13) = 0;
  v14 = v11;
  if ( v11 < v11 + v6 )
  {
    v15 = (v11 + 1) << 28;
    do
    {
      v16 = 2LL * (((_DWORD)v14++ - 1) & 0x7FFFFFF);
      v17 = v15 & 0xFFFFFFFFF0000000uLL | v16;
      v15 += 0x10000000LL;
      v13 = v13 & 1 | v17;
      *v12 = v13;
      v12 = (_QWORD *)((char *)v12 + v7);
    }
    while ( v14 < v11 + v6 );
  }
  *(_QWORD *)((char *)v12 - v7) = (v9 << 28) | *(_DWORD *)((_BYTE *)v12 - v7) & 0xFFFFFFF;
  if ( v9 != 0xFFFFFFFFFLL )
    *(_QWORD *)(v9 * *((unsigned int *)SharedWorkingSetList + 8) + v3) ^= (*(_DWORD *)(v9
                                                                                     * *((unsigned int *)SharedWorkingSetList
                                                                                       + 8)
                                                                                     + v3) ^ (2 * (_DWORD)v14 - 2)) & 0xFFFFFFE;
  *(_QWORD *)v8 |= 0xFFFFFFEuLL;
  result = 1LL;
  *SharedWorkingSetList = v11;
  return result;
}
