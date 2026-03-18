/*
 * XREFs of VslGetSetSecureContext @ 0x1406209F8
 * Callers:
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401C33D0 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C35D0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetSetSecureContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // ax
  LOCK_OPERATION v4; // r9d
  __int64 result; // rax
  unsigned int v6; // ebx
  _QWORD v7[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v8[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int16 v9; // [rsp+72h] [rbp-86h]
  __int64 v10; // [rsp+78h] [rbp-80h]
  __int64 v11; // [rsp+80h] [rbp-78h]

  if ( a1 )
  {
    v3 = 14;
    v4 = IoWriteAccess;
  }
  else
  {
    v4 = IoReadAccess;
    v3 = 13;
  }
  v9 = v3;
  result = VslpLockPagesForTransfer((__int64)v7, a2, a3, v4, 0);
  if ( (int)result >= 0 )
  {
    v10 = v7[0];
    v11 = v7[7];
    v6 = VslpEnterIumSecureMode(1, v9, 0LL, (__int64)v8);
    VslpUnlockPagesForTransfer((__int64)v7);
    return v6;
  }
  return result;
}
