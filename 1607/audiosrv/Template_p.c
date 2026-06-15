/*
 * XREFs of Template_p @ 0x180073FCC
 * Callers:
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180073DC4 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall Template_p(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = &v7;
  v6 = 0;
  v5 = 8;
  return EtwEventWrite(Microsoft_Windows_AudioHandle, a2, 1LL, &v4);
}
