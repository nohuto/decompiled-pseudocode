/*
 * XREFs of PnpRegSzToString @ 0x1404E7044
 * Callers:
 *     PiFindDevInstMatch @ 0x1404E6E58 (PiFindDevInstMatch.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140687EE8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x1407B8580 (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
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
