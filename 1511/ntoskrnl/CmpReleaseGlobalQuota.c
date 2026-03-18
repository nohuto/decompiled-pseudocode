/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1403D8344
 * Callers:
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpFree @ 0x1403D8324 (CmpFree.c)
 *     CmpAllocate @ 0x1403D8F04 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x1405EB6B4 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1405EB7E0 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1405EB9E4 (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
