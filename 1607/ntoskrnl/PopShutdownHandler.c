/*
 * XREFs of PopShutdownHandler @ 0x1403DF97C
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x14013C73C (InbvIsBootDriverInstalled.c)
 *     xHalHaltSystem @ 0x140171708 (xHalHaltSystem.c)
 *     InbvAcquireDisplayOwnership @ 0x1401C3600 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401C3644 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401C3664 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401C36A0 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401C36D4 (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401C3740 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401C375C (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401C3798 (InbvSolidColorFill.c)
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
