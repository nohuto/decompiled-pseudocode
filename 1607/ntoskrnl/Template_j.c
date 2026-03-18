/*
 * XREFs of Template_j @ 0x1401CE054
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14049D7A4 (PpCheckInDriverDatabase.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_j(__int64 a1, __int64 a2, __int64 a3, ULONGLONG a4)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a4;
  UserData.Size = 16;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_Driver_Blocked, 0LL, 1u, &UserData);
}
