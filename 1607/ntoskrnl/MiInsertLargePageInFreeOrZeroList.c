/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x140064A70
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x140089980 (MiDemoteLargeFreePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1401FD17C (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  bool v9; // zf
  int v10; // edx
  int v11; // r12d
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+10h]
  int v21; // [rsp+90h] [rbp+18h]
  int v22; // [rsp+98h] [rbp+20h]

  v4 = MiLargePageSizes[a2];
  if ( v4 > 0x10 )
  {
    v17 = (unsigned int)(a2 + 1);
    v5 = MiLargePageContainingFrames[v17];
    v6 = MiLargePageSizes[v17];
    v20 = a2 + 1;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    v20 = 0;
    if ( !a3 )
      a3 = 1;
  }
  v7 = a1 + 48 * v4;
  v8 = (__int64)(v7 + 0x58000000000LL) / 48;
  v9 = (*(_BYTE *)(a1 + 34) & 7) == 0;
  v10 = *(_BYTE *)(a1 + 34) & 7;
  v21 = v10;
  if ( v9 )
    v11 = 1;
  else
    v11 = 2;
  v22 = v11 | 0x40;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = a3;
  v13 = v7 + 24;
  do
  {
    v13 -= 48LL;
    v19 = 0;
    v7 -= 48LL;
    --v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v19);
        while ( (*(_QWORD *)v13 & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0x3FuLL) );
      v10 = v21;
    }
    v14 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)v13 &= 0xC000000000000000uLL;
    v15 = *(_QWORD *)(v13 + 16) ^ (v5 ^ v14) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v13 + 16) = v15;
    if ( v12 == 1 && v7 < a1 + 768 )
    {
      *(_QWORD *)(v13 + 16) = v15 & 0xFFFFFFF000000000uLL;
      MiInsertPageInFreeOrZeroedList(v8);
    }
    else if ( ((v6 - 1) & v8) == 0 )
    {
      MiInsertLargePageInNodeListHelper(v8, v6, v10, 1);
      if ( v12 == 1 && (__int64)(v13 + -40 - a1 + 16) / 48 == v6 && v6 > 0x10 )
      {
        v5 = MiLargePageContainingFrames[++v20];
        v6 = MiLargePageSizes[v20];
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v21;
  }
  while ( v7 != a1 );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
