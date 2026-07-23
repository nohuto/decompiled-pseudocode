/*
 * XREFs of VslFillSecureAllocation @ 0x14023D12C
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslFillSecureAllocation(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 i; // rbx
  unsigned int v9; // r14d
  _QWORD v11[8]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v12[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+78h] [rbp-A0h]
  __int64 v14; // [rsp+80h] [rbp-98h]
  __int64 v15; // [rsp+88h] [rbp-90h]
  __int64 v16; // [rsp+90h] [rbp-88h]

  v4 = 0;
  for ( i = a3; i; i -= v9 )
  {
    v9 = 2072576 - (a4 & 0xFFF);
    if ( v9 > i )
      v9 = i;
    v4 = VslpLockPagesForTransfer((__int64)v11, a4, v9, IoReadAccess, 0);
    if ( v4 < 0 )
      break;
    v15 = v11[0];
    v16 = v11[7];
    v13 = a1;
    v14 = a2;
    v4 = VslpEnterIumSecureMode(1, 20LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v4 < 0 )
      break;
    a4 += v9;
    a2 += v9;
  }
  return (unsigned int)v4;
}
