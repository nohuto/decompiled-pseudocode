/*
 * XREFs of HvlGetSetSecureContext @ 0x140670B1C
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlGetSetSecureContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // ax
  LOCK_OPERATION v4; // r9d
  __int64 result; // rax
  unsigned int v6; // ebx
  _QWORD v7[8]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v8[2]; // [rsp+70h] [rbp-88h] BYREF
  __int16 v9; // [rsp+72h] [rbp-86h]
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
  result = HvlpLockPagesForTransfer((__int64)v7, a2, a3, v4, 0);
  if ( (int)result >= 0 )
  {
    v10 = v7[0];
    v11 = v7[7];
    v6 = HvlpEnterIumSecureMode(1u, v9, 0, v8);
    HvlpUnlockPagesForTransfer((__int64)v7);
    return v6;
  }
  return result;
}
