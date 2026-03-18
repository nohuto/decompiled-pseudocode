/*
 * XREFs of MiForcedTrim @ 0x14021A838
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiDoReplacement @ 0x1402135E8 (MiDoReplacement.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiGetAvailablePagesForTrimPass @ 0x140113778 (MiGetAvailablePagesForTrimPass.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiComputeTrimAmount @ 0x14021A5E8 (MiComputeTrimAmount.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int16 *VmPartition; // rax
  unsigned __int64 v6; // rbx
  __int16 *v7; // rsi
  unsigned __int64 AvailablePagesForTrimPass; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int16 *v11; // rax
  unsigned __int64 v12; // r15
  __int16 *v13; // r13
  char v14; // si
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 Next; // rax
  unsigned __int8 v21; // [rsp+38h] [rbp-79h]
  __int64 v22; // [rsp+40h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-69h] BYREF
  char v24; // [rsp+68h] [rbp-49h] BYREF
  char v25; // [rsp+69h] [rbp-48h]
  char v26; // [rsp+6Ah] [rbp-47h]
  char v27; // [rsp+6Bh] [rbp-46h]
  _BYTE v28[56]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-1h]
  unsigned __int64 v30; // [rsp+B8h] [rbp+7h]
  unsigned __int64 v31; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 v32; // [rsp+C8h] [rbp+17h]
  __int64 v33; // [rsp+D0h] [rbp+1Fh]
  __int64 retaddr; // [rsp+110h] [rbp+5Fh]

  v21 = 1;
  v2 = 0LL;
  v22 = 0LL;
  VmPartition = MiGetVmPartition(a1);
  v6 = *(_QWORD *)(a1 + 208);
  v32 = 0LL;
  v7 = VmPartition;
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(VmPartition, 0);
  if ( a2 == 1 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v7 + 657) + 2416LL);
    if ( AvailablePagesForTrimPass >= v9 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = v9 - AvailablePagesForTrimPass;
      if ( v6 < 0x10 )
        v6 = 16LL;
    }
    v21 = 9;
  }
  if ( v6 )
  {
    v10 = *((_QWORD *)v7 + 688);
    v24 = 0;
    v29 = v6 + v10;
    v32 = 0LL;
    v30 = v6;
    v33 = 0LL;
    v26 = 4;
    memset(v28, 0, sizeof(v28));
    v11 = MiGetVmPartition(a1);
    v12 = v32;
    v13 = v11;
    v14 = 0;
    do
    {
      v31 = v6 - v12;
      if ( v6 == v12 )
        break;
      if ( (v14 & 0x7F) != 0 )
      {
        v27 = 0;
        v25 = MiTrimPassToAge[v14 & 0x7F];
        v17 = MiComputeTrimAmount((__int64)&v24, a1);
        v15 = v25;
        v16 = v17;
        v12 = v32;
        v14 = v24;
      }
      else
      {
        v15 = 6;
        v16 = *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88);
        v25 = 6;
      }
      if ( v12 >= v30
        || v15 < 2u && *((_QWORD *)v13 + 688) >= 0x80uLL
        || AvailablePagesForTrimPass >= *((_QWORD *)v13 + 513) >> 1 )
      {
        break;
      }
      if ( v16 )
      {
        if ( v16 > v30 - v12 )
          v16 = v30 - v12;
        v18 = MiTrimWorkingSet(v16, a1, 17, v15, v21);
        v12 += v18;
        v22 = v18;
        v32 = v12;
      }
      if ( a2 == 1 )
        break;
      v14 ^= (v14 ^ (v14 + 1)) & 0x7F;
      v24 = v14;
      AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(v13, v14 & 0x7F);
    }
    while ( (v14 & 0x7Fu) < 4 );
    v2 = v22;
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
    *(_QWORD *)(a1 + 208) = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_31;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_31;
    }
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
  }
LABEL_31:
  if ( !a2 || (*(_DWORD *)(a1 + 196) & 0x3FFF) == 0 )
    *(_BYTE *)(a1 + 219) |= 0x10u;
  return v2;
}
