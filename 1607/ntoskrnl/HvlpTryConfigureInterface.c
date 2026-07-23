/*
 * XREFs of HvlpTryConfigureInterface @ 0x14014B434
 * Callers:
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x1407BD24C (HvlEnableVsmCalls.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14014B4C4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD, _QWORD); // r8
  __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 2568LL);
  if ( v2 )
    goto LABEL_11;
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
    return 3224702976LL;
  HviGetHypervisorFeatures(&v7);
  v4 = v7 >> 44;
  __writemsr(0x40000000u, ((unsigned __int64)BYTE1(CmNtCSDVersion) << 16) | 0x1040A00003839LL);
  v5 = __readmsr(0x40000001u) | 1;
  if ( (v4 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x200) != 0 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFF000uLL;
    v2 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1402F2430(v5 & 0xFFFFFFFFFFFFF000uLL, 1LL, 32LL);
    if ( v2 )
      goto LABEL_10;
    return 3221225626LL;
  }
  v2 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1402F2428(a1, 1LL, &v6);
  if ( !v2 )
    return 3221225626LL;
  v5 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)v5) & 0xFFF;
LABEL_10:
  __writemsr(0x40000001u, v5);
LABEL_11:
  HvcallCodeVa = v2;
  result = 0LL;
  _InterlockedExchange64(&HvlpHypercallCodeVa, (__int64)v2);
  return result;
}
