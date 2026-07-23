/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x1403FC998
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromHive @ 0x1404C2248 (CmpTransSearchAddTransFromHive.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x1403FDF4C (CmpBindHiveToTrans.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x1404CFC84 (CmpTransAllocateTrans.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // rbx
  int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int64 Trans; // rax
  void *v14; // rsi
  signed __int64 v15; // rdi
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9

  v5 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = a1;
  v9 = 0;
  v10 = CmpTransReferenceTransaction();
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v11 = *(_QWORD *)(v5 + 16);
  if ( v11 )
  {
    *a4 = v11;
    v10 = 0;
  }
  else if ( a3 )
  {
    Trans = CmpTransAllocateTrans(v8, 0LL, 0LL, a2);
    v14 = (void *)Trans;
    if ( Trans )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), Trans, 0LL);
      if ( v15 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = 1;
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        v10 = (unsigned int)CmpBindHiveToTrans(a2, v15) != 0 ? -1072103421 : -1072103423;
      }
      else
      {
        v16 = KeGetCurrentThread();
        v17 = (__int64)v14;
        v14 = 0LL;
        v8 = 0LL;
        --v16->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        if ( (*(_DWORD *)(v17 + 48) & 7) != 0 )
        {
          v10 = -1072103422;
LABEL_20:
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
          return v10;
        }
        *(_DWORD *)(v17 + 48) = 128;
        v18 = (__int64 *)qword_140322928;
        if ( *(__int64 **)qword_140322928 != &CmpLightTransactionList )
          __fastfail(3u);
        *(_QWORD *)v17 = &CmpLightTransactionList;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        qword_140322928 = v17;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
        *a4 = v17;
        v10 = 0;
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0x72544D43u);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1072103422;
  }
  if ( v8 )
    CmpTransDereferenceTransaction(v8);
  if ( v9 )
    goto LABEL_20;
  return v10;
}
