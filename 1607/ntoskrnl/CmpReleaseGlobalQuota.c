/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140514570
 * Callers:
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     CmpAllocate @ 0x140513ED4 (CmpAllocate.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     CmpFree @ 0x140514550 (CmpFree.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x140610158 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610284 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x140610488 (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
