/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x1401C2C90
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  __int64 result; // rax
  NTSTATUS v11; // edi
  unsigned int v12; // [rsp+20h] [rbp-E8h]
  _QWORD v13[8]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v14[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  __int64 v17; // [rsp+88h] [rbp-80h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( a3 )
  {
    result = VslpLockPagesForTransfer(v13, v7, v9, 2LL, v8 & v12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    memset(v13, 0, sizeof(v13));
  }
  v16 = v13[0];
  v17 = v13[7];
  v15 = a1;
  v11 = VslpEnterIumSecureMode(1, 42LL, 0LL, (__int64)v14);
  if ( v11 >= 0 )
    *a4 = v16;
  if ( a3 )
    VslpUnlockPagesForTransfer(v13);
  return (unsigned int)v11;
}
