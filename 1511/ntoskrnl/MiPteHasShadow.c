/*
 * XREFs of MiPteHasShadow @ 0x1401DE8C4
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14012B400 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReadPteShadow @ 0x1401DE90C (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 * Callees:
 *     <none>
 */

__int64 MiPteHasShadow()
{
  __int64 result; // rax

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  result = 1LL;
  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    return 0LL;
  return result;
}
