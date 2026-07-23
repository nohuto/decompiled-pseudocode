/*
 * XREFs of MiEmptyWorkingSet @ 0x140015A54
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E954C (MiEmptyTargetedWorkingSet.c)
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
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
