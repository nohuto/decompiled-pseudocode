/*
 * XREFs of ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180078E90 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ @ 0x1800794EC (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180054D18 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x18007A4F0 (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98 (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall SpatialInputControllerCollection::ParseAndSendReport(
        SpatialInputControllerCollection *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a6,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a7)
{
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // [rsp+40h] [rbp-788h] BYREF
  _DWORD v13[3]; // [rsp+44h] [rbp-784h] BYREF
  _BYTE v14[1888]; // [rsp+50h] [rbp-778h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7C8h] [rbp+0h]

  v13[0] = 0;
  v12 = 0;
  v9 = SpatialInteractionDevices::SpatialInteractionController::Parse(
         a2,
         a3,
         a4,
         a6,
         a7,
         &v12,
         (enum MPCAugmentedInputGestureType *)v13);
  if ( v9 < 0 )
  {
    v10 = 289LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v9);
    return;
  }
  memset(v14, 0, sizeof(v14));
  v11 = MPCInputInfoHelper::PopulateAugmentedInput(
          v13[0],
          a5,
          *((_DWORD *)a2 + 67),
          v12,
          (__int64)a2 + 388,
          (__int64)a2 + 272,
          (__int64)v14);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x12C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180077831LL);
  }
  v9 = SpatialInputControllerCollection::QueueInputReport(this, (struct InputInfo *)v14);
  if ( v9 < 0 )
  {
    v10 = 304LL;
    goto LABEL_6;
  }
}
