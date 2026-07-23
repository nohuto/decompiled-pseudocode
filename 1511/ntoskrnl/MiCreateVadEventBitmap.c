/*
 * XREFs of MiCreateVadEventBitmap @ 0x1404831E8
 * Callers:
 *     MiCreateWriteWatchView @ 0x140482F1C (MiCreateWriteWatchView.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     RtlClearAllBitsEx @ 0x1400BC0AC (RtlClearAllBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
    MiInsertVadEvent(a2, PoolWithTag, 1LL);
    return 0LL;
  }
}
