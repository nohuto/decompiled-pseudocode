/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1401E9EEC
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyRootCrashdump @ 0x1401E992C (HvlNotifyRootCrashdump.c)
 *     IoSaveBugCheckProgress @ 0x1401F3834 (IoSaveBugCheckProgress.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 */

__int64 HvlResumeFromRootCrashdump()
{
  __int64 result; // rax
  PVOID *v1; // rcx
  unsigned __int8 v2[112]; // [rsp+20h] [rbp-88h] BYREF

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 4) != 0 )
  {
    HvlNotifyRootCrashdump(2);
    if ( (HvlpFlags & 0x2000) != 0 )
      HvlpEnterIumSecureMode(1u, 2051, 0, v2);
    HvlEnlightenments = HvlpEnlightenments;
    off_140321968(v1);
    return IoSaveBugCheckProgress(99LL);
  }
  return result;
}
