/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1401BE5E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  PHYSICAL_ADDRESS v5; // rdx
  PHYSICAL_ADDRESS v7[4]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v8[64]; // [rsp+40h] [rbp-58h] BYREF

  v4 = HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 32LL);
  v5 = v7[3];
  *(_QWORD *)v4 = -1LL;
  *(_QWORD *)(v4 + 8) = a1;
  *(_OWORD *)(v4 + 16) = *a2;
  LOWORD(a1) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(125LL, (PHYSICAL_ADDRESS)v5.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v7);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
