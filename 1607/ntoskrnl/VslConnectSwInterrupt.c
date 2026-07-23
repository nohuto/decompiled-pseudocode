/*
 * XREFs of VslConnectSwInterrupt @ 0x14079873C
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x14079A9D8 (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x1407CFB34 (KiConnectSwInterrupt.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeInitializeEnumerationContext @ 0x1400D3350 (KeInitializeEnumerationContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlIsCoreSharingPossible @ 0x1401BA9F8 (HvlIsCoreSharingPossible.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rdx
  int v6; // eax
  __int64 Prcb; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v10[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v11[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-70h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( v4 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, v4, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v6 = VslpLockPagesForTransfer((__int64)v11, BugCheckParameter2, v4, IoReadAccess, 2);
    if ( v6 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v6);
  }
  else
  {
    memset(v11, 0, sizeof(v11));
  }
  memset(v12, 0, 0x68uLL);
  v12[1] = v11[0];
  v12[2] = v11[7];
  KeInitializeEnumerationContext((__int64)v10, (__int64)KeActiveProcessors);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
  {
    Prcb = KeGetPrcb(v9);
    if ( ((*(_QWORD *)(Prcb + 24920) - 1LL) & *(_QWORD *)(Prcb + 24920)) != 0 )
    {
      LODWORD(v12[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v12[3]) |= 1u;
  BugCheckParameter4 = VslpEnterIumSecureMode(1, 34LL, 0LL, (__int64)v12);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer((__int64)v11);
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
