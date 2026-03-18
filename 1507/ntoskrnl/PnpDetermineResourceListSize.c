/*
 * XREFs of PnpDetermineResourceListSize @ 0x14045D228
 * Callers:
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     IopCombineCmResourceList @ 0x14059B22C (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x14059C214 (PnpBuildCmResourceLists.c)
 *     IopChangeInterfaceType @ 0x14067D20C (IopChangeInterfaceType.c)
 *     PnpSetRegistryResourceList @ 0x14067DD9C (PnpSetRegistryResourceList.c)
 *     IopCombineLegacyResources @ 0x14067EF78 (IopCombineLegacyResources.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 *     IopReportBootResources @ 0x1407D5CA4 (IopReportBootResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDetermineResourceListSize(_DWORD *a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v1 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v1[3];
      v5 = v1 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v1 = (_DWORD *)((char *)v1 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
