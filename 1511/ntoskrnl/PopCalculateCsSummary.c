/*
 * XREFs of PopCalculateCsSummary @ 0x1401EEAD4
 * Callers:
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1401E70FC (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x1401E82FC (PpmQueryPlatformStateResidency.c)
 *     PopBatteryCapacityToRate @ 0x1401EEAB8 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x1401EEE24 (PopCalculateIdleInformation.c)
 */

char __fastcall PopCalculateCsSummary(__int64 a1, int a2)
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
  char result; // al
  int v35; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = 0;
  PopCalculateIdleInformation(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 80);
  InterruptTimePrecise = RtlGetInterruptTimePrecise((PLARGE_INTEGER)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                   + 104));
  v6 = InterruptTimePrecise.QuadPart - qword_140305A08;
  v7 = (InterruptTimePrecise.QuadPart - qword_140305A08) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140305A08 )
    *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  else
    *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = (InterruptTimePrecise.QuadPart
                                                                          - PopPdcLastCsExitTime)
                                                                         / 0xAuLL;
  v8 = DWORD1(xmmword_1402DE400);
  v9 = 0x40000000;
  v10 = xmmword_1402DE414;
  if ( !v7 || (xmmword_1402DE414 & 0x40000000) != 0 || DWORD1(xmmword_1402DE400) >= PopCsConsumption )
  {
    *(_DWORD *)v2 = 0;
  }
  else
  {
    v8 = PopBatteryCapacityToRate(PopCsConsumption - DWORD1(xmmword_1402DE400), v6 / 0xA);
    *(_DWORD *)v2 = v8;
  }
  v11 = HIDWORD(xmmword_1402DE414);
  v12 = xmmword_1402DE424;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = HIDWORD(xmmword_1402DE414);
  if ( v11 )
    v8 = 100 * v12 / v11;
  else
    LOBYTE(v8) = 0;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
  v13 = 0;
  if ( (v9 & v10) == 0 )
    v13 = v12;
  v14 = dword_140305B00;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v13;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0x58)
                                                                       - qword_140305A10;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                  + 0x60)
                                                                      - dword_140305A20;
  PlatformStateResidency = PpmQueryPlatformStateResidency(v14);
  v16 = -1LL;
  if ( qword_140305A88 != -1 && PlatformStateResidency != -1LL )
  {
    if ( PlatformStateResidency < qword_140305A88 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = (PlatformStateResidency - qword_140305A88) / 0xA;
      if ( v16 > v7 )
        v16 = v6 / 0xA;
    }
  }
  v17 = v7 + qword_140305A18 - *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v18 = _InterlockedExchangeAdd64(&qword_140305AC0, 0LL);
  if ( v18 )
    v18 = (v18 - qword_140305A08) / 0xA;
  v19 = qword_140305A40;
  v20 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = qword_140305A50;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) -= PpmConvertTime(v19, v20, 0xF4240uLL);
  v21 = qword_140305A60;
  if ( qword_140305A58 )
  {
    if ( qword_140305A08 <= (unsigned __int64)qword_140305A58 )
      v22 = InterruptTimePrecise.QuadPart - qword_140305A58;
    else
      v22 = InterruptTimePrecise.QuadPart - qword_140305A08;
    v21 = v22 + qword_140305A60;
  }
  v23 = v21 / 0xA;
  v24 = PpmConvertTime(qword_140305A70, PopQpcFrequency, 0xF4240uLL);
  v25 = qword_140305A80;
  v26 = PopQpcFrequency;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v24;
  v27 = PpmConvertTime(v25, v26, 0xF4240uLL);
  v28 = dword_140305B00;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v27;
  *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = PopPdcLastCsExitReason;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  PpmGetPlatformSelectionVetoCounts(v28, (_QWORD *)(v2 + 32), (_QWORD *)(v2 + 40));
  v30 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) - qword_140305A98;
  v31 = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) - qword_140305A90;
  if ( qword_140305A28 )
    v4 = 100 * qword_140305A30 / (unsigned __int64)qword_140305A28;
  *(_DWORD *)a1 = *(_DWORD *)v2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *(_DWORD *)(a1 + 96) = a2;
  v32 = 2 * *(_DWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  *(_QWORD *)(a1 + 16) = v7;
  v33 = v32 ^ v29 & 1;
  *(_QWORD *)(a1 + 32) = v17;
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(((unsigned __int64)&v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  result = (*(_BYTE *)(a1 + 101) ^ byte_140305AA1) & 3;
  *(_QWORD *)(a1 + 48) = v18;
  *(_BYTE *)(a1 + 101) ^= result;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 104) = v16;
  *(_QWORD *)(a1 + 112) = v31;
  *(_QWORD *)(a1 + 120) = v30;
  *(_BYTE *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 100) = v33;
  return result;
}
