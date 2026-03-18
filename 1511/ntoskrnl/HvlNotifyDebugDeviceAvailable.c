/*
 * XREFs of HvlNotifyDebugDeviceAvailable @ 0x1401B0B6C
 * Callers:
 *     PopHiberCheckResume @ 0x14039D7D4 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyDebugDeviceAvailable()
{
  _DWORD *v0; // rax
  PHYSICAL_ADDRESS v1; // rdx
  __int16 v2; // bx
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v5[14]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v6; // [rsp+B0h] [rbp-28h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)&v6, 8LL);
  v1 = v4[3];
  *v0 = 1;
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(135LL, (PHYSICAL_ADDRESS)v1.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v4);
  if ( v2 )
    return 3221225473LL;
  if ( (HvlpFlags & 0x2000) != 0 )
  {
    memset(v5, 0, 104);
    HvlpEnterIumSecureMode(1u, 238, 0, (unsigned __int8 *)v5);
  }
  return 0LL;
}
