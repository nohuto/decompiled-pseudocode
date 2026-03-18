/*
 * XREFs of MiCreateVadEventBitmap @ 0x1404BA9CC
 * Callers:
 *     MiCreateWriteWatchView @ 0x1404BA6F4 (MiCreateWriteWatchView.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140014510 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029BD0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x1400966C4 (RtlClearAllBitsEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *PoolWithTag; // rbx
  int v10; // edi

  v8 = 8 * (((a3 & 0x3F) != 0) + (a3 >> 6)) + 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x77776D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 2) = a4;
    *((_QWORD *)PoolWithTag + 2) = a3;
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 64;
    RtlClearAllBitsEx((__int64)(PoolWithTag + 16));
    MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 1);
    return 0LL;
  }
}
