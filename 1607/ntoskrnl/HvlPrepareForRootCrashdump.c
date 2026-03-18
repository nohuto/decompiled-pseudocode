/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401BD710
 * Callers:
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     HvlNotifyRootCrashdump @ 0x1401BD668 (HvlNotifyRootCrashdump.c)
 *     CmpMarkLockTryAcquired @ 0x1405281C8 (CmpMarkLockTryAcquired.c)
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
