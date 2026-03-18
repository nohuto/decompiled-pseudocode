/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C0008E74
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     IsDeallocateSupported @ 0x1C0009D0C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 SrbDataBuffer; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  unsigned int v9; // r11d
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // r10
  char v13; // r8
  char v14; // al
  _DWORD *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v16);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v7 = *(unsigned __int8 *)(v6 + 7);
  v8 = v16;
  if ( *v16 >= 8u )
  {
    *(_WORD *)SrbDataBuffer = -19968;
    *(_BYTE *)(SrbDataBuffer + 3) = 4;
    *(_BYTE *)(SrbDataBuffer + 5) &= 0x98u;
    v10 = IsDeallocateSupported(a1);
    *(_BYTE *)(v11 + 5) = ((v10 != 0) << 7) | v13 & 0x7F;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8 * v7 + 1184) + 73LL) == (_BYTE)v9 )
    {
      if ( !(unsigned __int8)IsDeallocateSupported(a1) )
      {
        *(_BYTE *)(v11 + 6) &= 0xF8u;
        goto LABEL_12;
      }
      v14 = *(_BYTE *)(v11 + 6) & 0xF8 | 1;
    }
    else
    {
      v14 = *(_BYTE *)(v11 + 6) & 0xF8 | 2;
    }
    *(_BYTE *)(v11 + 6) = v14;
LABEL_12:
    *v8 = 8;
    *(_BYTE *)(v12 + 3) = 1;
    return v9;
  }
  LOBYTE(SrbDataBuffer) = 36;
  LOBYTE(v3) = 6;
  NVMeSetSenseData(v6, v3, v4, SrbDataBuffer);
  return (unsigned int)-1056964602;
}
