/*
 * XREFs of MiWriteValidPteVolatile @ 0x140226110
 * Callers:
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400E25B4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiExchangeWsle @ 0x1401329EC (MiExchangeWsle.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8
  signed __int64 v4; // rtt

  result = *a1;
  do
  {
    v3 = result;
    if ( (a2 & 0x80000000) != 0 )
    {
      v3 = result ^ (result ^ (a2 << 52)) & 0x7FF0000000000000LL;
    }
    else
    {
      if ( (a2 & 1) != 0 )
        v3 = result | 0x20;
      if ( (a2 & 2) != 0 )
        v3 |= 0x42uLL;
    }
    v4 = result;
    result = _InterlockedCompareExchange64(a1, v3, result);
  }
  while ( v4 != result );
  return result;
}
