/*
 * XREFs of MiCreateVadEventBitmap @ 0x1404A66FC
 * Callers:
 *     MiCreateWriteWatchView @ 0x1404A6424 (MiCreateWriteWatchView.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140014090 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x140095EC4 (RtlClearAllBitsEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  _RTL_BITMAP_EX *PoolWithTag; // rbx
  int v10; // edi

  v8 = 8 * (((a3 & 0x3F) != 0) + (a3 >> 6)) + 64;
  PoolWithTag = (_RTL_BITMAP_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x77776D4Du);
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
    LODWORD(PoolWithTag->Buffer) = a4;
    PoolWithTag[1].SizeOfBitMap = a3;
    PoolWithTag[1].Buffer = &PoolWithTag[4].SizeOfBitMap;
    RtlClearAllBitsEx(PoolWithTag + 1);
    MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 1);
    return 0LL;
  }
}
