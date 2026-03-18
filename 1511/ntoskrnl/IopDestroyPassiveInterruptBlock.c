/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x140602DF8
 * Callers:
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x1401BF474 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1401BF514 (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 46);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
