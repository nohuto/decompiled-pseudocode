/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x14075261C
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IoReleaseRemoveLockEx @ 0x140117C68 (IoReleaseRemoveLockEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = (volatile signed __int32 *)(v4 + 88);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v4 + 88));
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v4 + 88));
    }
    if ( *(_BYTE *)(v5 + 8) )
    {
      if ( ++*(_DWORD *)(v4 + 96) == 1 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else if ( (*(_DWORD *)(v4 + 96))-- == 1 )
    {
      *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v4 + 88), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    __writecr8(CurrentIrql);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
