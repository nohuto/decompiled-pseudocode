/*
 * XREFs of HvlValidateSecureImagePages @ 0x140270778
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlValidateSecureImagePages(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // esi
  unsigned __int64 i; // rdi
  int v11; // eax
  unsigned __int64 v12; // rbx
  int v13; // r13d
  _QWORD v16[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v17[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  char v23; // [rsp+B0h] [rbp-50h]

  v6 = 0;
  for ( i = a3; i; i -= v12 )
  {
    v11 = 0;
    v12 = 2072576LL;
    if ( i < 0x1FA000 )
      v12 = i;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = v11 + (v12 >> 12);
    v6 = HvlpLockPagesForTransfer((__int64)v16, a4, v13 << 12, IoReadAccess, 0);
    if ( v6 < 0 )
      break;
    v18 = a1;
    v20 = v16[0];
    v21 = v16[7];
    v23 = a6;
    v19 = a2;
    v22 = a5;
    v6 = HvlpEnterIumSecureMode(1u, 193, 0, v17);
    HvlpUnlockPagesForTransfer((__int64)v16);
    if ( v6 < 0 )
      break;
    a4 += v12;
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)v6;
}
