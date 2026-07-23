/*
 * XREFs of MiCreateWriteWatchView @ 0x1404A6424
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 */

__int64 __fastcall MiCreateWriteWatchView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = MiCreateVadEventBitmap(a1, a2, a3, 4LL);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x8000u);
    return 0LL;
  }
  return result;
}
