/*
 * XREFs of NVMeSetSenseData @ 0x1C000E5FC
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 *     ScsiReadCapacityRequest @ 0x1C0001D38 (ScsiReadCapacityRequest.c)
 *     FormInquiryBlockLimitsData @ 0x1C0008D88 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0008E74 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0008F5C (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008FC4 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0009214 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00093DC (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0009554 (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0009E7C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 *     ScsiLogSenseRequest @ 0x1C000BA5C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C000BAE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     ScsiSanitizeRequest @ 0x1C000BE7C (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000C014 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C000C13C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C000C264 (ScsiStartStopUnitRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 * Callees:
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C0009628 (GetSrbScsiData.c)
 */

void *__fastcall NVMeSetSenseData(__int64 a1, char a2, __int64 a3, char a4)
{
  void *result; // rax
  char *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  char Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+39h] [rbp-17h]
  __int64 v12; // [rsp+41h] [rbp-Fh]
  char v13; // [rsp+49h] [rbp-7h]
  _BYTE *v14; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 v15; // [rsp+80h] [rbp+30h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v11 = 0xA000000000500LL;
  v12 = 0LL;
  v13 = 0;
  BYTE3(v12) = a4;
  v14 = 0LL;
  v9 = 0LL;
  v15 = 0;
  Src = -16;
  result = (void *)GetSrbScsiData(a1, 0LL, &v14, &v9, &v15);
  if ( v14 )
    *v14 = 2;
  v6 = (char *)v9;
  if ( v9 && v15 )
  {
    v7 = 18;
    if ( v15 <= 0x12u )
      v7 = v15;
    result = memmove(v9, &Src, v7);
    v8 = v15;
    *(_BYTE *)(a1 + 3) |= 0x80u;
    if ( v8 > v7 )
      return NVMeZeroMemory(&v6[v7], v8 - v7);
  }
  return result;
}
