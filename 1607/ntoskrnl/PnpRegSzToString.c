/*
 * XREFs of PnpRegSzToString @ 0x140539704
 * Callers:
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A6FC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
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
