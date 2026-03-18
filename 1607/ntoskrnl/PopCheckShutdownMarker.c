/*
 * XREFs of PopCheckShutdownMarker @ 0x1407BA97C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405810D4 (ExGetFirmwareEnvironmentVariable.c)
 *     PopClearSystemSleepCheckpoint @ 0x140676224 (PopClearSystemSleepCheckpoint.c)
 *     PopDiagTraceDirtyTransition @ 0x1407D1320 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(int a1, void *a2)
{
  char v2; // bl
  NTSTATUS SetBootStatusData; // edi
  char v6; // cl
  char result; // al
  int v8; // r9d
  int v9; // r9d
  char v10; // [rsp+40h] [rbp-C0h] BYREF
  bool v11; // [rsp+41h] [rbp-BFh] BYREF
  char v12; // [rsp+42h] [rbp-BEh] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int128 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  bool *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]

  v2 = 0;
  RtlGetSetBootStatusData(a2, 1u, RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x20u, 0LL);
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_140328F68 = xmmword_1403414F0;
  if ( _mm_cvtsi128_si32(_mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8))
    && pCallbackContext.LevelPlus1 > 5
    && TlgKeywordOn(&pCallbackContext, 0x200000000000uLL) )
  {
    v13 = WORD6(PopBsdPhysicalPowerButtonInfoAtBoot);
    v15 = WORD6(xmmword_140328F68);
    v17 = HIWORD(xmmword_140328F68);
    v18 = BYTE14(PopBsdPhysicalPowerButtonInfoAtBoot);
    v10 = HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 1;
    v14 = v8;
    v23 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v25 = &v13;
    v27 = &v14;
    v29 = &xmmword_140328F68;
    v31 = &v15;
    v33 = &v16;
    v35 = &v17;
    v37 = &v18;
    v39 = &v10;
    v41 = &v11;
    v16 = v8;
    v11 = (HIBYTE(PopBsdPhysicalPowerButtonInfoAtBoot) & 2) != 0;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 1LL;
    v42 = 1LL;
    TlgWrite(&pCallbackContext, &unk_14027CA65, 0LL, 0LL, 0xCu, &pData);
  }
  SetBootStatusData = RtlGetSetBootStatusData(a2, 1u, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  v6 = BYTE8(PopBsdPowerTransition);
  xmmword_140328F88 = *(_OWORD *)&Buffer;
  if ( (PopSimulate & 0x200) != 0 )
  {
    v6 = BYTE8(PopBsdPowerTransition) | 1;
    BYTE8(PopBsdPowerTransitionAtBoot) = BYTE8(PopBsdPowerTransition) | 1;
  }
  v21 = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v19 = v6 & 1;
  ZwUpdateWnfStateData((__int64)&v21, (__int64)&v19, 4LL);
  result = BYTE8(PopBsdPowerTransitionAtBoot);
  if ( (PopSimulate & 0x400) != 0 )
  {
    HIDWORD(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    result |= 2u;
    BYTE9(PopBsdPowerTransitionAtBoot) = 1;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( SetBootStatusData >= 0 && (result & 1) != 0 )
  {
    v20 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (int)&v12,
                (int)&v20,
                0LL) >= 0 )
    {
      v2 = v12;
      PopClearSystemSleepCheckpoint();
    }
    LOBYTE(v9) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             HIDWORD(PopBsdPowerTransitionAtBoot),
             v9,
             SBYTE9(PopBsdPowerTransitionAtBoot),
             PopBsdPowerTransitionAtBoot,
             0,
             v2);
  }
  return result;
}
