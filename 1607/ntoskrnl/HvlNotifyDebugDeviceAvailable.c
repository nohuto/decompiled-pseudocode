/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1401BD414
 * Callers:
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  _DWORD *v0; // rax
  PHYSICAL_ADDRESS v1; // rdx
  __int16 v2; // bx
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v5[112]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v6; // [rsp+B0h] [rbp-28h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)&v6, 8LL);
  v1 = v4[3];
  *v0 = 1;
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(135LL, (PHYSICAL_ADDRESS)v1.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v4);
  if ( v2 )
    return 3221225473LL;
  if ( VslVsmEnabled )
  {
    memset(v5, 0, 0x68uLL);
    VslpEnterIumSecureMode(1, 240LL, 0LL, (__int64)v5);
  }
  return 0LL;
}
