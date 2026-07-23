/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1402117B8
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140211894 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v3; // rdi
  char v4; // dl
  char *v5; // rcx
  KSPIN_LOCK v6; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = *((_BYTE *)SpinLock + 128);
  v5 = (char *)SpinLock[19];
  v6 = SpinLock[21];
  BaseAddress = v5;
  if ( !v4 )
  {
    if ( v6 - 8 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v3 = v6 - 8;
    SpinLock[21] = v6 - 8;
    goto LABEL_9;
  }
  if ( v6 - 8 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  KeReleaseSpinLock(SpinLock, *((_BYTE *)SpinLock + 8));
  return v3;
}
