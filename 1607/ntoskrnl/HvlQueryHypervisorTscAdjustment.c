/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x140114C84
 * Callers:
 *     PopDiagTraceHiberStats @ 0x1405314F4 (PopDiagTraceHiberStats.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // rsi
  _BYTE v7[24]; // [rsp+20h] [rbp-878h] BYREF
  __int64 v8; // [rsp+38h] [rbp-860h]
  _BYTE v9[24]; // [rsp+40h] [rbp-858h] BYREF
  __int64 v10; // [rsp+58h] [rbp-840h]
  _BYTE v11[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v12[2064]; // [rsp+70h] [rbp-828h] BYREF

  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(v7, 1LL, v11, 8LL);
  v3 = HvlpAcquireHypercallPage(v9, 2LL, v12, 1032LL);
  v4 = v10;
  v5 = v8;
  v6 = (__int64 *)v3;
  *v2 = 9;
  if ( !(unsigned __int16)HvcallCodeVa(123LL, v5, v4) )
    v1 = *v6;
  HvlpReleaseHypercallPage(v7);
  HvlpReleaseHypercallPage(v9);
  return v1;
}
