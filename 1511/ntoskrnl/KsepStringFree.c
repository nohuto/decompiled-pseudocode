/*
 * XREFs of KsepStringFree @ 0x1403B8B6C
 * Callers:
 *     KsepLoadShimProvider @ 0x1401CCE04 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1401CD29C (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepRegistryOpenKey @ 0x1403B8888 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1403B8AC4 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x1404FA2C0 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1404FA5A0 (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x14054F040 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x14061D21C (KseSetDeviceFlags.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14061D71C (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x14061E96C (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14061EC34 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 */

void __fastcall KsepStringFree(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  char v4; // al

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *a1 = 0LL;
      a1[1] = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v4 = KsepDebugFlag;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197454;
    if ( (v4 & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Eu, 0LL);
  }
}
