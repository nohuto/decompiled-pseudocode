/*
 * XREFs of atexit @ 0x180048648
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001030 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x180001060 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180001090 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x1800010B0 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001100 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800074F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x180007808 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180047A48 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x180047B40 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 *     ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18006D71C (--$-0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180070230 (--$-0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073984 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073AB4 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073BE4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073D14 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 * Callees:
 *     _onexit_0 @ 0x1800485A4 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
