/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1401BD4C8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  __int64 v0; // rax
  PHYSICAL_ADDRESS v1; // rdx
  __int16 v2; // bx
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  v0 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 40LL);
  v1 = v4[3];
  *(_DWORD *)v0 = 8;
  *(_BYTE *)(v0 + 8) = 1;
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(111LL, (PHYSICAL_ADDRESS)v1.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v4);
  return v2 != 0 ? 0xC0000001 : 0;
}
