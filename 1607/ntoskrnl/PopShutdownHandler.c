/*
 * XREFs of PopShutdownHandler @ 0x1403DF97C
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x14013CCAC (InbvIsBootDriverInstalled.c)
 *     xHalHaltSystem @ 0x140171C08 (xHalHaltSystem.c)
 *     InbvAcquireDisplayOwnership @ 0x1401C34E4 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401C3528 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401C3548 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401C3584 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401C35B8 (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401C3624 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401C3640 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401C367C (InbvSolidColorFill.c)
 */

void __noreturn PopShutdownHandler()
{
  __int64 ResourceAddress; // rdi
  __int64 v1; // rax

  _disable();
  if ( !KeGetCurrentPrcb()->Number && InbvIsBootDriverInstalled() )
  {
    if ( !InbvCheckDisplayOwnership() )
      InbvAcquireDisplayOwnership();
    InbvResetDisplay();
    InbvSolidColorFill(0LL);
    InbvEnableDisplayString(1);
    InbvSetScrollRegion();
    ResourceAddress = InbvGetResourceAddress();
    v1 = InbvGetResourceAddress();
    if ( ResourceAddress )
    {
      if ( v1 )
      {
        InbvBitBlt();
        InbvBitBlt();
      }
    }
  }
  off_1402F22E8();
}
