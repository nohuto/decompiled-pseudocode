/*
 * XREFs of ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180048290 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004A0F0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCInputProviderBase::IsPrimary(unsigned __int64 this)
{
  const struct IMPCInputProviderBase *v1; // rbx
  MPCHolographicInputManager *v2; // rax

  v1 = (const struct IMPCInputProviderBase *)(this & -(__int64)(this != 16));
  MPCHolographicInputManager::GetInstance();
  return MPCHolographicInputManager::IsProviderPrimary(v2, v1);
}
