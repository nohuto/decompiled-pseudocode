/*
 * XREFs of VslCreateSecureImageSection @ 0x14023D040
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
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
  _BYTE v11[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v12; // [rsp+78h] [rbp-80h]
  __int64 v13; // [rsp+80h] [rbp-78h]
  __int64 v14; // [rsp+88h] [rbp-70h]
  __int64 v15; // [rsp+90h] [rbp-68h]
  __int64 v16; // [rsp+98h] [rbp-60h]

  v7 = a4;
  if ( a1 > 0x1FA )
    return 3221225485LL;
  VslpLockPagesForTransfer((__int64)v10, a2, a1 << 12, IoReadAccess, 0);
  v12 = v10[0];
  v13 = v10[7];
  v14 = a3;
  v16 = a5;
  v15 = v7;
  v9 = VslpEnterIumSecureMode(1, 22LL, 0LL, (__int64)v11);
  VslpUnlockPagesForTransfer((__int64)v10);
  if ( v9 >= 0 )
    *a6 = v13;
  return (unsigned int)v9;
}
