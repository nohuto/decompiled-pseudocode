/*
 * XREFs of HvlEnterSleepState @ 0x1401BC8A4
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  _DWORD *v2; // rax
  PHYSICAL_ADDRESS v3; // rdx
  PHYSICAL_ADDRESS v5[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF

  v2 = (_DWORD *)HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 8LL);
  v3 = v5[3];
  *v2 = a1;
  LOWORD(a1) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(132LL, (PHYSICAL_ADDRESS)v3.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v5);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
