/*
 * XREFs of HvlRegisterLogPages @ 0x14015A60C
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x14015A5EC (PsIumResumeAfterHibernate.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 */

__int64 HvlRegisterLogPages()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _QWORD v2[8]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v3[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v4; // [rsp+78h] [rbp-80h]
  __int64 v5; // [rsp+80h] [rbp-78h]

  if ( !HvlpVsmVtlCallVa )
    return 3221225629LL;
  result = HvlpLockPagesForTransfer(v2, PspIumLogBuffer, 4096LL, 1LL, 2);
  if ( (int)result >= 0 )
  {
    v4 = v2[0];
    v5 = v2[7];
    v1 = HvlpEnterIumSecureMode(1u, 212, 0, v3);
    HvlpUnlockPagesForTransfer(v2);
    return v1;
  }
  return result;
}
