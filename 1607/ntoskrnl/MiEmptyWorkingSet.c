/*
 * XREFs of MiEmptyWorkingSet @ 0x140015ED4
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E9720 (MiEmptyTargetedWorkingSet.c)
 *     MmProcessWorkingSetControl @ 0x14054BAF8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x1400160F8 (MiEmptyWorkingSetHelper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002EA00 (MiLockWorkingSetExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     KeShouldYieldProcessor @ 0x1400956C0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400BA9E0 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1400FE750 (MiRemoveWorkingSetPages.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2AEC (MiRelockWorkingSetExclusive.c)
 */

__int64 __fastcall MiEmptyWorkingSet(ULONG_PTR a1, char a2, int a3)
{
  int *v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 SharedWorkingSetList; // r15
  int v9; // ebp
  unsigned __int64 v11; // r12
  unsigned __int64 i; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-F8h] BYREF
  int v18; // [rsp+24h] [rbp-F4h]
  _DWORD v19[40]; // [rsp+30h] [rbp-E8h] BYREF

  v17 = 0;
  v3 = &v17;
  v19[0] = 0;
  v18 = a3;
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  if ( (_BYTE)v6 == 17 )
  {
    v9 = 1;
    a2 = MiLockWorkingSetExclusive(v7);
  }
  else
  {
    v9 = 0;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0
    || (v3 = (int *)&KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase + 1, (*v3 & 0x20) == 0) )
  {
    v11 = *(_QWORD *)(SharedWorkingSetList + 8);
    for ( i = *(_QWORD *)(SharedWorkingSetList + 16); i >= v11; --i )
    {
      if ( (i & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
      {
        if ( v19[0] )
        {
          MiFreeWsleList(a1, v19, 0LL);
          v19[0] = 0;
        }
        LOBYTE(v13) = a2;
        MiRelockWorkingSetExclusive(a1, v13);
        if ( (*v3 & 0x20) != 0 )
          goto LABEL_6;
        v11 = *(_QWORD *)(SharedWorkingSetList + 8);
        if ( i > *(_QWORD *)(SharedWorkingSetList + 16) )
          i = *(_QWORD *)(SharedWorkingSetList + 16);
        if ( i < v11 )
          break;
      }
      v14 = *(_QWORD *)(*(_QWORD *)(SharedWorkingSetList + 80) + i * *(unsigned int *)(SharedWorkingSetList + 32));
      if ( (v14 & 1) != 0 )
      {
        v15 = (v14 & 0x800000000000LL) != 0 ? v14 | 0xFFFF000000000000uLL : v14 & 0xFFFFFFFFFFFFLL;
        if ( (v18 & 2) == 0 || v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
          MiEmptyWorkingSetHelper(a1, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, i, v19);
      }
    }
    if ( v19[0] )
      MiFreeWsleList(a1, v19, 0LL);
    MiRemoveWorkingSetPages(a1);
    if ( v9 == 1 )
    {
      LOBYTE(v16) = a2;
      MiUnlockWorkingSetExclusive(a1, v16);
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    if ( v9 == 1 )
    {
      LOBYTE(v6) = a2;
      MiUnlockWorkingSetExclusive(a1, v6);
    }
    return 3221225738LL;
  }
}
