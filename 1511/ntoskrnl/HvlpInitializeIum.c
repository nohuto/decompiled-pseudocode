/*
 * XREFs of HvlpInitializeIum @ 0x1407829C0
 * Callers:
 *     HvlPhase1Initialize @ 0x1401428B0 (HvlPhase1Initialize.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

__int64 HvlpInitializeIum()
{
  NTSTATUS v0; // ebx
  unsigned __int8 v2[8]; // [rsp+30h] [rbp-88h] BYREF
  BOOL v3; // [rsp+38h] [rbp-80h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+40h] [rbp-78h]

  PhysicalAddress = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL);
  v3 = KeKvaShadowingActive() != 0;
  v0 = HvlpEnterIumSecureMode(1u, 208, 0, v2);
  if ( v0 < 0 )
  {
    HvlpVsmVtlCallVa = 0LL;
  }
  else
  {
    HvlpIumThreadSemaphore.Header.WaitListHead.Blink = &HvlpIumThreadSemaphore.Header.WaitListHead;
    HvlpIumThreadSemaphore.Header.WaitListHead.Flink = &HvlpIumThreadSemaphore.Header.WaitListHead;
    HvlpIumThreadSemaphore.Header.Type = 5;
    HvlpIumThreadSemaphore.Header.Size = 8;
    HvlpIumThreadSemaphore.Header.SignalState = PhysicalAddress.LowPart;
    HvlpIumThreadSemaphore.Limit = PhysicalAddress.LowPart;
    HvlpFlags |= 0x2000u;
    HvlVsmEnabled = 1;
    off_1402D29D0();
  }
  return (unsigned int)v0;
}
