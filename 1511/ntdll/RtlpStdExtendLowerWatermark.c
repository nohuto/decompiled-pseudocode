/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x1800E9794
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x1800E9A14 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x1800E9AC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800E9AE8 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdExtendLowerWatermark(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // dl
  void *v6; // rcx
  __int64 v7; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  RtlpStdLockAcquire(a1);
  v5 = *(_BYTE *)(a1 + 128);
  v6 = *(void **)(a1 + 144);
  v7 = *(_QWORD *)(a1 + 160);
  BaseAddress = v6;
  if ( !v5 )
  {
    if ( v7 + a2 > (unsigned __int64)v6 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v6 + RegionSize >= *(_QWORD *)(a1 + 152)
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      *(_QWORD *)(a1 + 144) = (char *)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 160) = v7 + a2;
    v4 = v7;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v7 + a2) <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v4;
}
