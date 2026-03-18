/*
 * XREFs of MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC
 * Callers:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14000F9D0 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockOwnedProtoPage @ 0x1400111C0 (MiLockOwnedProtoPage.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiExchangeWsle @ 0x140106588 (MiExchangeWsle.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MI_WRITE_VALID_PTE_VOLATILE(volatile signed __int64 *a1, __int64 a2)
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
      if ( (a2 & 4) != 0 )
        v3 &= ~0x20uLL;
    }
    v4 = result;
    result = _InterlockedCompareExchange64(a1, v3, result);
  }
  while ( v4 != result );
  return result;
}
