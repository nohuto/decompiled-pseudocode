/*
 * XREFs of VslValidateSecureImagePages @ 0x14023D80C
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslValidateSecureImagePages(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // esi
  unsigned __int64 i; // rdi
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // r13d
  _QWORD v16[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v17[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  char v23; // [rsp+B0h] [rbp-50h]

  v6 = 0;
  for ( i = a3; i; i -= v11 )
  {
    v11 = 2072576LL;
    if ( (a4 & 0xFFF) != 0 )
      v11 = 2068480LL;
    v12 = 0;
    if ( v11 > i )
      v11 = i;
    LOBYTE(v12) = (v11 & 0xFFF) != 0;
    v13 = v12 + (v11 >> 12);
    v6 = VslpLockPagesForTransfer((__int64)v16, a4, v13 << 12, IoReadAccess, 0);
    if ( v6 < 0 )
      break;
    v18 = a1;
    v20 = v16[0];
    v21 = v16[7];
    v23 = a6;
    v19 = a2;
    v22 = a5;
    v6 = VslpEnterIumSecureMode(1, 193LL, 0LL, (__int64)v17);
    VslpUnlockPagesForTransfer((__int64)v16);
    if ( v6 < 0 )
      break;
    a4 += v11;
    a5 += v11;
    a2 += v13;
  }
  return (unsigned int)v6;
}
