/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C000C160
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C000C054 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0023430 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C000585C (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000595C (RaidAdapterAcquireInterruptLock.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000BFC4 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C000C394 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000C4E0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C000CC40 (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v7; // ebx
  unsigned __int8 v8; // si
  __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 *v11; // rcx
  __int64 v12; // r9
  __int64 UnitAtDirql; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  KIRQL v19; // bl
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v22[96]; // [rsp+50h] [rbp-98h] BYREF
  int v23; // [rsp+F0h] [rbp+8h]

  memset(v22, 0, 0x58uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v22);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v22, a3) < 0 )
    {
      v7 = RaidBusEnumeratorProbeLunZero(a1, a2);
      memset(a3, 0, 0xFFuLL);
      if ( v7 >= 0 )
        *a3 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, v22);
    v8 = 0;
    v23 = a2;
    do
    {
      BYTE2(v23) = v8;
      v9 = *(_QWORD *)a1;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        v18 = *(_QWORD *)a1;
        if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v9 + 672) )
        {
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v18, v23);
        }
        else
        {
          v19 = RaidAdapterAcquireInterruptLock(v18);
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v9, v23);
          RaidAdapterReleaseInterruptLock(v9, v19);
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 112), &LockHandle);
        v11 = *(__int64 **)(v9 + 120);
        v12 = v9 + 120;
        if ( v11 == (__int64 *)(v9 + 120) )
          goto LABEL_8;
        do
        {
          UnitAtDirql = (__int64)(v11 - 6);
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)v11 + 10)) | ((((unsigned __int8)*((_DWORD *)v11 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v11 + 10))) << 8)) == (v8 | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
            break;
          v11 = (__int64 *)*v11;
        }
        while ( v11 != (__int64 *)v12 );
        if ( v11 == (__int64 *)v12 )
LABEL_8:
          UnitAtDirql = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( UnitAtDirql )
        goto LABEL_21;
      v14 = *(_QWORD *)a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)a1 + 192LL), &v20);
      v15 = (_QWORD *)(v14 + 200);
      v16 = (_QWORD *)*v15;
      if ( (_QWORD *)*v15 == v15 )
        goto LABEL_12;
      do
      {
        v17 = v16 - 6;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)v16 + 10)) | ((((unsigned __int8)*((_DWORD *)v16 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v16 + 10))) << 8)) == (v8 | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
          break;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != v15 );
      if ( v16 == v15 )
LABEL_12:
        v17 = 0LL;
      KeReleaseInStackQueuedSpinLock(&v20);
      if ( v17 )
LABEL_21:
        *((_BYTE *)a3 + v8) = 1;
      ++v8;
    }
    while ( v8 != 0xFF );
    return 0LL;
  }
  return result;
}
