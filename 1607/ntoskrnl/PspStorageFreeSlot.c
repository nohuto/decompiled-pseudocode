/*
 * XREFs of PspStorageFreeSlot @ 0x140682B4C
 * Callers:
 *     PsFreeSiloContextSlot @ 0x14067DF60 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x14079DE5C (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // ebx
  _RTL_BITMAP *v2; // rbp
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  unsigned int v6; // esi

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &PspStorageExpansionBitmap;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &PspStorageBitmap;
  }
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspStorageBitmapLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PspStorageBitmapLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PspStorageBitmapLock, v3, (ULONG_PTR)&PspStorageBitmapLock);
  v6 = 0;
  if ( v5 )
    v5[26] |= 1u;
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
    _bittestandreset((signed __int32 *)v2->Buffer, v1);
  else
    v6 = -1073741811;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  return v6;
}
