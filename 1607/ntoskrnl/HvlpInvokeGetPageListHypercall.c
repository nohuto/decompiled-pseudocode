/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x1401C1F7C
 * Callers:
 *     HvlpGetPageList @ 0x1401C1DA8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401C2078 (HvlpStartPageListIteration.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  PHYSICAL_ADDRESS v5; // rdx
  PHYSICAL_ADDRESS v7[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[48]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (_QWORD *)HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 24LL);
  v5 = v7[3];
  v4[1] = -1LL;
  *v4 = a2;
  v4[2] = 1LL;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
    151LL,
    (PHYSICAL_ADDRESS)v5.QuadPart,
    *(_QWORD *)(a1 + 16));
  return HvlpReleaseHypercallPage((__int64)v7);
}
