/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x14071AC4C
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  KIRQL v6; // r8

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    if ( *(_BYTE *)(v5 + 8) )
    {
      if ( ++*(_DWORD *)(v4 + 96) == 1 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else if ( (*(_DWORD *)(v4 + 96))-- == 1 )
    {
      *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 88), v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
