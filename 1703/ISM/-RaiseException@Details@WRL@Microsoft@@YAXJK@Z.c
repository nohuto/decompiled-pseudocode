/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C
 * Callers:
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004580C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@AEAVManipulationInjector@@K@Z @ 0x180050914 (--0MPCSpatialGestureRecognizerHandler@@QEAA@AEAVManipulationInjector@@K@Z.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180052398 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180054F3C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800607AC (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180060BF4 (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800612E0 (-StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ??1?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180061848 (--1-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEA.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIUINavigationController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x180062030 (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIUINavigationController@Input@Gaming@Windows@@PE.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x180066150 (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180077834 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x180092ED8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800930B0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4 (-CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ.c)
 *     ?CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB_WPEAUPoseData@2@@Z @ 0x18009ABA8 (-CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x18009B628 (--$MakeAndInitialize@VSimpleTimeProvider@-A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteraction.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
