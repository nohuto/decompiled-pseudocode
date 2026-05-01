/*
 * XREFs of RmTestGetDeviceTier @ 0x18000F190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180007570 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 */

__int64 __fastcall RmTestGetDeviceTier(_DWORD *a1)
{
  unsigned int v2; // ebx

  v2 = -2147467259;
  if ( GetResourceManagerProxy() )
  {
    *a1 = RmpGetDeviceTier();
    return 0;
  }
  return v2;
}
