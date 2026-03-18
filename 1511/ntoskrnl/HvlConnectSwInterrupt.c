/*
 * XREFs of HvlConnectSwInterrupt @ 0x14074F444
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140750C54 (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x1407842BC (KiConnectSwInterrupt.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1401339B8 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rdx
  int v6; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v10[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v11; // [rsp+88h] [rbp-80h]
  __int64 v12; // [rsp+90h] [rbp-78h]

  if ( (int)HvlQueryVsmConnection(&v8) < 0 )
    return 3224698910LL;
  if ( v4 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, v4, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v6 = HvlpLockPagesForTransfer((__int64)v9, BugCheckParameter2, v4, IoReadAccess, 2);
    if ( v6 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v6);
  }
  else
  {
    memset(v9, 0, sizeof(v9));
  }
  v11 = v9[0];
  v12 = v9[7];
  BugCheckParameter4 = HvlpEnterIumSecureMode(1u, 32, 0, v10);
  if ( BugCheckParameter2 )
    HvlpUnlockPagesForTransfer((__int64)v9);
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
