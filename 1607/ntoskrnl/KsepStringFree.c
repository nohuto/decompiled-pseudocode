/*
 * XREFs of KsepStringFree @ 0x140485BF8
 * Callers:
 *     KsepLoadShimProvider @ 0x1401DCA88 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1401DCF20 (KsepCacheHwIdFree.c)
 *     KsepDbFreeDriverShims @ 0x140484914 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x140485914 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x1404859F4 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140485B50 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x1404E5818 (KseShimDriverIoCallbacks.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140534EA8 (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x140535148 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x14057E248 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x140652510 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652994 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140653BE4 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140653EAC (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140213458 (RtlAssert.c)
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
