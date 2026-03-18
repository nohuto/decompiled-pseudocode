/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C001DD88
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x1C0016470 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1C0016540 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C0016580 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C0016730 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C0016790 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C00167E0 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x1C001A210 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C001DCEC (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rdx
  _QWORD *i; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rbx

  v2 = a2 + 2;
  v5 = a2[2] - 8LL;
  for ( i = (_QWORD *)(v5 + 8); ; i = (_QWORD *)(v9 + 8) )
  {
    v9 = *i - 8LL;
    if ( v2 == i )
      break;
    v7 = *i;
    v8 = (_QWORD *)i[1];
    if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v8 != i )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1, v5);
    v5 = v9;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *a2);
}
