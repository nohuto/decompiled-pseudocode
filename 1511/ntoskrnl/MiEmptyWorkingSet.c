/*
 * XREFs of MiEmptyWorkingSet @ 0x14001F584
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiEmptyWorkingSet(volatile LONG *SpinLock, unsigned __int64 a2, char a3)
{
  int *v3; // r15
  __int64 v5; // r14
  KIRQL v6; // si
  int v8; // ebp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD v14[40]; // [rsp+30h] [rbp-E8h] BYREF

  v13 = 0;
  v3 = &v13;
  v14[0] = 0;
  v5 = *((_QWORD *)SpinLock + 23);
  v6 = a2;
  if ( (_BYTE)a2 == 17 )
  {
    v8 = 1;
    v6 = ExAcquireSpinLockExclusive(SpinLock);
  }
  else
  {
    v8 = 0;
  }
  if ( v5 == 0xFFFFF58010804000uLL
    && (v3 = (int *)&KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase + 1, (*v3 & 0x20) != 0) )
  {
LABEL_29:
    if ( v8 == 1 )
    {
      LOBYTE(a2) = v6;
      MiUnlockWorkingSetExclusive(SpinLock, a2);
    }
    return 3221225738LL;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 16);
    v10 = *(_QWORD *)(v5 + 8);
    if ( v10 <= v9 )
    {
      do
      {
        if ( (v10 & 0xF) == 0 && (*SpinLock & 0x40000000) != 0 || KeShouldYieldProcessor() )
        {
          if ( v14[0] )
          {
            MiFreeWsleList(SpinLock, v14, 0LL);
            v14[0] = 0;
          }
          LOBYTE(a2) = v6;
          MiUnlockWorkingSetExclusive(SpinLock, a2);
          v6 = ExAcquireSpinLockExclusive(SpinLock);
          if ( (*v3 & 0x20) != 0 )
            goto LABEL_29;
          v9 = *(_QWORD *)(v5 + 16);
          if ( v10 < *(_QWORD *)(v5 + 8) )
            v10 = *(_QWORD *)(v5 + 8);
          if ( v10 > v9 )
            break;
        }
        a2 = *(_QWORD *)(*(_QWORD *)(v5 + 496) + v10 * *(unsigned int *)(v5 + 64));
        if ( (a2 & 1) != 0 )
        {
          if ( (a2 & 0x800000000000LL) != 0 )
            a2 |= 0xFFFF000000000000uLL;
          else
            a2 &= 0xFFFFFFFFFFFFuLL;
          if ( (a3 & 2) == 0 || a2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            MiEmptyWorkingSetHelper(SpinLock, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v10, v14, v13);
        }
        ++v10;
      }
      while ( v10 <= v9 );
      if ( v14[0] )
        MiFreeWsleList(SpinLock, v14, 0LL);
    }
    MiRemoveWorkingSetPages((ULONG_PTR)SpinLock);
    if ( v8 == 1 )
    {
      LOBYTE(v11) = v6;
      MiUnlockWorkingSetExclusive(SpinLock, v11);
    }
    return 0LL;
  }
}
