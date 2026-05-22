/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800685A0
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x180066D14 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT2_ @ 0x180067F10 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT2_.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x180068078 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 *     SpatialInteractionDevices::ParseFloatData_float_ @ 0x18006814C (SpatialInteractionDevices--ParseFloatData_float_.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 * Callees:
 *     ?_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z @ 0x180068560 (-_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z.c)
 */

bool wil::details::in1diag3::FailFast_IfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int16 *a5,
        const char *a6,
        ...)
{
  const char *retaddr; // [rsp+38h] [rbp+0h]

  if ( (_BYTE)a4 )
  {
    wil::details::in1diag3::_FailFast_UnexpectedMsg(this, a2, a3, retaddr, a5, (char *)&a6);
    JUMPOUT(0x1800685CELL);
  }
  return 0;
}
