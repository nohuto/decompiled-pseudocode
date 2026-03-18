/*
 * XREFs of PopShutdownHandler @ 0x1403B2C90
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1401345A8 (InbvIsBootDriverInstalled.c)
 *     xHalHaltSystem @ 0x140166DD0 (xHalHaltSystem.c)
 *     InbvAcquireDisplayOwnership @ 0x1401B5B18 (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401B5B5C (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401B5B7C (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401B5BB8 (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401B5BEC (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401B5C58 (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401B5C74 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401B5CB0 (InbvSolidColorFill.c)
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
  off_1402D2648();
}
