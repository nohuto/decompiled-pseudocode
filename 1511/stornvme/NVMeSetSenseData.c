/*
 * XREFs of NVMeSetSenseData @ 0x1C000D49C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001F40 (NVMeHwBuildIo.c)
 *     FormInquiryStandardData @ 0x1C00066B4 (FormInquiryStandardData.c)
 *     FormInquirySerialNumberData @ 0x1C0006898 (FormInquirySerialNumberData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0006A1C (FormInquiryDeviceIdentifiersData.c)
 *     FormInquiryBlockLimitsData @ 0x1C0006C94 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0006D80 (FormInquiryBlockProvisioningData.c)
 *     ScsiInquiryRequest @ 0x1C0006E78 (ScsiInquiryRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0006FFC (ScsiReadCapacityRequest.c)
 *     ScsiModeSenseRequest @ 0x1C00074E4 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0007674 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C0007924 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0007B2C (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C0007CBC (ScsiLogSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x1C0007DE0 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C0007F64 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0008160 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0008214 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0008334 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0008454 (ScsiSanitizeRequest.c)
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0005F2C (GetSrbScsiData.c)
 *     memmove @ 0x1C000EC00 (memmove.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

unsigned __int8 __fastcall NVMeSetSenseData(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned __int8 result; // al
  char *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  char *v10; // rcx
  unsigned int v11; // ebx
  void *v12; // [rsp+30h] [rbp-20h] BYREF
  char Src; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+39h] [rbp-17h]
  __int64 v15; // [rsp+41h] [rbp-Fh]
  char v16; // [rsp+49h] [rbp-7h]
  _BYTE *v17; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+40h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v17 = 0LL;
  v12 = 0LL;
  v14 = 0xA000000000500LL;
  v15 = 0LL;
  v16 = 0;
  v18 = 0;
  BYTE3(v15) = a4;
  Src = -16;
  result = GetSrbScsiData(a1, 0LL, &v17, &v12, &v18);
  if ( v17 )
    *v17 = 2;
  v6 = (char *)v12;
  if ( v12 )
  {
    result = v18;
    if ( v18 )
    {
      v7 = v18;
      v8 = v18;
      if ( v18 > 0x12u )
        v8 = 18LL;
      result = (unsigned __int8)memmove(v12, &Src, (unsigned int)v8);
      *(_BYTE *)(a1 + 3) |= 0x80u;
      if ( v7 > (unsigned int)v8 )
      {
        v9 = v7 - v8;
        v10 = &v6[v8];
        if ( (v9 & 3) != 0 )
        {
          if ( v9 )
            return (unsigned __int8)memset(v10, 0, v9);
        }
        else
        {
          v11 = v9 >> 2;
          if ( v11 )
            return (unsigned __int8)memset(v10, 0, 4LL * v11);
        }
      }
    }
  }
  return result;
}
