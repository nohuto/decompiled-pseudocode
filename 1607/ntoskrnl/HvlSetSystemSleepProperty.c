/*
 * XREFs of HvlSetSystemSleepProperty @ 0x1401BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // rdx
  PHYSICAL_ADDRESS v9[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = HvlpAcquireHypercallPage(v9, 1, (__int64)v10, 40LL);
  v7 = v9[3];
  *(_DWORD *)v6 = 3;
  *(_DWORD *)(v6 + 8) = a1;
  *(_BYTE *)(v6 + 12) = a2;
  *(_BYTE *)(v6 + 13) = a3;
  LOWORD(a1) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(111LL, (PHYSICAL_ADDRESS)v7.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v9);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
