/*
 * XREFs of HvlFillSecureAllocation @ 0x14026FFF4
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlFillSecureAllocation(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v4; // edi
  unsigned int i; // ebx
  int v9; // esi
  _QWORD v11[8]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int8 v12[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+78h] [rbp-A0h]
  __int64 v14; // [rsp+80h] [rbp-98h]
  __int64 v15; // [rsp+88h] [rbp-90h]
  __int64 v16; // [rsp+90h] [rbp-88h]

  v4 = 0;
  for ( i = a3; i; i -= v9 )
  {
    v9 = 506;
    if ( i < 0x1FA )
      v9 = i;
    v4 = HvlpLockPagesForTransfer((__int64)v11, a4, v9 << 12, IoReadAccess, 0);
    if ( v4 < 0 )
      break;
    v14 = a2;
    v15 = v11[0];
    v16 = v11[7];
    v13 = a1;
    v4 = HvlpEnterIumSecureMode(1u, 17, 0, v12);
    HvlpUnlockPagesForTransfer((__int64)v11);
    if ( v4 < 0 )
      break;
    a2 += v9;
    a4 += (unsigned int)(v9 << 12);
  }
  return (unsigned int)v4;
}
