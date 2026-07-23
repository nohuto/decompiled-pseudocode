/*
 * XREFs of PopCalculateCsSummary @ 0x14020740C
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1401FF928 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 *     PopBatteryCapacityToRate @ 0x1402073F0 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x140207780 (PopCalculateIdleInformation.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  char v4; // di
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // r15
  int v8; // eax
  int v9; // r10d
  int v10; // r9d
  unsigned int v11; // r8d
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 PlatformStateResidency; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  LONGLONG v22; // r12
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  char v29; // r10
  __int64 v30; // r8
  __int64 v31; // r11
  char v32; // al
  char v33; // r10
  char v34; // al
  __int64 result; // rax
  int v36; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = 0;
  PopCalculateIdleInformation(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 80);
  InterruptTimePrecise = RtlGetInterruptTimePrecise((PLARGE_INTEGER)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                   + 104));
  v6 = InterruptTimePrecise.QuadPart - qword_140328888;
  v7 = (InterruptTimePrecise.QuadPart - qword_140328888) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140328888 )
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  else
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = (InterruptTimePrecise.QuadPart
                                                                          - PopPdcLastCsExitTime)
                                                                         / 0xAuLL;
  v8 = DWORD1(xmmword_1403035E0);
  v9 = 0x40000000;
  v10 = xmmword_1403035F4;
  if ( !v7 || (xmmword_1403035F4 & 0x40000000) != 0 || DWORD1(xmmword_1403035E0) >= PopCsConsumption )
  {
    *(_DWORD *)v2 = 0;
  }
  else
  {
    v8 = PopBatteryCapacityToRate(PopCsConsumption - DWORD1(xmmword_1403035E0), v6 / 0xA);
    *(_DWORD *)v2 = v8;
  }
  v11 = HIDWORD(xmmword_1403035F4);
  v12 = xmmword_140303604;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = HIDWORD(xmmword_1403035F4);
  if ( v11 )
    v8 = 100 * v12 / v11;
  else
    LOBYTE(v8) = 0;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
  v13 = 0;
  if ( (v10 & v9) == 0 )
    v13 = v12;
  v14 = dword_140328980;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v13;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x58)
                                                                       - qword_140328890;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x60)
                                                                       - dword_1403288A0;
  PlatformStateResidency = PpmQueryPlatformStateResidency(v14);
  v16 = -1LL;
  if ( qword_140328908 != -1 && PlatformStateResidency != -1LL )
  {
    if ( PlatformStateResidency < qword_140328908 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = (PlatformStateResidency - qword_140328908) / 0xA;
      if ( v16 > v7 )
        v16 = v6 / 0xA;
    }
  }
  v17 = v7 + qword_140328898 - *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v18 = _InterlockedExchangeAdd64(&qword_140328940, 0LL);
  if ( v18 )
    v18 = (v18 - qword_140328888) / 0xA;
  v19 = qword_1403288C0;
  v20 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = qword_1403288D0;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) -= PpmConvertTime(v19, v20, 0xF4240uLL);
  v21 = qword_1403288E0;
  if ( qword_1403288D8 )
  {
    if ( qword_140328888 <= (unsigned __int64)qword_1403288D8 )
      v22 = InterruptTimePrecise.QuadPart - qword_1403288D8;
    else
      v22 = InterruptTimePrecise.QuadPart - qword_140328888;
    v21 = v22 + qword_1403288E0;
  }
  v23 = v21 / 0xA;
  v24 = PpmConvertTime(qword_1403288F0, PopQpcFrequency, 0xF4240uLL);
  v25 = qword_140328900;
  v26 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v24;
  v27 = PpmConvertTime(v25, v26, 0xF4240uLL);
  v28 = dword_140328980;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v27;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = PopPdcLastCsExitReason;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  PpmGetPlatformSelectionVetoCounts(v28, (_QWORD *)(v2 + 32), (_QWORD *)(v2 + 40));
  v30 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) - qword_140328918;
  v31 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) - qword_140328910;
  if ( qword_1403288A8 )
    v4 = 100 * qword_1403288B0 / (unsigned __int64)qword_1403288A8;
  *(_DWORD *)a1 = *(_DWORD *)v2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  *(_DWORD *)(a1 + 96) = a2;
  v32 = 2 * *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  *(_QWORD *)(a1 + 16) = v7;
  v33 = v32 ^ v29 & 1;
  *(_QWORD *)(a1 + 32) = v17;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  v34 = (*(_BYTE *)(a1 + 101) ^ byte_14032892D) & 7;
  *(_QWORD *)(a1 + 48) = v18;
  *(_BYTE *)(a1 + 101) ^= v34;
  *(_DWORD *)(a1 + 140) = dword_140328920;
  *(_DWORD *)(a1 + 144) = dword_140328924;
  result = (unsigned int)dword_140328928;
  *(_DWORD *)(a1 + 148) = dword_140328928;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 104) = v16;
  *(_QWORD *)(a1 + 112) = v31;
  *(_QWORD *)(a1 + 120) = v30;
  *(_BYTE *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 100) = v33;
  return result;
}
