/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1400EC64C
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14000E7B8 (MiCopyHeaderIfResident.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // r8
  int *v3; // r9
  int *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r9
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_WORD *)(a1 + 32) )
  {
    v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    v4 = *(int **)&v3[2 * (*(_BYTE *)(a1 + 34) & 7) + 906];
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      v5 = MI_GET_PFN_PRIORITY(a1);
      v4 = (int *)(v6 + 8 * (5LL * v5 + 232));
    }
    else if ( v4[2] == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    {
      v4 = &v3[10 * (v2 >> 58) + 720];
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 4, &LockHandle);
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
}
