/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C1760
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C0084288 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C00C11A8 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C13AC (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  COPM *v9; // rcx
  int COPPCompatibleInformation; // edi
  PRKMUTEX *v11; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v12; // r9

  result = AcquireCriticalSectionAndCheckState(a1);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    COPPCompatibleInformation = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
                                  v7,
                                  a2);
    if ( COPPCompatibleInformation >= 0 )
    {
      COPPCompatibleInformation = COPM::GetCOPPCompatibleInformation(v9, a1, v11, v12);
      if ( COPPCompatibleInformation >= 0 )
        COPPCompatibleInformation = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(
                                      a3,
                                      xmmword_1C01222D0);
    }
    UserSessionSwitchLeaveCrit();
    if ( COPPCompatibleInformation < 0 )
      return (unsigned int)COPPCompatibleInformation;
    return v8;
  }
  return result;
}
