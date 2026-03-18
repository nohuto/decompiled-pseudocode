/*
 * XREFs of HvlCreateSecureImageSection @ 0x140220AB4
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlCreateSecureImageSection(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rdi
  NTSTATUS v9; // edi
  _QWORD v10[8]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v11[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v12; // [rsp+78h] [rbp-80h]
  __int64 v13; // [rsp+80h] [rbp-78h]
  __int64 v14; // [rsp+88h] [rbp-70h]
  __int64 v15; // [rsp+90h] [rbp-68h]
  __int64 v16; // [rsp+98h] [rbp-60h]

  v7 = a4;
  if ( a1 > 0x1FA )
    return 3221225485LL;
  HvlpLockPagesForTransfer((__int64)v10, a2, a1 << 12, IoReadAccess, 0);
  v12 = v10[0];
  v13 = v10[7];
  v14 = a3;
  v16 = a5;
  v15 = v7;
  v9 = HvlpEnterIumSecureMode(1u, 20, 0, v11);
  HvlpUnlockPagesForTransfer((__int64)v10);
  if ( v9 >= 0 )
    *a6 = v13;
  return (unsigned int)v9;
}
