/*
 * XREFs of MiPteHasShadow @ 0x1401EF1B8
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14010D6A4 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReadPteShadow @ 0x1401EF20C (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 * Callees:
 *     <none>
 */

__int64 MiPteHasShadow()
{
  __int64 result; // rax

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  result = 1LL;
  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    return 0LL;
  return result;
}
