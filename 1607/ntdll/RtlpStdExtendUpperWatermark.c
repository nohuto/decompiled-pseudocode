/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1800F2B80
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800F2C5C (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x1800F2DD8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800F2DF8 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v2 = 0LL;
  RtlpStdLockAcquire(a1);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 168);
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v4 - 8 < v3 )
    {
      if ( v3 - 4096 <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      v6 = v3 - 4096;
      if ( (int)ZwAllocateVirtualMemory() < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = v6;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v2 = v4 - 8;
    *(_QWORD *)(a1 + 168) = v4 - 8;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v4 - 8) >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v2;
}
