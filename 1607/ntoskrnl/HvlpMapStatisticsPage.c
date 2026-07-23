/*
 * XREFs of HvlpMapStatisticsPage @ 0x1401BBA98
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB610 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x1401BB95C (HvlpInitializeBootProcessor.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  PHYSICAL_ADDRESS v8; // r8
  PHYSICAL_ADDRESS v9; // rdx
  _QWORD *v10; // rdi
  PHYSICAL_ADDRESS v12[4]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v13[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v15[48]; // [rsp+70h] [rbp-58h] BYREF

  v6 = HvlpAcquireHypercallPage(v12, 1, (__int64)v15, 24LL);
  v7 = HvlpAcquireHypercallPage(v13, 2, (__int64)v14, 8LL);
  v8 = v13[3];
  v9 = v12[3];
  v10 = (_QWORD *)v7;
  *(_OWORD *)(v6 + 8) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                 108LL,
                 (PHYSICAL_ADDRESS)v9.QuadPart,
                 (PHYSICAL_ADDRESS)v8.QuadPart);
  *a3 = *v10 << 12;
  HvlpReleaseHypercallPage(v12);
  HvlpReleaseHypercallPage(v13);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}
