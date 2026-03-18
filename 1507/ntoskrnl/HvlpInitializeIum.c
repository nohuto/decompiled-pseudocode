/*
 * XREFs of HvlpInitializeIum @ 0x1407F9184
 * Callers:
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS HvlpInitializeIum()
{
  NTSTATUS result; // eax
  unsigned __int8 v1[8]; // [rsp+20h] [rbp-88h] BYREF
  LONGLONG v2; // [rsp+28h] [rbp-80h]
  LONG v3; // [rsp+30h] [rbp-78h]

  v2 = MmGetPhysicalAddress((PVOID)0xFFFFF78000000000LL).QuadPart >> 12;
  result = HvlpEnterIumSecureMode(1u, 208, 0, v1);
  if ( result < 0 )
  {
    HvlpVsmVtlCallVa = 0LL;
  }
  else
  {
    HvlpIumThreadSemaphore.Header.WaitListHead.Blink = &HvlpIumThreadSemaphore.Header.WaitListHead;
    HvlpIumThreadSemaphore.Header.WaitListHead.Flink = &HvlpIumThreadSemaphore.Header.WaitListHead;
    HvlpIumThreadSemaphore.Header.Type = 5;
    HvlpIumThreadSemaphore.Header.Size = 8;
    HvlpIumThreadSemaphore.Header.SignalState = v3;
    HvlpIumThreadSemaphore.Limit = v3;
    HvlpFlags |= 0x2000u;
  }
  return result;
}
