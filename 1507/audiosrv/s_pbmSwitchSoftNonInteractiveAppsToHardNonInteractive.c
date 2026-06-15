/*
 * XREFs of s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180005860
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180002424 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive(void *a1)
{
  __int64 result; // rax
  CApplicationManager *v2; // rcx
  bool v3; // r8
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, &v5, &v4);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(v2, v4, v3);
    }
  }
  return result;
}
