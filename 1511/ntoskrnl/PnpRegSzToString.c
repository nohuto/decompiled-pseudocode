/*
 * XREFs of PnpRegSzToString @ 0x1403B9CD8
 * Callers:
 *     PiFindDevInstMatch @ 0x1403B9AEC (PiFindDevInstMatch.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140751608 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140752624 (PpInitGetGroupOrderIndex.c)
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
