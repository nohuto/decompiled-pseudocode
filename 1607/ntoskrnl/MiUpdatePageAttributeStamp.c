/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1400FAC90
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1400FB338 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  int *v3; // r9
  int *v4; // rcx
  __int64 v5; // rcx
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_WORD *)(a1 + 32) )
  {
    v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    v4 = *(int **)&v3[2 * (*(_BYTE *)(a1 + 34) & 7) + 938];
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      v5 = 5LL * (unsigned int)MiGetPfnPriority(a1) + 248;
    }
    else
    {
      if ( v4[2] != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      v5 = (v2 >> 58) + 4 * ((v2 >> 58) + 94);
    }
    v4 = &v3[2 * v5];
LABEL_5:
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 4, &LockHandle);
    _InterlockedOr(v6, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
}
