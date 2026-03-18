/*
 * XREFs of HvlpTryConfigureInterface @ 0x14016F3D8
 * Callers:
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x1407E9058 (HvlEnableVsmCalls.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14016F450 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
    return 3224702976LL;
  HviGetHypervisorFeatures(&v7);
  v3 = v7 >> 44;
  __writemsr(0x40000000u, ((unsigned __int64)BYTE1(CmNtCSDVersion) << 16) | 0x1040A00002800LL);
  v4 = __readmsr(0x40000001u) | 1;
  if ( (v3 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x200) != 0 )
  {
    v6 = v4 & 0xFFFFFFFFFFFFF000uLL;
    v5 = qword_1403218E0(v4 & 0xFFFFFFFFFFFFF000uLL, 1LL, 32LL);
    if ( v5 )
      goto LABEL_9;
    return 3221225626LL;
  }
  v5 = qword_1403218D8(a1, 1LL, &v6);
  if ( !v5 )
    return 3221225626LL;
  v4 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)v4) & 0xFFF;
LABEL_9:
  __writemsr(0x40000001u, v4);
  _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, v5);
  return 0LL;
}
