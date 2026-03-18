/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x140737430
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfUtilClearOneBootSettings @ 0x14073777C (VfUtilClearOneBootSettings.c)
 *     VfInitializeBranchTracing @ 0x1407444FC (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x140744694 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140744718 (VfStopBranchTracing.c)
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
        _InterlockedAdd(&dword_14032BB28, 1u);
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
            _InterlockedAdd(&dword_14032BB34, 1u);
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
          _InterlockedAdd(&dword_14032BB30, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_14032BB2C, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_14032BB24, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
