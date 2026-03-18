/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1401C39B0
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1401CB510 (KiSynchronizeAddressPolicyTarget.c)
 */

void __fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 v3[88]; // [rsp+30h] [rbp-C8h] BYREF

  if ( *(_BYTE *)(a1 + 640) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx((__int64)v3, (unsigned __int16 *)(a1 + 272));
    KeRemoveProcessorAffinityEx(v3, CurrentPrcb->Number);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( (unsigned int)KeCountSetBitsAffinityEx(v3) )
    {
      KiIpiSendPacket(0, v3, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      while ( CurrentPrcb->PacketBarrier )
        _mm_pause();
    }
    __writecr8(CurrentIrql);
  }
}
