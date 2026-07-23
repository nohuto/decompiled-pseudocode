/*
 * XREFs of VslRegisterLogPages @ 0x140132268
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x140132248 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 VslRegisterLogPages()
{
  __int64 v0; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  _QWORD v4[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v5[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v6; // [rsp+78h] [rbp-80h]
  __int64 v7; // [rsp+80h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer(v4, v0, 4096LL, 1LL, 2);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = v4[0];
    v7 = v4[7];
    v3 = VslpEnterIumSecureMode(1, 234LL, 0LL, (__int64)v5);
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v4);
    return v3;
  }
  return result;
}
