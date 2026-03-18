/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1404A08D0
 * Callers:
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     CmpAllocate @ 0x1404A02B8 (CmpAllocate.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpFree @ 0x1404A08B0 (CmpFree.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x14066365C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140663788 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14066398C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
