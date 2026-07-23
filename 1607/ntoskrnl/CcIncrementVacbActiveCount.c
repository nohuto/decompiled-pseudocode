/*
 * XREFs of CcIncrementVacbActiveCount @ 0x140018504
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x1400169FC (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) )
    KeBugCheckEx(0x34u, 0x977uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
