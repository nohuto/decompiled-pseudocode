/*
 * XREFs of HvlRegisterSecureSystemProcess @ 0x1401B3340
 * Callers:
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS HvlRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]
  ULONG_PTR v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]

  v0 = PsSecureSystemProcess;
  v3 = *(_QWORD *)(PsSecureSystemProcess + 744);
  v4 = PsSecureSystemProcess;
  result = HvlpEnterIumSecureMode(1u, 4, 0, v2);
  if ( result >= 0 )
    *(_QWORD *)(v0 + 720) = v5;
  return result;
}
