/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x14063DA40
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140636F28 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140637028 (PiDevCfgCopyDeviceProperties.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  BOOL v7; // eax
  __int64 v8; // r8
  BOOL v10; // eax

  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
  {
    v10 = EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_FirmwareRollback_61744038_FeatureDescriptorDetails);
    return PiDevCfgCopyDeviceKeys(a4, a5, v10, 0LL);
  }
  else
  {
    v7 = EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_FirmwareRollback_61744038_FeatureDescriptorDetails);
    v8 = *(_QWORD *)(a2 + 8);
    if ( v7 )
      return PiDevCfgCopyDeviceProperties(a4, a5, v8, 1u, 1, 0LL);
    else
      return PiDevCfgCopyDeviceProperties(a4, a5, v8, 1u, 0, 0LL);
  }
}
