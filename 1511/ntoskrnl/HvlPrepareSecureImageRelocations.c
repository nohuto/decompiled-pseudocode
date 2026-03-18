/*
 * XREFs of HvlPrepareSecureImageRelocations @ 0x140220F50
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlPrepareSecureImageRelocations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD v6[8]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v7[8]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v8; // [rsp+78h] [rbp-80h]
  __int64 v9; // [rsp+80h] [rbp-78h]
  __int64 v10; // [rsp+88h] [rbp-70h]

  if ( (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = HvlpLockPagesForTransfer((__int64)v6, a2 & 0xFFFFFFFFFFFFF000uLL, a3, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v9 = v6[0];
    v10 = v6[7];
    v8 = a1;
    v5 = HvlpEnterIumSecureMode(1u, 23, 0, v7);
    HvlpUnlockPagesForTransfer((__int64)v6);
    return v5;
  }
  return result;
}
