/*
 * XREFs of HvlQuerySecureKernelProfileInformation @ 0x1401B3250
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1401339B8 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 */

__int64 __fastcall HvlQuerySecureKernelProfileInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  NTSTATUS v10; // edi
  __int64 v11; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v12[8]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int8 v13[8]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v14; // [rsp+88h] [rbp-90h]
  __int64 v15; // [rsp+90h] [rbp-88h]
  __int64 v16; // [rsp+98h] [rbp-80h]

  if ( (int)HvlQueryVsmConnection(&v11) < 0 )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( a3 )
  {
    result = HvlpLockPagesForTransfer(v12, v7, v8, 2LL, 0);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    memset(v12, 0, sizeof(v12));
  }
  v15 = v12[0];
  v16 = v12[7];
  v14 = a1;
  v10 = HvlpEnterIumSecureMode(1u, 40, 0, v13);
  if ( v10 >= 0 )
    *a4 = v15;
  if ( a3 )
    HvlpUnlockPagesForTransfer(v12);
  return (unsigned int)v10;
}
