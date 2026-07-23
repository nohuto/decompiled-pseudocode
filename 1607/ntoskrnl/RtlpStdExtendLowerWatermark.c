/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x1402116DC
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x140211964 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // rdi
  char v5; // dl
  void *v6; // rcx
  KSPIN_LOCK v7; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = *((_BYTE *)SpinLock + 128);
  v6 = (void *)SpinLock[18];
  v7 = SpinLock[20];
  BaseAddress = v6;
  if ( !v5 )
  {
    if ( v7 + a2 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    SpinLock[20] = v7 + a2;
    v4 = v7;
    goto LABEL_9;
  }
  if ( v7 + a2 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  KeReleaseSpinLock(SpinLock, *((_BYTE *)SpinLock + 8));
  return v4;
}
