/*
 * XREFs of MiCreateWriteWatchView @ 0x14051C444
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiCreateVadEventBitmap @ 0x14051C46C (MiCreateVadEventBitmap.c)
 */

__int64 __fastcall MiCreateWriteWatchView(__int64 a1)
{
  __int64 result; // rax

  result = MiCreateVadEventBitmap();
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x8000u);
    return 0LL;
  }
  return result;
}
