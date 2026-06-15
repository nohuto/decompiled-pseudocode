/*
 * XREFs of ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800327BC
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008BC58 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 */

__int64 __fastcall ValidateVadServerSettings(struct VadServerSettings *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( g_PolicyManager )
  {
    if ( !(*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
            g_PolicyManager,
            *(unsigned int *)a1)
      || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a1 + 1)) )
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147418113;
  }
  return v1;
}
