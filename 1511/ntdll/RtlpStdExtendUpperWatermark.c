/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1800E9870
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800E994C (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x1800E9AC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800E9AE8 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  char v4; // dl
  char *v5; // rcx
  __int64 v6; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  RtlpStdLockAcquire(a1);
  v4 = *(_BYTE *)(a1 + 128);
  v5 = *(char **)(a1 + 152);
  v6 = *(_QWORD *)(a1 + 168);
  BaseAddress = v5;
  if ( !v4 )
  {
    if ( v6 - 8 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v6 - 8;
    *(_QWORD *)(a1 + 168) = v6 - 8;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v6 - 8) >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v3;
}
