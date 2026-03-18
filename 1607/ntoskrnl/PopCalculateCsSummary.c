/*
 * XREFs of PopCalculateCsSummary @ 0x1402075E0
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140126C08 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14000E064 (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1401FFAFC (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PopBatteryCapacityToRate @ 0x1402075C4 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x140207954 (PopCalculateIdleInformation.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  char v4; // di
  __int64 InterruptTimePrecise; // r12
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
  __int64 v22; // r12
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
  InterruptTimePrecise = RtlGetInterruptTimePrecise((LARGE_INTEGER *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 104));
  v6 = InterruptTimePrecise - qword_140328848;
  v7 = (InterruptTimePrecise - qword_140328848) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140328848 )
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  else
    *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = (InterruptTimePrecise - PopPdcLastCsExitTime)
                                                                         / 0xAuLL;
  v8 = DWORD1(xmmword_1403036A0);
  v9 = 0x40000000;
  v10 = xmmword_1403036B4;
  if ( !v7 || (xmmword_1403036B4 & 0x40000000) != 0 || DWORD1(xmmword_1403036A0) >= PopCsConsumption )
  {
    *(_DWORD *)v2 = 0;
  }
  else
  {
    v8 = PopBatteryCapacityToRate(PopCsConsumption - DWORD1(xmmword_1403036A0), v6 / 0xA);
    *(_DWORD *)v2 = v8;
  }
  v11 = HIDWORD(xmmword_1403036B4);
  v12 = xmmword_1403036C4;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = HIDWORD(xmmword_1403036B4);
  if ( v11 )
    v8 = 100 * v12 / v11;
  else
    LOBYTE(v8) = 0;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
  v13 = 0;
  if ( (v10 & v9) == 0 )
    v13 = v12;
  v14 = dword_140328940;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v13;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x58)
                                                                       - qword_140328850;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x60)
                                                                       - dword_140328860;
  PlatformStateResidency = PpmQueryPlatformStateResidency(v14);
  v16 = -1LL;
  if ( qword_1403288C8 != -1 && PlatformStateResidency != -1LL )
  {
    if ( PlatformStateResidency < qword_1403288C8 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = (PlatformStateResidency - qword_1403288C8) / 0xA;
      if ( v16 > v7 )
        v16 = v6 / 0xA;
    }
  }
  v17 = v7 + qword_140328858 - *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v18 = _InterlockedExchangeAdd64(&qword_140328900, 0LL);
  if ( v18 )
    v18 = (v18 - qword_140328848) / 0xA;
  v19 = qword_140328880;
  v20 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = qword_140328890;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) -= PpmConvertTime(v19, v20, 0xF4240uLL);
  v21 = qword_1403288A0;
  if ( qword_140328898 )
  {
    if ( qword_140328848 <= (unsigned __int64)qword_140328898 )
      v22 = InterruptTimePrecise - qword_140328898;
    else
      v22 = InterruptTimePrecise - qword_140328848;
    v21 = v22 + qword_1403288A0;
  }
  v23 = v21 / 0xA;
  v24 = PpmConvertTime(qword_1403288B0, PopQpcFrequency, 0xF4240uLL);
  v25 = qword_1403288C0;
  v26 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v24;
  v27 = PpmConvertTime(v25, v26, 0xF4240uLL);
  v28 = dword_140328940;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v27;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = PopPdcLastCsExitReason;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  PpmGetPlatformSelectionVetoCounts(v28, (_QWORD *)(v2 + 32), (_QWORD *)(v2 + 40));
  v30 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) - qword_1403288D8;
  v31 = *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) - qword_1403288D0;
  if ( qword_140328868 )
    v4 = 100 * qword_140328870 / (unsigned __int64)qword_140328868;
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
  v34 = (*(_BYTE *)(a1 + 101) ^ byte_1403288ED) & 7;
  *(_QWORD *)(a1 + 48) = v18;
  *(_BYTE *)(a1 + 101) ^= v34;
  *(_DWORD *)(a1 + 140) = dword_1403288E0;
  *(_DWORD *)(a1 + 144) = dword_1403288E4;
  result = (unsigned int)dword_1403288E8;
  *(_DWORD *)(a1 + 148) = dword_1403288E8;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 104) = v16;
  *(_QWORD *)(a1 + 112) = v31;
  *(_QWORD *)(a1 + 120) = v30;
  *(_BYTE *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 100) = v33;
  return result;
}
