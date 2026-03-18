/*
 * XREFs of PspStorageAllocSlot @ 0x140551F98
 * Callers:
 *     VRegSetup @ 0x140551650 (VRegSetup.c)
 *     PsAllocSiloContextSlot @ 0x140551E90 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     PspInitializeSiloStructures @ 0x14079DE5C (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB08 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  ULONG ClearBitsAndSet; // ebx

  v2 = 0;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspStorageBitmapLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PspStorageBitmapLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PspStorageBitmapLock, v3, (ULONG_PTR)&PspStorageBitmapLock);
  if ( v5 )
    v5[26] |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
