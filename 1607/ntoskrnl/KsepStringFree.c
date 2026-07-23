/*
 * XREFs of KsepStringFree @ 0x140514F80
 * Callers:
 *     KsepLoadShimProvider @ 0x1401DC8B4 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1401DCD4C (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepDbFreeDriverShims @ 0x140513C9C (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 *     KseShimDriverIoCallbacks @ 0x14051525C (KseShimDriverIoCallbacks.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1405353E8 (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceFree @ 0x140535688 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x14057E6F4 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1406525F4 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140653CC8 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140653F90 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
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
