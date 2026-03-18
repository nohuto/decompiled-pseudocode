/*
 * XREFs of PnpRegSzToString @ 0x1405391C4
 * Callers:
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiFindDevInstMatch @ 0x140538FDC (PiFindDevInstMatch.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x14079B090 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpRegSzToString(_WORD *a1, unsigned int a2, _DWORD *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  if ( a3 )
    *a3 = (_DWORD)v3 - (_DWORD)a1;
  return 1LL;
}
