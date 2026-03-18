/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0EB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     sub_1C0082878 @ 0x1C0082878 (sub_1C0082878.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 *     sub_1C00C0A44 @ 0x1C00C0A44 (sub_1C00C0A44.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C0BF4 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  COPM *v10; // rcx
  int COPPCompatibleInformation; // edi
  PRKMUTEX *v12; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v13; // r9

  result = AcquireCriticalSectionAndCheckState(a1);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    COPPCompatibleInformation = sub_1C00C0A44(v7, a2);
    if ( COPPCompatibleInformation >= 0 )
    {
      COPPCompatibleInformation = COPM::GetCOPPCompatibleInformation(v10, a1, v12, v13);
      if ( COPPCompatibleInformation >= 0 )
        COPPCompatibleInformation = sub_1C0082878(a3, xmmword_1C010AF50);
    }
    UserSessionSwitchLeaveCrit((__int64)v10, v9);
    if ( COPPCompatibleInformation < 0 )
      return (unsigned int)COPPCompatibleInformation;
    return v8;
  }
  return result;
}
