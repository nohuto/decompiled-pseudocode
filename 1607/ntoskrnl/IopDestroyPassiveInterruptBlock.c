/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x14062D190
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD9FC (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401CDA9C (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 48);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
