/*
 * XREFs of HvlpSlowFlushSecureRangeList @ 0x1401B3BF0
 * Callers:
 *     HvlpSlowFlushListTb @ 0x140221B58 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140221CA8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlpSlowFlushSecureRangeList(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  _KPROCESS *Process; // r11
  unsigned int v6; // eax
  _QWORD *v7; // r9
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]

  v4 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0;
  v7 = (_QWORD *)(a4 + a2);
  if ( !a3 )
    return 0;
  while ( *v7 > (unsigned __int64)MmHighestUserAddress )
  {
    ++v6;
    ++v7;
    if ( v6 >= a3 )
      return 0;
  }
  SecurePid = Process->SecurePid;
  v11 = a1;
  v12 = a3;
  v13 = v4;
  return HvlpEnterIumSecureMode(1u, 226, 0, v9);
}
