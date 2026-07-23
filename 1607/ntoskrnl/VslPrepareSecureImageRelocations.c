/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x14023D438
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslPrepareSecureImageRelocations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD v6[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v7[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v8; // [rsp+78h] [rbp-80h]
  __int64 v9; // [rsp+80h] [rbp-78h]
  __int64 v10; // [rsp+88h] [rbp-70h]

  if ( (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v6, a2 & 0xFFFFFFFFFFFFF000uLL, a3, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v9 = v6[0];
    v10 = v6[7];
    v8 = a1;
    v5 = VslpEnterIumSecureMode(1, 25LL, 0LL, (__int64)v7);
    VslpUnlockPagesForTransfer((__int64)v6);
    return v5;
  }
  return result;
}
