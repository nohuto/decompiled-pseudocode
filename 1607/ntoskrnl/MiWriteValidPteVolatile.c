/*
 * XREFs of MiWriteValidPteVolatile @ 0x1400FCE74
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiLockOwnedProtoPage @ 0x1400224F0 (MiLockOwnedProtoPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140022B78 (MiTryLockProtoPoolPageAtDpc.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiExchangeWsle @ 0x1400AFDA8 (MiExchangeWsle.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
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
