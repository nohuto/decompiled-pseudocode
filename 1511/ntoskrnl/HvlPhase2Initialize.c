/*
 * XREFs of HvlPhase2Initialize @ 0x140142738
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14009200C (ExNotifyWithProcessing.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401AF0D8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401B2E68 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpIumPhase3Initialize @ 0x1401B3964 (HvlpIumPhase3Initialize.c)
 *     HvlpEtwRegister @ 0x1401B4D64 (HvlpEtwRegister.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401B4DA4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogIommuInitStatus @ 0x1401B4F1C (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401B50B8 (HvlpLogProcessorStartupFailure.c)
 *     sub_1401B5178 @ 0x1401B5178 (sub_1401B5178.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 *     HvlpDiscoverTopologyComplete @ 0x140782654 (HvlpDiscoverTopologyComplete.c)
 *     HvlpIumInitializeTelemetry @ 0x140782AA8 (HvlpIumInitializeTelemetry.c)
 */

__int64 __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  ULONG *v7; // rdi
  __m256i v8; // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __m256i v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+78h] [rbp-90h]
  _BYTE v12[3264]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v8 = *(__m256i *)(v1 + 2176);
  v9 = *(_QWORD *)(v1 + 2208);
  if ( v8.m256i_i64[0] )
  {
    HvlpEtwRegister();
    v10 = v8;
    v11 = v9;
    HvlpLogHypervisorLaunchError(&v10);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 1) != 0 )
  {
    if ( (HvlpFlags & 4) != 0 )
      HvlpDiscoverTopologyComplete();
    HvlpIumInitializeTelemetry();
    IoAddTriageDumpDataBlock((int)&HvlpFlags, 4);
    IoAddTriageDumpDataBlock((int)&HvlpRootFlags, 4);
    IoAddTriageDumpDataBlock((int)&HvlpEnlightenments, 4);
    if ( (HvlpRootFlags & 1) != 0 )
    {
      HvlpEtwRegister();
      sub_1401B5178(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
      HvlpLogIommuInitStatus();
      v3 = HvlpLogicalProcessorCount;
      if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
      {
        v4 = &HvlpLogicalProcessorRegions[26 * HvlpLogicalProcessorCount];
        if ( !*v4 )
        {
          v5 = *((_WORD *)v4 + 24);
          if ( v5 )
            HvlpLogProcessorStartupFailure((unsigned int)v4[2], v5);
        }
        v3 = HvlpLogicalProcessorCount;
      }
      v6 = 0;
      if ( v3 )
      {
        v7 = (ULONG *)&dword_140387144;
        do
        {
          HvlpGetLogicalProcessorProperty(*v7, 5LL, v12);
          if ( (int)CmLogMcUpdateStatus(*v7) < 0 )
            break;
          ++v6;
          v7 += 26;
        }
        while ( v6 < HvlpLogicalProcessorCount );
      }
    }
    if ( ExCbEnlightenmentState )
      ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
    HvlpRegisterPowerPolicyCallbacks();
    return HvlpIumPhase3Initialize();
  }
  return result;
}
