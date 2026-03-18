/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1400E0280
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1400E0408 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int16 *v3; // r9
  __int16 *v4; // rcx
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 Next; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*(_WORD *)(a1 + 32) )
  {
    v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    v4 = *(__int16 **)&v3[4 * (*(_BYTE *)(a1 + 34) & 7) + 1716];
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      v5 = *(_BYTE *)(a1 + 35);
      if ( (v5 & 8) != 0 )
        v6 = 5LL;
      else
        v6 = v5 & 7;
      v7 = v6 + 4 * (v6 + 54);
    }
    else
    {
      if ( *((_DWORD *)v4 + 2) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
LABEL_7:
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 4, &LockHandle);
        _InterlockedOr(v9, 0);
        *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          return;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            return;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        return;
      }
      v7 = (v2 >> 58) + 4 * ((v2 >> 58) + 86);
    }
    v4 = &v3[4 * v7];
    goto LABEL_7;
  }
}
