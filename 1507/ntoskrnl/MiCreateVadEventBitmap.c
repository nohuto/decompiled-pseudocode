/*
 * XREFs of MiCreateVadEventBitmap @ 0x14051C46C
 * Callers:
 *     MiCreateWriteWatchView @ 0x14051C444 (MiCreateWriteWatchView.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140089D40 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x1400FE45C (RtlClearAllBitsEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  SIZE_T v6; // rdi
  _RTL_BITMAP_EX *PoolWithTag; // rbx
  int v8; // edi

  v6 = 8 * (((a3 & 0x3F) != 0) + (a3 >> 6)) + 40;
  PoolWithTag = (_RTL_BITMAP_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x77776D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
  else
  {
    LODWORD(PoolWithTag->Buffer) = 4;
    PoolWithTag[1].SizeOfBitMap = a3;
    PoolWithTag[1].Buffer = (unsigned __int64 *)&PoolWithTag[2].Buffer;
    RtlClearAllBitsEx(PoolWithTag + 1);
    MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 1);
    return 0LL;
  }
}
