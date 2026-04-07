/*
 * XREFs of atexit @ 0x18004F4AC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001050 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001060 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x180001090 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x1800010C0 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x1800010E0 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001130 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18004C86C (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004CA08 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 * Callees:
 *     _onexit_0 @ 0x18004F418 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
