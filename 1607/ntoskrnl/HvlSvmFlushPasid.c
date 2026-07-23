/*
 * XREFs of HvlSvmFlushPasid @ 0x1401BE204
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSvmFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 <= 0xC )
    return HvlpFastFlushPasidAddressList();
  return HvlpSlowFlushPasidAddressList();
}
