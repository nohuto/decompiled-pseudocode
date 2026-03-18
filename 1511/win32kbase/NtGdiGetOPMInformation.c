/*
 * XREFs of NtGdiGetOPMInformation @ 0x1C0082800
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     sub_1C0082878 @ 0x1C0082878 (sub_1C0082878.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0082904 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     sub_1C008369C @ 0x1C008369C (sub_1C008369C.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 __fastcall NtGdiGetOPMInformation(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  COPM *v10; // rcx
  int Information; // edi
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v12; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v13; // r9

  result = AcquireCriticalSectionAndCheckState();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Information = sub_1C008369C(v7, a2);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(v10, a1, v12, v13);
      if ( Information >= 0 )
        Information = sub_1C0082878(a3, &unk_1C0108530);
    }
    UserSessionSwitchLeaveCrit((__int64)v10, v9);
    if ( Information < 0 )
      return (unsigned int)Information;
    return v8;
  }
  return result;
}
