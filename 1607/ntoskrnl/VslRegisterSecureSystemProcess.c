/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x1401C2D78
 * Callers:
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  NTSTATUS result; // eax
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]
  ULONG_PTR v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]

  v0 = PsSecureSystemProcess;
  v3 = *(_QWORD *)(PsSecureSystemProcess + 744);
  v4 = PsSecureSystemProcess;
  result = VslpEnterIumSecureMode(1, 4LL, 0LL, (__int64)v2);
  if ( result >= 0 )
    *(_QWORD *)(v0 + 720) = v5;
  return result;
}
