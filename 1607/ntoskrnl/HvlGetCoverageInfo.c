/*
 * XREFs of HvlGetCoverageInfo @ 0x1401BA8BC
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-918h] BYREF
  __int64 v15; // [rsp+38h] [rbp-900h]
  _BYTE v16[24]; // [rsp+40h] [rbp-8F8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8E0h]
  _BYTE v18[144]; // [rsp+60h] [rbp-8D8h] BYREF
  _BYTE v19[2064]; // [rsp+F0h] [rbp-848h] BYREF

  v7 = 0;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v14, 1LL, v19, 1032LL);
  v9 = HvlpAcquireHypercallPage(v16, 2LL, v18, 72LL);
  v10 = v17;
  v11 = v9;
  v12 = v15;
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallCodeVa(147LL, v12, v10) )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v11 + 8);
    a1[1] = *(_OWORD *)(v11 + 24);
    a1[2] = *(_OWORD *)(v11 + 40);
    a1[3] = *(_OWORD *)(v11 + 56);
    *a4 = *(_DWORD *)(v11 + 4);
    *a3 = *(_DWORD *)v11;
  }
  HvlpReleaseHypercallPage(v14);
  HvlpReleaseHypercallPage(v16);
  return v7;
}
