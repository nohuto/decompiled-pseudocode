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
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h]
  unsigned __int64 v9; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  RtlpStdLockAcquire(a1);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(a1 + 160);
  v8 = v5;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v6 + a2 > v5 )
    {
      v9 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v5 + v9 >= *(_QWORD *)(a1 + 152) || (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 144) = v9 + v8;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 160) = v6 + a2;
    v4 = v6;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v6 + a2) <= *(_QWORD *)(a1 + 168) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v4;
}
