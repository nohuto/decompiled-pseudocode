/*
 * XREFs of PopInitializeHeteroProcessors @ 0x14056AAC4
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeConfigureHeteroProcessors @ 0x1403DCF74 (KeConfigureHeteroProcessors.c)
 *     PsEnumProcesses @ 0x1404993EC (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x14056ABF8 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x14056AC78 (PopConfigureHeteroPolicies.c)
 *     PpmHeteroDetectFavoredCores @ 0x14056ADB4 (PpmHeteroDetectFavoredCores.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14056AE44 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x14056AF18 (PpmHeteroComputeRelativePerformance.c)
 */

__int64 PopInitializeHeteroProcessors()
{
  unsigned __int8 v0; // al
  ULONG v1; // edi
  unsigned int v2; // ebx
  char v3; // si
  ULONG v4; // eax
  int v6; // edx
  __int64 Prcb; // rax
  _WORD v8[2]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v9; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int16 *v10[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v11; // [rsp+50h] [rbp-B8h]
  _BYTE v12[176]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  __int64 v14; // [rsp+118h] [rbp+10h]
  __int64 v15; // [rsp+120h] [rbp+18h]
  __int64 v16; // [rsp+128h] [rbp+20h]
  __int64 v17; // [rsp+130h] [rbp+28h]
  __int64 v18; // [rsp+138h] [rbp+30h]
  __int64 v19; // [rsp+140h] [rbp+38h]

  PpmHeteroComputeRelativePerformance();
  v0 = PopDetectSimulatedHeteroProcessors(v12);
  v1 = v0;
  v9 = v0;
  LOBYTE(v8[0]) = 0;
  v2 = v0 != 0;
  v3 = 0;
  if ( !v0 )
  {
    v4 = PpmHeteroDetectFavoredCores(v12, v8);
    v3 = v8[0];
    v1 = v4;
    v9 = v4;
    if ( v4 )
      v2 = 3;
  }
  PopConfigureHeteroPolicies(v2);
  if ( v2 == PopHeteroSystem )
  {
    if ( v2 == 1 )
    {
LABEL_16:
      v6 = 1;
      goto LABEL_17;
    }
    if ( v2 != 3 )
      goto LABEL_7;
  }
  v6 = 0;
  if ( v2 - 1 <= 1 )
    goto LABEL_16;
LABEL_17:
  if ( (unsigned int)KeConfigureHeteroProcessors((__int64)v12, v6, v3, &v9) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  v1 = v9;
LABEL_7:
  if ( !v1 )
  {
    v2 = 0;
    PopHeteroSystem = 0;
LABEL_9:
    PpmHeteroPolicy = 0;
    goto LABEL_10;
  }
  PopHeteroSystem = v2;
  if ( v2 - 1 > 1 )
    goto LABEL_9;
LABEL_10:
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = v2 != 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v10[1] = (unsigned __int16 *)qword_1402F8878[0];
    v10[0] = (unsigned __int16 *)PpmCheckRegistered;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
    {
      Prcb = KeGetPrcb(v9);
      v8[0] = *(unsigned __int8 *)(Prcb + 1616);
      UserData.Ptr = (ULONGLONG)v8;
      v14 = Prcb + 1617;
      v16 = Prcb + 23858;
      v18 = Prcb + 23859;
      *(_QWORD *)&UserData.Size = 2LL;
      v15 = 1LL;
      v17 = 1LL;
      v19 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 4u, &UserData);
    }
  }
  return PpmEventHeteroPolicy(0LL);
}
