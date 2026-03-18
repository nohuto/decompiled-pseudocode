/*
 * XREFs of PopShutdownHandler @ 0x140403F30
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x14015EF60 (InbvIsBootDriverInstalled.c)
 *     xHalHaltSystem @ 0x140195B88 (xHalHaltSystem.c)
 *     InbvAcquireDisplayOwnership @ 0x1401F0A2C (InbvAcquireDisplayOwnership.c)
 *     InbvBitBlt @ 0x1401F0A70 (InbvBitBlt.c)
 *     InbvCheckDisplayOwnership @ 0x1401F0A90 (InbvCheckDisplayOwnership.c)
 *     InbvEnableDisplayString @ 0x1401F0ACC (InbvEnableDisplayString.c)
 *     InbvGetResourceAddress @ 0x1401F0B00 (InbvGetResourceAddress.c)
 *     InbvResetDisplay @ 0x1401F0B6C (InbvResetDisplay.c)
 *     InbvSetScrollRegion @ 0x1401F0B88 (InbvSetScrollRegion.c)
 *     InbvSolidColorFill @ 0x1401F0BC4 (InbvSolidColorFill.c)
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
  off_140321798();
}
