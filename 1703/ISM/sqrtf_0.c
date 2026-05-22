/*
 * XREFs of sqrtf_0 @ 0x18009EAE6
 * Callers:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x18002CD08 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180033CF4 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x180035F94 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180036F1C (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ?UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800451F8 (-UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x180051DF4 (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18009C314 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18009C544 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
