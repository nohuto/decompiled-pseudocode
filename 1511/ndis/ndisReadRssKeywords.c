/*
 * XREFs of ndisReadRssKeywords @ 0x1C009D6E0
 * Callers:
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0018548 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0019228 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadRssKeywords(struct _TlgProvider_t *a1)
{
  unsigned __int16 Length; // r15
  _NDIS_RSS_PROFILE IntegerData; // r14d
  PVOID v4; // rbx
  unsigned __int16 v5; // si
  unsigned int KeywordAll; // ecx
  struct _PROCESSOR_NUMBER v7; // edx
  int v8; // eax
  _PROCESSOR_NUMBER v9; // r9d
  unsigned int Next_high; // ebx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 result; // rax
  _PROCESSOR_NUMBER v14; // r8d
  _PROCESSOR_NUMBER v15; // r9d
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r11
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  struct _PROCESSOR_NUMBER v26; // [rsp+B8h] [rbp+50h]
  struct _PROCESSOR_NUMBER v27; // [rsp+C0h] [rbp+58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+60h] BYREF

  v27 = 0;
  Length = 0;
  v26 = 0;
  IntegerData = NdisRssProfileNumaStatic;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v4 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue);
    NdisReadConfiguration(&Status, &ParameterValue, v4, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      LODWORD(a1[69].KeywordAll) = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RssBaseProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x14 )
    {
      Length = ParameterValue->ParameterData.StringData.Length;
      v27.Group = Length;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
      v27.Number = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x14 )
    {
      v5 = 20;
      v26.Group = 20;
    }
    else
    {
      v5 = ParameterValue->ParameterData.StringData.Length;
      v26.Group = v5;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v26.Number = 63;
    }
    else
    {
      v26.Number = ParameterValue->ParameterData.IntegerData;
      if ( v5 == 20 )
        v26.Group = Length;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v4, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v4);
  }
  KeywordAll = ndisMaxNumRssCpus;
  v7 = v27;
  if ( LODWORD(a1[69].KeywordAll) < ndisMaxNumRssCpus )
    KeywordAll = a1[69].KeywordAll;
  LODWORD(a1[69].KeywordAll) = KeywordAll;
  v8 = ndisCompareProcNum(ProcNumber, v7);
  Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
  if ( v8 > 0 )
    v9 = ProcNumber;
  ndisCompareProcNum(
    v9,
    *(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32
                                + 4LL * (unsigned int)(HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) - 1)));
  result = ndisCompareProcNum(v26, *(struct _PROCESSOR_NUMBER *)(v11 + 4 * v12));
  if ( (int)result > 0 )
    v14 = *(_PROCESSOR_NUMBER *)(v16 + 4 * v17);
  v18 = 0LL;
  if ( Next_high )
  {
    while ( 1 )
    {
      result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v16 + 4 * v18), v15);
      if ( (int)result >= 0 )
        break;
      v18 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v18 >= Next_high )
        goto LABEL_24;
    }
    result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v16 + 4 * v19), v14);
    if ( (int)result > 0 )
      v14 = *(_PROCESSOR_NUMBER *)(v20 + 4 * v21);
  }
LABEL_24:
  HIDWORD(a1[69].KeywordAll) = v15;
  LODWORD(a1[69].RegHandle) = v14;
  HIDWORD(a1[69].RegHandle) = IntegerData;
  return result;
}
