/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x1407028E0
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1407936BC (IoInitSystem.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     VfUtilClearOneBootSettings @ 0x140702CB0 (VfUtilClearOneBootSettings.c)
 *     VfInitializeBranchTracing @ 0x14070ED1C (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x14070EEB4 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x14070EF38 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140300B08, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140300B14, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfUtilClearOneBootSettings();
            }
            VfNotifyVerifierExtensions(0LL, 2LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140300B10, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140300B0C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140300B04, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
