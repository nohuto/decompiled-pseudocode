/*
 * XREFs of ExQuerySystemLockInformation @ 0x140404220
 * Callers:
 *     ExpGetLockInformation @ 0x1406EE4B4 (ExpGetLockInformation.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall ExQuerySystemLockInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  int v10; // ett
  __int64 i; // rdx
  unsigned __int64 v12; // r8
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 8;
  if ( a2 >= 8 )
  {
    *a1 = 0;
    v8 = a1 + 2;
    v7 = 0;
    MmLockPagableSectionByHandle(ExPageLockHandle);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpResourceSpinLock);
    }
    else
    {
      _m_prefetchw(&ExpResourceSpinLock);
      v10 = ExpResourceSpinLock & 0x7FFFFFFF;
      if ( v10 != _InterlockedCompareExchange(
                    &ExpResourceSpinLock,
                    (ExpResourceSpinLock & 0x7FFFFFFF) + 1,
                    ExpResourceSpinLock & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&ExpResourceSpinLock);
    }
    for ( i = ExpSystemResourcesList; (__int64 *)i != &ExpSystemResourcesList; i = *(_QWORD *)i )
    {
      ++*a1;
      v3 += 48;
      if ( v3 < 0x30 )
      {
        v7 = -1073741675;
        break;
      }
      if ( a2 >= v3 )
      {
        *(_QWORD *)v8 = i;
        v8[2] = 1;
        if ( (*(_DWORD *)(i + 56) & 2) != 0 )
        {
          v12 = *(_QWORD *)(i + 48) & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v12 = 0LL;
          if ( (*(_QWORD *)(i + 48) & 3) == 0 )
            v12 = *(_QWORD *)(i + 48);
        }
        if ( v12 )
          *((_QWORD *)v8 + 2) = *(_QWORD *)(v12 + 1584);
        else
          *((_QWORD *)v8 + 2) = 0LL;
        v8[6] = *(_DWORD *)(i + 64);
        v8[7] = *(_DWORD *)(i + 68);
        v8[10] = *(_DWORD *)(i + 72);
        v8[11] = *(_DWORD *)(i + 76);
        v8 += 12;
      }
      else
      {
        v7 = -1073741820;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
    }
    else
    {
      _InterlockedAnd(&ExpResourceSpinLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpResourceSpinLock);
    }
    __writecr8(CurrentIrql);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = v3;
  return v7;
}
