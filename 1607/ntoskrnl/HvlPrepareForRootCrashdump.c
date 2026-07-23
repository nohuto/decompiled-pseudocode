/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401BD5F4
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlNotifyRootCrashdump @ 0x1401BD54C (HvlNotifyRootCrashdump.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 */

void __fastcall HvlPrepareForRootCrashdump(PVOID *a1)
{
  char v1; // al
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  v1 = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
    v1 = HvlpFlags;
  }
  if ( VslVsmEnabled )
  {
    VslpEnterIumSecureMode(1, 236LL, 0LL, (__int64)v2);
    v1 = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
      goto LABEL_8;
    PoAllProcIntrDisabled = 1;
  }
  if ( (v1 & 2) != 0 )
    HvlNotifyRootCrashdump(1);
LABEL_8:
  off_1402F24B0(a1);
  off_1402F23A8();
}
