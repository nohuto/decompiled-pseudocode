/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE6C
 * Callers:
 *     InterpolatePoses @ 0x180094080 (InterpolatePoses.c)
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180094450 (-PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800948A0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NOD.c)
 *     ?PredictFromPoses@VRShimPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180095040 (-PredictFromPoses@VRShimPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18002F4B0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int16 *a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  unsigned int v8; // esi
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v6 = (unsigned int)a4;
  v8 = (unsigned int)a2;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(1LL, (unsigned int)a4);
  wil::details::ReportFailure_HrMsg((__int64)this, v8, a3, a4, v10, retaddr, 1, v6, a5, (va_list)&a6);
}
