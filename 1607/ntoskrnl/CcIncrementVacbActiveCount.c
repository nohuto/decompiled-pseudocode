/*
 * XREFs of CcIncrementVacbActiveCount @ 0x140018984
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x140016E7C (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x14001872C (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) )
    KeBugCheckEx(0x34u, 0x977uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
