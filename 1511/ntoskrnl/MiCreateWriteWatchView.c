/*
 * XREFs of MiCreateWriteWatchView @ 0x140482F1C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 * Callees:
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
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
