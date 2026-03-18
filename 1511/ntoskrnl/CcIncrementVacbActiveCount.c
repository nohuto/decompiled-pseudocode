/*
 * XREFs of CcIncrementVacbActiveCount @ 0x1400B0DD4
 * Callers:
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400E15A8 (CcGetVirtualAddressIfMapped.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) )
    KeBugCheckEx(0x34u, 0x979uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
