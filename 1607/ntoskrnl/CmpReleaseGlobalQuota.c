/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1404F7960
 * Callers:
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     CmpAllocate @ 0x1404F72C4 (CmpAllocate.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpFree @ 0x1404F7940 (CmpFree.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x14061020C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610338 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
