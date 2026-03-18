/*
 * XREFs of KsepStringFree @ 0x1405788C8
 * Callers:
 *     KsepLoadShimProvider @ 0x14020C168 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14020C600 (KsepCacheHwIdFree.c)
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepRegistryOpenKey @ 0x1405785E4 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140578820 (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140578D3C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x140578FDC (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x1405C6DC8 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x14069BDFC (KseSetDeviceFlags.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x14069D6EC (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14069D9B4 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
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
