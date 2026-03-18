/*
 * XREFs of KiSynchronizeAddressPolicyTarget @ 0x14020A5D0
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x1401FF8D4 (KeSynchronizeAddressPolicy.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 */

int KiSynchronizeAddressPolicyTarget()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process->AddressPolicy == 1 )
  {
    LODWORD(CurrentThread) = KeGetPcr()->Prcb.ShadowFlags;
    if ( ((unsigned __int8)CurrentThread & 2) == 0 )
      LODWORD(CurrentThread) = KiSetAddressPolicy(1);
  }
  return (int)CurrentThread;
}
