/*
 * XREFs of FormInquiryDeviceCharacteristicsData @ 0x1C0008F5C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryDeviceCharacteristicsData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 SrbDataBuffer; // r9
  unsigned int v5; // r10d
  __int64 v6; // r11
  _DWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v8);
  if ( *v8 >= 8u )
  {
    *(_BYTE *)(SrbDataBuffer + 7) &= 0xF0u;
    *(_WORD *)SrbDataBuffer = -20224;
    *(_WORD *)(SrbDataBuffer + 3) = 60;
    *(_BYTE *)(SrbDataBuffer + 5) = 1;
    *(_BYTE *)(v6 + 3) = 1;
  }
  else
  {
    LOBYTE(SrbDataBuffer) = 36;
    LOBYTE(v2) = 6;
    NVMeSetSenseData(v6, v2, v3, SrbDataBuffer);
    return (unsigned int)-1056964602;
  }
  return v5;
}
