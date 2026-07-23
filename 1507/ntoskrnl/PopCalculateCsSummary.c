/*
 * XREFs of PopCalculateCsSummary @ 0x14023D18C
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140234330 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x140235488 (PpmQueryPlatformStateResidency.c)
 *     PopBatteryCapacityToRate @ 0x14023D170 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x14023D4A8 (PopCalculateIdleInformation.c)
 */

char __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  char v4; // bl
  LARGE_INTEGER InterruptTimePrecise; // r15
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  int v9; // eax
  int v10; // r10d
  int v11; // r9d
  unsigned int v12; // r8d
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 PlatformStateResidency; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  LONGLONG v22; // r15
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  unsigned int v25; // ecx
  char v26; // r10
  __int64 v27; // r11
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  char v31; // r10
  char result; // al
  int v33; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = 0;
  PopCalculateIdleInformation(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 64);
  InterruptTimePrecise = RtlGetInterruptTimePrecise((PLARGE_INTEGER)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                   + 88));
  v6 = InterruptTimePrecise.QuadPart - qword_140353788;
  v7 = (InterruptTimePrecise.QuadPart - qword_140353788) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140353788 )
    v8 = 0LL;
  else
    v8 = (InterruptTimePrecise.QuadPart - PopPdcLastCsExitTime) / 0xAuLL;
  v9 = DWORD1(xmmword_14032E9C0);
  v10 = 0x40000000;
  v11 = xmmword_14032E9D4;
  if ( !v7 || (xmmword_14032E9D4 & 0x40000000) != 0 || DWORD1(xmmword_14032E9C0) >= PopCsConsumption )
  {
    *(_DWORD *)v2 = 0;
  }
  else
  {
    v9 = PopBatteryCapacityToRate(PopCsConsumption - DWORD1(xmmword_14032E9C0), v6 / 0xA);
    *(_DWORD *)v2 = v9;
  }
  v12 = HIDWORD(xmmword_14032E9D4);
  v13 = xmmword_14032E9E4;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = HIDWORD(xmmword_14032E9D4);
  if ( v12 )
    v9 = 100 * v13 / v12;
  else
    LOBYTE(v9) = 0;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v9;
  v14 = 0;
  if ( (v10 & v11) == 0 )
    v14 = v13;
  v15 = dword_140353880;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x48)
                                                                       - qword_140353790;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x50)
                                                                       - dword_1403537A0;
  PlatformStateResidency = PpmQueryPlatformStateResidency(v15);
  v17 = -1LL;
  if ( qword_1403537F8 != -1 && PlatformStateResidency != -1LL )
  {
    if ( PlatformStateResidency < qword_1403537F8 )
    {
      v17 = 0LL;
    }
    else
    {
      v17 = (PlatformStateResidency - qword_1403537F8) / 0xA;
      if ( v17 > v7 )
        v17 = v6 / 0xA;
    }
  }
  v18 = v7 + qword_140353798 - *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  _InterlockedExchangeAdd64(&qword_140353840, 0LL);
  v19 = qword_1403537C0;
  v20 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = qword_1403537D0;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) -= PpmConvertTime(v19, v20, 0xF4240uLL);
  v21 = qword_1403537E0;
  if ( qword_1403537D8 )
  {
    if ( qword_140353788 <= (unsigned __int64)qword_1403537D8 )
      v22 = InterruptTimePrecise.QuadPart - qword_1403537D8;
    else
      v22 = InterruptTimePrecise.QuadPart - qword_140353788;
    v21 = v22 + qword_1403537E0;
  }
  v23 = v21 / 0xA;
  v24 = PpmConvertTime(qword_1403537F0, PopQpcFrequency, 0xF4240uLL);
  v25 = dword_140353880;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v24;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = PopPdcLastCsExitReason;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  PpmGetPlatformSelectionVetoCounts(v25, (_QWORD *)(v2 + 32), (_QWORD *)(v2 + 40));
  v28 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) - qword_140353800;
  v29 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) - qword_140353808;
  if ( qword_1403537A8 )
    v4 = 100 * qword_1403537B0 / (unsigned __int64)qword_1403537A8;
  *(_DWORD *)a1 = *(_DWORD *)v2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  *(_DWORD *)(a1 + 88) = a2;
  v30 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  *(_QWORD *)(a1 + 16) = v7;
  v31 = (2 * v30) ^ v26 & 1;
  *(_QWORD *)(a1 + 32) = v18;
  result = (byte_140353811 ^ *(_BYTE *)(a1 + 93)) & 3;
  *(_QWORD *)(a1 + 48) = v27;
  *(_BYTE *)(a1 + 93) ^= result;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 96) = v17;
  *(_QWORD *)(a1 + 104) = v28;
  *(_QWORD *)(a1 + 112) = v29;
  *(_BYTE *)(a1 + 128) = v4;
  *(_BYTE *)(a1 + 92) = v31;
  *(_QWORD *)(a1 + 120) = v8;
  return result;
}
