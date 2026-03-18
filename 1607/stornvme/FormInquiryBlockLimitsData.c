/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C0008D88
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     IsDeallocateSupported @ 0x1C0009D0C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 SrbDataBuffer; // r11
  __int64 v7; // rbx
  _DWORD *v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  _DWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v13);
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10);
  else
    v7 = *(unsigned __int8 *)(v5 + 7);
  v8 = v13;
  if ( *v13 >= 0x14u )
  {
    *(_WORD *)SrbDataBuffer = -20480;
    if ( *v8 >= 0x24u
      && (unsigned __int8)IsDeallocateSupported(a1)
      && (v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 1184) + 52LL)) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 44);
      *(_BYTE *)(SrbDataBuffer + 3) = 60;
      v11 = (0x40000000 / v9) << 6;
      if ( v10 )
        v11 = v10;
      LODWORD(v13) = v11;
      *(_BYTE *)(SrbDataBuffer + 22) = BYTE1(v11);
      *(_BYTE *)(SrbDataBuffer + 21) = BYTE2(v13);
      *(_BYTE *)(SrbDataBuffer + 20) = BYTE3(v13);
      *(_BYTE *)(SrbDataBuffer + 23) = v11;
      *(_DWORD *)(SrbDataBuffer + 24) = 0x10000;
    }
    else
    {
      *(_BYTE *)(SrbDataBuffer + 3) = 16;
      *v8 = 20;
    }
    *(_BYTE *)(v5 + 3) = 1;
  }
  else
  {
    LOBYTE(v4) = 36;
    LOBYTE(v3) = 6;
    NVMeSetSenseData(v5, v3, v13, v4);
    LODWORD(v4) = -1056964602;
  }
  return (unsigned int)v4;
}
